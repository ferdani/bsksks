//R__LOAD_LIBRARY(AnalyzerDBsKsKs.C+)
#include "AnalyzerDBsKsKs.C"

const Int_t   nSamples = 1;

const TString Samples[nSamples] = {"DecayTree"};

void RunAnalysisBsKsKs(TString sampleName);

void RunAnalysisBsKsKs(TString sampleName){
  AnalyzerDBsKsKs* a = new AnalyzerDBsKsKs(sampleName);
  //cout << " ### Analysing " << sampleName << "... \n";
  a->Loop();
  a->WriteHistos();
  delete a;
}
