//R__LOAD_LIBRARY(AnalyzerDBsKsKs.C+)
#include "AnalyzerDBsKsKs.C"

const Int_t   nSamples = 2;
const Int_t   nsamples = 4;
const Int_t   nOptions = 2;

const TString SamplesRoot[nsamples] = {"DTT_2016_Reco16Strip28_Down_BHADRON", "DTT_2016_Reco16Strip28_Down_BHADRON",
										"Bs2Kst0Kst0_wide_MC2012_magDown_Bs2Kst0Kst0_13104001_Job1555", "Bs2Kst0Kst0_wide_MC2012_magUp_Bs2Kst0Kst0_13104001_Job1555"};
const TString Samples[nSamples] = {"Bs2KpiKpi/DecayTree", "Bs2Kst0Kst0/DecayTree"};
const TString Type[nOptions] = {"Data", "MC"};

void RunAnalysisBsKsKs(TString sampleNameRoot, TString sampleName, TString Type);

void RunAnalysisBsKsKs(TString sampleNameRoot, TString sampleName, TString Type){
  AnalyzerDBsKsKs* a = new AnalyzerDBsKsKs(sampleNameRoot, sampleName, Type);
  cout << " ### Analysing " << sampleNameRoot <<" "<< sampleName <<" "<< Type << "... \n";
  a->Loop();
  a->WriteHistos();
  delete a;
}
