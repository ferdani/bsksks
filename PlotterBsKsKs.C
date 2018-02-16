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

TH1F* loadHistogram(TString sample, TString var){
  TFile* f;
  f = TFile::Open(pathToFiles + "Histos_" + sample + ".root");
  TH1F* h;
  f->GetObject("H_"+var, h);
  h->SetDirectory(0);
  delete f;
  return h;
}

void plotter(TString var){
  TH1F* data  = loadHistogram("data",       var);
  TH1F* ttbar = loadHistogram("ttbar",      var);
  TH1F* dy    = loadHistogram("dy",         var);
  TH1F* st    = loadHistogram("single_top", var);
  TH1F* wjets = loadHistogram("wjets",      var);
  TH1F* qcd   = loadHistogram("qcd",        var);
  TH1F* vv    = loadHistogram("ww",         var);
        vv->Add(loadHistogram("wz",         var));
        vv->Add(loadHistogram("zz",         var));

  data->SetMarkerStyle(20);
  data->SetMarkerColor(kBlack);
  ttbar->SetFillColor(kRed+1  );
  st   ->SetFillColor(kMagenta);
  dy   ->SetFillColor(kCyan   );
  wjets->SetFillColor(kGreen+2);
  qcd  ->SetFillColor(kGray);
  vv   ->SetFillColor(kOrange);

  THStack* hStack = new THStack("Stack_"+var, "");
  hStack->Add(qcd);
  hStack->Add(wjets);
  hStack->Add(vv);
  hStack->Add(dy);
  hStack->Add(st);
  hStack->Add(ttbar);

  TLegend* leg = new TLegend(0.8,0.8,0.98,0.98);
  leg->AddEntry(ttbar, Form("ttbar : %5.2f", ttbar->Integral() + ttbar->GetBinContent(ttbar->GetNbinsX()+2)), "f");
  leg->AddEntry(st, Form("s-top : %5.2f", st->Integral() + st->GetBinContent(st->GetNbinsX()+2)), "f");
  leg->AddEntry(dy, Form("DY : %5.2f", dy->Integral() + dy->GetBinContent(dy->GetNbinsX()+2)), "f");
  leg->AddEntry(vv, Form("Dibosons : %5.2f", vv->Integral() + vv->GetBinContent(vv->GetNbinsX()+2)), "f");
  leg->AddEntry(wjets, Form("W+Jets : %5.2f", wjets->Integral() + wjets->GetBinContent(wjets->GetNbinsX()+2)), "f");
  leg->AddEntry(qcd, Form("QCD : %5.2f", qcd->Integral()+ qcd->GetBinContent(qcd->GetNbinsX()+2)), "f");
  leg->AddEntry(data, Form("Data : %5.2f", data->Integral() + data->GetBinContent(data->GetNbinsX()+2)), "p");

  TCanvas *c = new TCanvas("c","c",10,10,800,600);

   if(var.Contains("NJet")){
      c->SetLogy(true);
   }

  //if(var == "NJet"){
     //hStack->SetMaximum(30);
  //}
  //if(var == "NMuon"){
    //hStack->SetMaximum(40);
  //}
  //if((var == "MuonIso1") || (var == "MuonIso2")){
    //hStack->SetMaximum(15);
  //}
  //if(var == "InvMass"){
     //hStack->SetMaximum(4);
  //}
 //if(var == "MET"){
    //hStack->SetMaximum(5);
 //}

  hStack->Draw("hist");
  data->Draw("pesame");
  leg->Draw();

  if((var == "InvMass") || (var == "PicoZ"))         xt = ("M_{ll} [GeV]");
  if(var == "DilepPt")                               xt = ("P_{T}^{ll} [GeV]");
  if(var == "MET")                                   xt = ("#slash{E}_{T} [GeV]");
  if(var == "Eta1")                                  xt = ("#eta (first muon)");
  if(var == "Eta2")                                  xt = ("#eta (second muon)");
  if(var == "NMuon")                                 xt = ("Number of muons");
  if(var == "NJet")                                  xt = ("Number of Jets");
  if(var == "Pt1")                                   xt = ("P_{T} first lepton");
  if(var == "Pt2")                                   xt = ("P_{T} second lepton");	
  if(var == "MuonIso1")                              xt = ("Isolation first #mu");
  if(var == "MuonIso2")                              xt = ("Isolation second #mu");  

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
