//R__LOAD_LIBRARY(AnalyzerDBsKsKs.C+)
#include "AnalyzerDBsKsKs.C"

const Int_t   nSamples = 1;

TFile *f1 = new TFile("/home3/daniel.fernandez/Arboles/DTT_2016_Reco16Strip28_Down_BHADRON.root")
TTree *t = (TTree *)f1->Get("Bs2KpiKpi/DecayTree")

const TString Samples[nSamples] = {"t"};

const TString Samples[nSamples] = {"DecayTree"};

void RunAnalysisBsKsKs(TString sampleName);

void RunAnalysisBsKsKs(TString sampleName){
  AnalyzerDBsKsKs* a = new AnalyzerDBsKsKs(sampleName);
  //cout << " ### Analysing " << sampleName << "... \n";
  a->Loop();
  a->WriteHistos();
  delete a;
}
