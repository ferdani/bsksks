//R__LOAD_LIBRARY(AnalyzerDBsKsKs.C+)
#include "AnalyzerDBsKsKs.C"

const Int_t   nSamples = 1;
const Int_t   nsamples = 1;

const TString SamplesRoot[nsamples] = {"DTT_2016_Reco16Strip28_Down_BHADRON"};
const TString Samples[nSamples] = {"DecayTree"};

void RunAnalysisBsKsKs(TString sampleNameRoot, TString sampleName);

void RunAnalysisBsKsKs(TString sampleNameRoot, TString sampleName){
  AnalyzerDBsKsKs* a = new AnalyzerDBsKsKs(sampleNameRoot, sampleName);
  cout << " ### Analysing " << sampleNameRoot <<" "<< sampleName << "... \n";
  a->Loop();
  a->WriteHistos();
  delete a;
}
