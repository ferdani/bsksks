#define AnalyzerDBsKsKs_cxx
#include "AnalyzerDBsKsKs.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

//histogramas
TH1F* H_InvariantMass = new TH1F("H_InvMass", "Invariant Mass kpikpi", 30, 0, 1200);

void AnalyzerDBsKsKs::Loop(){
//   In a ROOT session, you can do:
//      Root > .L AnalyzerDBsKsKs.C
//      Root > AnalyzerDBsKsKs t
//      Root > t.GetEntry(12); // Fill t data members with entry number 12
//      Root > t.Show();       // Show values of entry 12
//      Root > t.Show(16);     // Read and show values of entry 16
//      Root > t.Loop();       // Loop on all entries

	TLorentzVector kplus = TLorentzVector(0,0,0,0);
	TLorentzVector kminus = TLorentzVector(0,0,0,0);
	TLorentzVector piplus = TLorentzVector(0,0,0,0);
	TLorentzVector piminus = TLorentzVector(0,0,0,0);

//inicializo las variables:
   Float_t Mkpikpi = 0.0;	


//constuyendo el loop
   if (fChain == 0) return;

   Long64_t nentries = fChain->GetEntriesFast();

   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      
      //selección:
      if(pip_PT>500 && Km_PT>500 && pim_PT>500 && Kp_PT>500){
		  
		  if(pip_IPCHI2_OWNPV>36. && Km_IPCHI2_OWNPV>36. && pim_IPCHI2_OWNPV>36. && Kp_IPCHI2_OWNPV>36.){
			  
			  if(Km_PIDK>2. && Kp_PIDK>2.){
				  
				  if(pip_PIDK<0. && pim_PIDK<0.){
					  
					  if(pip_TRACK_CHI2NDOF<5 && Km_TRACK_CHI2NDOF<5 && pim_TRACK_CHI2NDOF<5 && Kp_TRACK_CHI2NDOF<5){
						  
						  if((Km_PIDp-Km_PIDK)<0. && (Kp_PIDp-Kp_PIDK)<0. && pim_PIDp<0. && pip_PIDp<0.){
							  
							  if(Kstb_M<1600. && Kst_M<1600.){
								  
								  if(Kstb_PT>900. && Kst_PT>900.){
									  
									  if(Kstb_ENDVERTEX_CHI2<9. && Kst_ENDVERTEX_CHI2<9.){
										  
										  if(Kstb_DIRA_OWNPV>0. && Kst_DIRA_OWNPV>0.){
											  
											  if(pip_isMuon==0 && pim_isMuon==0 && Kp_isMuon==0 && Km_isMuon == 0){
												  
													kplus.SetPxPyPzM(Kp_PX[ientry],Kp_PY[ientry],Kp_PZ[ientry],Kp_M[ientry]);
													kminus.SetPxPyPzM(Km_PX[ientry],Km_PY[ientry],Km_PZ[ientry],Km_M[ientry]);
													piplus.SetPxPyPzM(Pip_PX[ientry],Pip_PY[ientry],Pip_PZ[ientry],Pip_M[ientry]);
													piminus.SetPxPyPzM(Pim_PX[ientry],Pim_PY[ientry],Pim_PZ[ientry],Pim_M[ientry]);
										
													//calculo masa invariante de los cuatro cuerpos
													
													Mkpikpi=(kplus+piminus+kminus+piplus).M();
													H_InvariantMass->Fill(Mkpikpi);
													
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}   
}

void AnalyzerDBsKsKs::WriteHistos(){
  TString outputDir = "./Histograms";
  gSystem->mkdir(outputDir, true);
  out = new TFile(outputDir + "/Histos_" + sampleName + ".root", "RECREATE");
  
  H_InvariantMass->Write();
  out->Close();
  delete out;
}

