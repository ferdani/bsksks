//R__LOAD_LIBRARY(AnalyzerDBsKsKs.C+)
#include "AnalyzerDBsKsKs.C"

const Int_t   nSamples = 1;
const Int_t   nsamples = 4;
const Int_t   nOptions = 2;

const TString SamplesRoot[nsamples] = {"DTT_2016_Reco16Strip28_Down_BHADRON", "DTT_2016_Reco16Strip28_Down_BHADRON", 
										"DTT_2016_Reco16Strip28_Down_BHADRON.root", "DTT_2016_Reco16Strip28_Up_BHADRON.root"};
const TString Samples[nSamples] = {"Bs2KpiKpi/DecayTree"};
const TString Type[nOptions] = {"Data", "MC"};

void RunAnalysisBsKsKs(TString sampleNameRoot, TString sampleName, TString Type);

void RunAnalysisBsKsKs(TString sampleNameRoot, TString sampleName, TString Type){
  AnalyzerDBsKsKs* a = new AnalyzerDBsKsKs(sampleNameRoot, sampleName, Type);
  cout << " ### Analysing " << sampleNameRoot <<" "<< sampleName <<" "<< Type << "... \n";
  a->Loop();
  a->WriteHistos();
  delete a;
}
