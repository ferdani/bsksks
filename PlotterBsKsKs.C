#include "TString.h"
#include <iostream>
#include "TH1F.h"
#include "THStack.h"
#include "TLegend.h"
#include "TCanvas.h"

const TString pathToFiles = "./Histograms/";
const Float_t Lumi = 50.0;

const TString outputDir = "./Plots";
TString xt; //titulo variable para el eje x.

TH1F* loadHistogram(TString sampleNameRoot, TString var, TString Type){
  TFile* f;
  f = TFile::Open(pathToFiles + "Histos_" + sampleNameRoot + ".root");
  TH1F* h;
  f->GetObject("H_"+var+"_"+Type, h);
  h->SetDirectory(0);
  delete f;
  return h;	  
}

void PlotterBsKsKs(TString var){
  //Data Up and Down samples:
  TH1F* data  = loadHistogram("DTT_2016_Reco16Strip28_Down_BHADRON", var, "Data");
        data->Add(loadHistogram("DTT_2016_Reco16Strip28_Up_BHADRON", var, "Data"));
  //TH1F* data = loadHistogram("DecayTree", var, "Data");

  //Monte Carlo Down and Up samples:
  TH1F* MC  = loadHistogram("Bs2Kst0Kst0_wide_MC2012_magDown_Bs2Kst0Kst0_13104001_Job1555", var, "MC");
        MC->Add(loadHistogram("Bs2Kst0Kst0_wide_MC2012_magUp_Bs2Kst0Kst0_13104001_Job1553", var, "MC"));

  data->SetMarkerStyle(20);
  data->SetMarkerColor(kBlack);
  MC->SetFillColor(kRed+1);
  MC->Scale(data->Integral()/MC->Integral());

  THStack* hStack = new THStack("Stack_"+var, "");
  hStack->Add(MC);
  

  TLegend* leg = new TLegend(0.8,0.8,0.98,0.98);
  leg->AddEntry(data, Form("Data : %5.2f", data->Integral() + data->GetBinContent(data->GetNbinsX()+2)), "p");
  leg->AddEntry(MC, Form("MC : %5.2f", MC->Integral() + MC->GetBinContent(MC->GetNbinsX()+2)), "f");

  TCanvas *c = new TCanvas("c","c",10,10,800,600);

  hStack->Draw("hist");
  data->Draw("pesame");
  leg->Draw();

  if(var == "InvMass")	    xt = ("M_{k #pi k #pi} [GeV]");
  if(var == "pip_PT")       xt = ("PT_{pip} [GeV]^{2}");
  if(var == "pim_PT")       xt = ("PT_{pim} [GeV]^{2}");
  if(var == "Kp_PT")        xt = ("PT_{Kp} [GeV]^{2}");
  if(var == "Km_PT")        xt = ("PT_{Km} [GeV]^{2}");
  if(var == "Kst_PT")       xt = ("PT_{Kst} [GeV]^{2}");
  if(var == "Kstb_PT")      xt = ("PT_{Kstb} [GeV]^{2}");
  if(var == "Kst_M")        xt = ("PT_{Kst} [GeV]^{2}");
  if(var == "Kstb_M")       xt = ("M_{Kstb} [GeV]");

  hStack->GetXaxis()->SetTitle(xt);
  hStack->GetYaxis()->SetTitle("Counts");
  hStack->GetYaxis()->SetTitleOffset(1.3);

  mylatex = new TLatex();
  mylatex->SetTextSize(0.04);
  mylatex->DrawLatexNDC(0.17, 0.91, "#font[12]{L=50 pb^{-1}} #sqrt{#font[12]{s}}#font[12]{= 7 TeV}");

  gSystem->mkdir(outputDir, true);

  c->Print(outputDir + "/" + var + ".png", "png");
  c->Print(outputDir + "/" + var + ".pdf", "pdf");
}
