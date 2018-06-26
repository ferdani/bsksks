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

TH1F* loadHistogram(TString sampleNameRoot, TString var){
  TFile* f;
  f = TFile::Open(pathToFiles + "Histos_" + sampleNameRoot + ".root");
  TH1F* h;
  f->GetObject("H_"+var, h);
  h->SetDirectory(0);
  delete f;
  return h;
}

void PlotterBsKsKs(TString var){
  TH1F* down  = loadHistogram("DTT_2016_Reco16Strip28_Down_BHADRON",       var);
  TH1F* up = loadHistogram("DTT_2016_Reco16Strip28_Up_BHADRON",      var);

  down->SetFillColor(kRed+1  );
  up   ->SetFillColor(kBlue);

  THStack* hStack = new THStack("Stack_"+var, "");
  hStack->Add(down);
  hStack->Add(up);

  TLegend* leg = new TLegend(0.8,0.8,0.98,0.98);
  leg->AddEntry(down, Form("down : %5.2f", down->Integral() + down->GetBinContent(down->GetNbinsX()+2)), "f");
  leg->AddEntry(up, Form("up : %5.2f", up->Integral() + up->GetBinContent(up->GetNbinsX()+2)), "f");

  TCanvas *c = new TCanvas("c","c",10,10,800,600);

  hStack->Draw("hist");
  leg->Draw();

  if((var == "InvMassNewCuts") || (var == "InvMassOldCuts")) xt = ("M_{k #pi k #pi} [GeV]");
  if(var == "pip_PT") xt = ("PT_{pip} [GeV]^{2}");
  if(var == "pim_PT") xt = ("PT_{pim} [GeV]^{2}");
  if(var == "Kp_PT") xt = ("PT_{Kp} [GeV]^{2}");
  if(var == "Km_PT") xt = ("PT_{Km} [GeV]^{2}");
  if(var == "Kst_PT") xt = ("PT_{Kst} [GeV]^{2}");
  if(var == "Kstb_PT") xt = ("PT_{Kstb} [GeV]^{2}");
  if((var == "Kst_M") || (var == "Kstb_M")) xt = ("M_{Kst} [GeV]");

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
