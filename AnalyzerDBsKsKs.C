#define DecayTree_cxx
#include "AnalyzerDBsKsKs.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <iostream>

//histogramas--------------------------------------------------------------------------------------------------

TH1F* H_InvMass_Data = new TH1F("H_InvMass_Data", "Invariant Mass kpikpi", 100, 4700, 6000);
TH1F* H_pip_PT_Data = new TH1F("H_pip_PT_Data", "PT of pion plus", 100, 0, 8000);
TH1F* H_pim_PT_Data = new TH1F("H_pim_PT_Data", "PT of pion minus", 100, 0, 8000);
TH1F* H_Kp_PT_Data = new TH1F("H_Kp_PT_Data", "PT of kaon plus", 100, 0, 7000);
TH1F* H_Km_PT_Data = new TH1F("H_Km_PT_Data", "PT of kaon minus", 100, 0,7000);
TH1F* H_Kst_PT_Data = new TH1F("H_Kst_PT_Data", "PT of k star", 200, 0,16000);
TH1F* H_Kstb_PT_Data = new TH1F("H_Kstb_PT_Data", "PT of k star bar", 200, 0,16000);
TH1F* H_Kst_M_Data = new TH1F("H_Kst_M_Data", "InvMass of k star", 200, 0, 2400);
TH1F* H_Kstb_M_Data = new TH1F("H_Kstb_M_Data", "InvMass of k star bar", 200, 0, 2400);

TH1F* H_InvMass_MC = new TH1F("H_InvMass_MC", "Bs0 mass MC", 100, 4700, 6000);
TH1F* H_pip_PT_MC = new TH1F("H_pip_PT_MC", "PT of pion plus MC", 100, 0, 8000);
TH1F* H_pim_PT_MC = new TH1F("H_pim_PT_MC", "PT of pion minus MC", 100, 0, 8000);
TH1F* H_Kp_PT_MC = new TH1F("H_Kp_PT_MC", "PT of kaon plus MC", 100, 0, 7000);
TH1F* H_Km_PT_MC = new TH1F("H_Km_PT_MC", "PT of kaon minus MC", 100, 0,7000);
TH1F* H_Kst_PT_MC = new TH1F("H_Kst_PT_MC", "PT of k star MC", 200, 0,16000);
TH1F* H_Kstb_PT_MC = new TH1F("H_Kstb_PT_MC", "PT of k star bar MC", 200, 0,16000);
TH1F* H_Kst_M_MC = new TH1F("H_Kst_M_MC", "InvMass of k star MC", 200, 0, 2400);
TH1F* H_Kstb_M_MC = new TH1F("H_Kstb_M_MC", "InvMass of k star bar MC", 200, 0, 2400);

//Loop sobre todos los eventos----------------------------------------------------------------------------------
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
	
    // ----- Timer ---------------------------------------------------------------
    TStopwatch timer;
    timer.Start();
    // ---------------------------------------------------------------------------
    
//inicializo las variables:
   Float_t Mkpikpi = 0.0;

//constuyendo el loop
   if (fChain == 0) return;

   Long64_t nentries = fChain->GetEntriesFast();

   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;++jentry) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
	  printProgBar(jentry*100./nentries);
	  
	  
      //---------------------------selection process levels: ---------------------------------------------------------
      
/*LEVEL 1;      
      //LEVEL 1: Pt cuts:-------------------------------------------------------------------
      if(Type == "Data"){
         if(pip_PT>500. && Km_PT>500. && pim_PT>500. && Kp_PT>500.){
			 
				//Construcción de los cutrivectores
				kplus.SetPxPyPzE(Kp_PX,Kp_PY,Kp_PZ,Kp_PE);
				kminus.SetPxPyPzE(Km_PX,Km_PY,Km_PZ,Km_PE);
				piplus.SetPxPyPzE(pip_PX,pip_PY,pip_PZ,pip_PE);
				piminus.SetPxPyPzE(pim_PX,pim_PY,pim_PZ,pim_PE);
										
				//calculo masa invariante de los cuatro cuerpos
				Mkpikpi=(kplus+piminus+kminus+piplus).M();
				H_InvMass_Data->Fill(Mkpikpi);
													 
				H_pim_PT_Data->Fill(pim_PT);
				H_pip_PT_Data->Fill(pip_PT);
			    H_Kp_PT_Data->Fill(Kp_PT);
				H_Km_PT_Data->Fill(Km_PT);
			    H_Kst_PT_Data->Fill(Kst_PT);
				H_Kstb_PT_Data->Fill(Kstb_PT);
				H_Kst_M_Data->Fill(Kst_M);
				H_Kstb_M_Data->Fill(Kstb_M);
		 }
	  }
	  
	  if(Type == "MC"){
		 if(Piplus_PT>500. && Kminus_PT>500. && Piminus_PT>500. && Kplus_PT>500.){
			 
			   //Rellenamos los histogramas
			   H_pim_PT_MC->Fill(Piminus_PT);
			   H_pip_PT_MC->Fill(Piplus_PT);
			   H_Kp_PT_MC->Fill(Kplus_PT);
			   H_Km_PT_MC->Fill(Kminus_PT);
			   H_Kst_PT_MC->Fill(Kst_PT);
			   H_Kstb_PT_MC->Fill(Kstb_PT);
			   H_Kst_M_MC->Fill(Kst_M);
			   H_Kstb_M_MC->Fill(Kstb_M);
			   H_InvMass_MC->Fill(B_s0_MM);
		 }
	  }
*/
/*LEVEL 2;   
      //LEVEL 2: Primary Vertex cuts:--------------------------------------------------------
      if(Type == "Data"){
         if(pip_PT>500. && Km_PT>500. && pim_PT>500. && Kp_PT>500. && pip_IPCHI2_OWNPV>36. && 
            Km_IPCHI2_OWNPV>36. && pim_IPCHI2_OWNPV>36. && Kp_IPCHI2_OWNPV>36.){
				  
				//Construcción de los cutrivectores
				kplus.SetPxPyPzE(Kp_PX,Kp_PY,Kp_PZ,Kp_PE);
				kminus.SetPxPyPzE(Km_PX,Km_PY,Km_PZ,Km_PE);
				piplus.SetPxPyPzE(pip_PX,pip_PY,pip_PZ,pip_PE);
				piminus.SetPxPyPzE(pim_PX,pim_PY,pim_PZ,pim_PE);
										
				//calculo masa invariante de los cuatro cuerpos
				Mkpikpi=(kplus+piminus+kminus+piplus).M();
				H_InvMass_Data->Fill(Mkpikpi);
													 
				H_pim_PT_Data->Fill(pim_PT);
				H_pip_PT_Data->Fill(pip_PT);
			    H_Kp_PT_Data->Fill(Kp_PT);
				H_Km_PT_Data->Fill(Km_PT);
			    H_Kst_PT_Data->Fill(Kst_PT);
				H_Kstb_PT_Data->Fill(Kstb_PT);
				H_Kst_M_Data->Fill(Kst_M);
				H_Kstb_M_Data->Fill(Kstb_M);
		 }
	  } 
	  	  
	  if(Type == "MC"){
		 if(Piplus_PT>500. && Kminus_PT>500. && Piminus_PT>500. && Kplus_PT>500. && 
		    Piplus_IPCHI2_OWNPV>36. && Kminus_IPCHI2_OWNPV>36. && Piminus_IPCHI2_OWNPV>36. && Kplus_IPCHI2_OWNPV>36.){
			 
			   //Rellenamos los histogramas
			   H_pim_PT_MC->Fill(Piminus_PT);
			   H_pip_PT_MC->Fill(Piplus_PT);
			   H_Kp_PT_MC->Fill(Kplus_PT);
			   H_Km_PT_MC->Fill(Kminus_PT);
			   H_Kst_PT_MC->Fill(Kst_PT);
			   H_Kstb_PT_MC->Fill(Kstb_PT);
			   H_Kst_M_MC->Fill(Kst_M);
			   H_Kstb_M_MC->Fill(Kstb_M);
			   H_InvMass_MC->Fill(B_s0_MM);
		 }
	  }  
*/
/*LEVEL 3;   
      //LEVEL 3: PIDk of kplus kminus piplus piminus cuts:-----------------------------------
      if(Type == "Data"){
         if(pip_PT>500. && Km_PT>500. && pim_PT>500. && Kp_PT>500. && pip_IPCHI2_OWNPV>36. && 
            Km_IPCHI2_OWNPV>36. && pim_IPCHI2_OWNPV>36. && Kp_IPCHI2_OWNPV>36. && Km_PIDK>2. && Kp_PIDK>2. &&
            pip_PIDK<0. && pim_PIDK<0.){
				  
				//Construcción de los cutrivectores
				kplus.SetPxPyPzE(Kp_PX,Kp_PY,Kp_PZ,Kp_PE);
				kminus.SetPxPyPzE(Km_PX,Km_PY,Km_PZ,Km_PE);
				piplus.SetPxPyPzE(pip_PX,pip_PY,pip_PZ,pip_PE);
				piminus.SetPxPyPzE(pim_PX,pim_PY,pim_PZ,pim_PE);
										
				//calculo masa invariante de los cuatro cuerpos
				Mkpikpi=(kplus+piminus+kminus+piplus).M();
				H_InvMass_Data->Fill(Mkpikpi);
													 
				H_pim_PT_Data->Fill(pim_PT);
				H_pip_PT_Data->Fill(pip_PT);
			    H_Kp_PT_Data->Fill(Kp_PT);
				H_Km_PT_Data->Fill(Km_PT);
			    H_Kst_PT_Data->Fill(Kst_PT);
				H_Kstb_PT_Data->Fill(Kstb_PT);
				H_Kst_M_Data->Fill(Kst_M);
				H_Kstb_M_Data->Fill(Kstb_M);
		 }
	  }
	  if(Type == "MC"){
		 if(Piplus_PT>500. && Kminus_PT>500. && Piminus_PT>500. && Kplus_PT>500. && 
		    Piplus_IPCHI2_OWNPV>36. && Kminus_IPCHI2_OWNPV>36. && Piminus_IPCHI2_OWNPV>36. && Kplus_IPCHI2_OWNPV>36. &&
		    Kminus_PIDK>2. && Kplus_PIDK>2.){
			 
			   //Rellenamos los histogramas
			   H_pim_PT_MC->Fill(Piminus_PT);
			   H_pip_PT_MC->Fill(Piplus_PT);
			   H_Kp_PT_MC->Fill(Kplus_PT);
			   H_Km_PT_MC->Fill(Kminus_PT);
			   H_Kst_PT_MC->Fill(Kst_PT);
			   H_Kstb_PT_MC->Fill(Kstb_PT);
			   H_Kst_M_MC->Fill(Kst_M);
			   H_Kstb_M_MC->Fill(Kstb_M);
			   H_InvMass_MC->Fill(B_s0_MM);
		 }
	  }  
*/
/*LEVEL 4;   
      //LEVEL 4: Good track reconstruction cuts:----------------------------------------------
      if(Type == "Data"){
         if(pip_PT>500. && Km_PT>500. && pim_PT>500. && Kp_PT>500. && pip_IPCHI2_OWNPV>36. && 
            Km_IPCHI2_OWNPV>36. && pim_IPCHI2_OWNPV>36. && Kp_IPCHI2_OWNPV>36. && Km_PIDK>2. && Kp_PIDK>2. &&
            pip_PIDK<0. && pim_PIDK<0. && pip_TRACK_CHI2NDOF<5 && Km_TRACK_CHI2NDOF<5 && pim_TRACK_CHI2NDOF<5 && Kp_TRACK_CHI2NDOF<5){
				  
				//Construcción de los cutrivectores
				kplus.SetPxPyPzE(Kp_PX,Kp_PY,Kp_PZ,Kp_PE);
				kminus.SetPxPyPzE(Km_PX,Km_PY,Km_PZ,Km_PE);
				piplus.SetPxPyPzE(pip_PX,pip_PY,pip_PZ,pip_PE);
				piminus.SetPxPyPzE(pim_PX,pim_PY,pim_PZ,pim_PE);
										
				//calculo masa invariante de los cuatro cuerpos
				Mkpikpi=(kplus+piminus+kminus+piplus).M();
				H_InvMass_Data->Fill(Mkpikpi);
													 
				H_pim_PT_Data->Fill(pim_PT);
				H_pip_PT_Data->Fill(pip_PT);
			    H_Kp_PT_Data->Fill(Kp_PT);
				H_Km_PT_Data->Fill(Km_PT);
			    H_Kst_PT_Data->Fill(Kst_PT);
				H_Kstb_PT_Data->Fill(Kstb_PT);
				H_Kst_M_Data->Fill(Kst_M);
				H_Kstb_M_Data->Fill(Kstb_M);
		 }
	  }
	  
	  if(Type == "MC"){
		 if(Piplus_PT>500. && Kminus_PT>500. && Piminus_PT>500. && Kplus_PT>500. && 
		    Piplus_IPCHI2_OWNPV>36. && Kminus_IPCHI2_OWNPV>36. && Piminus_IPCHI2_OWNPV>36. && Kplus_IPCHI2_OWNPV>36. &&
		    Kminus_PIDK>2. && Kplus_PIDK>2. && Piplus_TRACK_CHI2NDOF<5 && Kminus_TRACK_CHI2NDOF<5 && Piminus_TRACK_CHI2NDOF<5 && Kplus_TRACK_CHI2NDOF<5){
			 
			   //Rellenamos los histogramas
			   H_pim_PT_MC->Fill(Piminus_PT);
			   H_pip_PT_MC->Fill(Piplus_PT);
			   H_Kp_PT_MC->Fill(Kplus_PT);
			   H_Km_PT_MC->Fill(Kminus_PT);
			   H_Kst_PT_MC->Fill(Kst_PT);
			   H_Kstb_PT_MC->Fill(Kstb_PT);
			   H_Kst_M_MC->Fill(Kst_M);
			   H_Kstb_M_MC->Fill(Kstb_M);
			   H_InvMass_MC->Fill(B_s0_MM);
		 }
	  }  
*/
/*LEVEL 5;     
      //LEVEL 5: Protons veto cuts:----------------------------------------------
      if(Type == "Data"){
         if(pip_PT>500. && Km_PT>500. && pim_PT>500. && Kp_PT>500. && pip_IPCHI2_OWNPV>36. && 
            Km_IPCHI2_OWNPV>36. && pim_IPCHI2_OWNPV>36. && Kp_IPCHI2_OWNPV>36. && Km_PIDK>2. && Kp_PIDK>2. &&
            pip_PIDK<0. && pim_PIDK<0. && pip_TRACK_CHI2NDOF<5 && Km_TRACK_CHI2NDOF<5 && pim_TRACK_CHI2NDOF<5 && Kp_TRACK_CHI2NDOF<5 &&
            (Km_PIDp-Km_PIDK)<0. && (Kp_PIDp-Kp_PIDK)<0. && pim_PIDp<0. && pip_PIDp<0.){
				  
				//Construcción de los cutrivectores
				kplus.SetPxPyPzE(Kp_PX,Kp_PY,Kp_PZ,Kp_PE);
				kminus.SetPxPyPzE(Km_PX,Km_PY,Km_PZ,Km_PE);
				piplus.SetPxPyPzE(pip_PX,pip_PY,pip_PZ,pip_PE);
				piminus.SetPxPyPzE(pim_PX,pim_PY,pim_PZ,pim_PE);
										
				//calculo masa invariante de los cuatro cuerpos
				Mkpikpi=(kplus+piminus+kminus+piplus).M();
				H_InvMass_Data->Fill(Mkpikpi);
													 
				H_pim_PT_Data->Fill(pim_PT);
				H_pip_PT_Data->Fill(pip_PT);
			    H_Kp_PT_Data->Fill(Kp_PT);
				H_Km_PT_Data->Fill(Km_PT);
			    H_Kst_PT_Data->Fill(Kst_PT);
				H_Kstb_PT_Data->Fill(Kstb_PT);
				H_Kst_M_Data->Fill(Kst_M);
				H_Kstb_M_Data->Fill(Kstb_M);
		 }
	  }

	  if(Type == "MC"){
		 if(Piplus_PT>500. && Kminus_PT>500. && Piminus_PT>500. && Kplus_PT>500. && 
		    Piplus_IPCHI2_OWNPV>36. && Kminus_IPCHI2_OWNPV>36. && Piminus_IPCHI2_OWNPV>36. && Kplus_IPCHI2_OWNPV>36. &&
		    Kminus_PIDK>2. && Kplus_PIDK>2. && Piplus_TRACK_CHI2NDOF<5 && Kminus_TRACK_CHI2NDOF<5 && Piminus_TRACK_CHI2NDOF<5 && Kplus_TRACK_CHI2NDOF<5 &&
		    (Kminus_PIDp-Kminus_PIDK)<0. && (Kplus_PIDp-Kplus_PIDK)<0. && Piminus_PIDp<0. && Piplus_PIDp<0.){
			 
			   //Rellenamos los histogramas
			   H_pim_PT_MC->Fill(Piminus_PT);
			   H_pip_PT_MC->Fill(Piplus_PT);
			   H_Kp_PT_MC->Fill(Kplus_PT);
			   H_Km_PT_MC->Fill(Kminus_PT);
			   H_Kst_PT_MC->Fill(Kst_PT);
			   H_Kstb_PT_MC->Fill(Kstb_PT);
			   H_Kst_M_MC->Fill(Kst_M);
			   H_Kstb_M_MC->Fill(Kstb_M);
			   H_InvMass_MC->Fill(B_s0_MM);
		 }
	  }  
*/	  
/*LEVEL 6;	        
      //LEVEL 6: Kst and kstb mass cuts:----------------------------------------------
      if(Type == "Data"){
         if(pip_PT>500. && Km_PT>500. && pim_PT>500. && Kp_PT>500. && pip_IPCHI2_OWNPV>36. && 
            Km_IPCHI2_OWNPV>36. && pim_IPCHI2_OWNPV>36. && Kp_IPCHI2_OWNPV>36. && Km_PIDK>2. && Kp_PIDK>2. &&
            pip_PIDK<0. && pim_PIDK<0. && pip_TRACK_CHI2NDOF<5 && Km_TRACK_CHI2NDOF<5 && pim_TRACK_CHI2NDOF<5 && Kp_TRACK_CHI2NDOF<5 &&
            (Km_PIDp-Km_PIDK)<0. && (Kp_PIDp-Kp_PIDK)<0. && pim_PIDp<0. && pip_PIDp<0. && Kstb_M<1600. && Kst_M<1600.){
				  
				//Construcción de los cutrivectores
				kplus.SetPxPyPzE(Kp_PX,Kp_PY,Kp_PZ,Kp_PE);
				kminus.SetPxPyPzE(Km_PX,Km_PY,Km_PZ,Km_PE);
				piplus.SetPxPyPzE(pip_PX,pip_PY,pip_PZ,pip_PE);
				piminus.SetPxPyPzE(pim_PX,pim_PY,pim_PZ,pim_PE);
										
				//calculo masa invariante de los cuatro cuerpos
				Mkpikpi=(kplus+piminus+kminus+piplus).M();
				H_InvMass_Data->Fill(Mkpikpi);
													 
				H_pim_PT_Data->Fill(pim_PT);
				H_pip_PT_Data->Fill(pip_PT);
			    H_Kp_PT_Data->Fill(Kp_PT);
				H_Km_PT_Data->Fill(Km_PT);
			    H_Kst_PT_Data->Fill(Kst_PT);
				H_Kstb_PT_Data->Fill(Kstb_PT);
				H_Kst_M_Data->Fill(Kst_M);
				H_Kstb_M_Data->Fill(Kstb_M);
		 }
	  } 

	  if(Type == "MC"){
		 if(Piplus_PT>500. && Kminus_PT>500. && Piminus_PT>500. && Kplus_PT>500. && 
		    Piplus_IPCHI2_OWNPV>36. && Kminus_IPCHI2_OWNPV>36. && Piminus_IPCHI2_OWNPV>36. && Kplus_IPCHI2_OWNPV>36. &&
		    Kminus_PIDK>2. && Kplus_PIDK>2. && Piplus_TRACK_CHI2NDOF<5 && Kminus_TRACK_CHI2NDOF<5 && Piminus_TRACK_CHI2NDOF<5 && Kplus_TRACK_CHI2NDOF<5 &&
		    (Kminus_PIDp-Kminus_PIDK)<0. && (Kplus_PIDp-Kplus_PIDK)<0. && Piminus_PIDp<0. && Piplus_PIDp<0. &&
		    Kstb_M<1600. && Kst_M<1600.){
			 
			   //Rellenamos los histogramas
			   H_pim_PT_MC->Fill(Piminus_PT);
			   H_pip_PT_MC->Fill(Piplus_PT);
			   H_Kp_PT_MC->Fill(Kplus_PT);
			   H_Km_PT_MC->Fill(Kminus_PT);
			   H_Kst_PT_MC->Fill(Kst_PT);
			   H_Kstb_PT_MC->Fill(Kstb_PT);
			   H_Kst_M_MC->Fill(Kst_M);
			   H_Kstb_M_MC->Fill(Kstb_M);
			   H_InvMass_MC->Fill(B_s0_MM);
		 }
	  } 
*/
/*LEVEL 7;	  
	  //LEVEL 7: Kst and kstb PT cuts:------------------------------------------------------
      if(Type == "Data"){
         if(pip_PT>500. && Km_PT>500. && pim_PT>500. && Kp_PT>500. && pip_IPCHI2_OWNPV>36. && 
            Km_IPCHI2_OWNPV>36. && pim_IPCHI2_OWNPV>36. && Kp_IPCHI2_OWNPV>36. && Km_PIDK>2. && Kp_PIDK>2. &&
            pip_PIDK<0. && pim_PIDK<0. && pip_TRACK_CHI2NDOF<5 && Km_TRACK_CHI2NDOF<5 && pim_TRACK_CHI2NDOF<5 && Kp_TRACK_CHI2NDOF<5 &&
            (Km_PIDp-Km_PIDK)<0. && (Kp_PIDp-Kp_PIDK)<0. && pim_PIDp<0. && pip_PIDp<0. && Kstb_M<1600. && Kst_M<1600. &&
            Kstb_PT>900. && Kst_PT>900.){
				  
				//Construcción de los cutrivectores
				kplus.SetPxPyPzE(Kp_PX,Kp_PY,Kp_PZ,Kp_PE);
				kminus.SetPxPyPzE(Km_PX,Km_PY,Km_PZ,Km_PE);
				piplus.SetPxPyPzE(pip_PX,pip_PY,pip_PZ,pip_PE);
				piminus.SetPxPyPzE(pim_PX,pim_PY,pim_PZ,pim_PE);
										
				//calculo masa invariante de los cuatro cuerpos
				Mkpikpi=(kplus+piminus+kminus+piplus).M();
				H_InvMass_Data->Fill(Mkpikpi);
													 
				H_pim_PT_Data->Fill(pim_PT);
				H_pip_PT_Data->Fill(pip_PT);
			    H_Kp_PT_Data->Fill(Kp_PT);
				H_Km_PT_Data->Fill(Km_PT);
			    H_Kst_PT_Data->Fill(Kst_PT);
				H_Kstb_PT_Data->Fill(Kstb_PT);
				H_Kst_M_Data->Fill(Kst_M);
				H_Kstb_M_Data->Fill(Kstb_M);
		 }
	  }
	  
	  if(Type == "MC"){
		 if(Piplus_PT>500. && Kminus_PT>500. && Piminus_PT>500. && Kplus_PT>500. && 
		    Piplus_IPCHI2_OWNPV>36. && Kminus_IPCHI2_OWNPV>36. && Piminus_IPCHI2_OWNPV>36. && Kplus_IPCHI2_OWNPV>36. &&
		    Kminus_PIDK>2. && Kplus_PIDK>2. && Piplus_TRACK_CHI2NDOF<5 && Kminus_TRACK_CHI2NDOF<5 && Piminus_TRACK_CHI2NDOF<5 && Kplus_TRACK_CHI2NDOF<5 &&
		    (Kminus_PIDp-Kminus_PIDK)<0. && (Kplus_PIDp-Kplus_PIDK)<0. && Piminus_PIDp<0. && Piplus_PIDp<0. &&
		    Kstb_M<1600. && Kst_M<1600. && Kstb_PT>900. && Kst_PT>900.){
			 
			   //Rellenamos los histogramas
			   H_pim_PT_MC->Fill(Piminus_PT);
			   H_pip_PT_MC->Fill(Piplus_PT);
			   H_Kp_PT_MC->Fill(Kplus_PT);
			   H_Km_PT_MC->Fill(Kminus_PT);
			   H_Kst_PT_MC->Fill(Kst_PT);
			   H_Kstb_PT_MC->Fill(Kstb_PT);
			   H_Kst_M_MC->Fill(Kst_M);
			   H_Kstb_M_MC->Fill(Kstb_M);
			   H_InvMass_MC->Fill(B_s0_MM);
		 }
	  } 	  
*/
/*LEVEL 8;	  
	  //LEVEL 8: Fit tool vertex chi2 kst and kstb cuts:----------------------------------------------
      if(Type == "Data"){
         if(pip_PT>500. && Km_PT>500. && pim_PT>500. && Kp_PT>500. && pip_IPCHI2_OWNPV>36. && 
            Km_IPCHI2_OWNPV>36. && pim_IPCHI2_OWNPV>36. && Kp_IPCHI2_OWNPV>36. && Km_PIDK>2. && Kp_PIDK>2. &&
            pip_PIDK<0. && pim_PIDK<0. && pip_TRACK_CHI2NDOF<5 && Km_TRACK_CHI2NDOF<5 && pim_TRACK_CHI2NDOF<5 && Kp_TRACK_CHI2NDOF<5 &&
            (Km_PIDp-Km_PIDK)<0. && (Kp_PIDp-Kp_PIDK)<0. && pim_PIDp<0. && pip_PIDp<0. && Kstb_M<1600. && Kst_M<1600. &&
            Kstb_PT>900. && Kst_PT>900.&& Kstb_ENDVERTEX_CHI2<9. && Kst_ENDVERTEX_CHI2<9.){
				  
				//Construcción de los cutrivectores
				kplus.SetPxPyPzE(Kp_PX,Kp_PY,Kp_PZ,Kp_PE);
				kminus.SetPxPyPzE(Km_PX,Km_PY,Km_PZ,Km_PE);
				piplus.SetPxPyPzE(pip_PX,pip_PY,pip_PZ,pip_PE);
				piminus.SetPxPyPzE(pim_PX,pim_PY,pim_PZ,pim_PE);
										
				//calculo masa invariante de los cuatro cuerpos
				Mkpikpi=(kplus+piminus+kminus+piplus).M();
				H_InvMass_Data->Fill(Mkpikpi);
													 
				H_pim_PT_Data->Fill(pim_PT);
				H_pip_PT_Data->Fill(pip_PT);
			    H_Kp_PT_Data->Fill(Kp_PT);
				H_Km_PT_Data->Fill(Km_PT);
			    H_Kst_PT_Data->Fill(Kst_PT);
				H_Kstb_PT_Data->Fill(Kstb_PT);
				H_Kst_M_Data->Fill(Kst_M);
				H_Kstb_M_Data->Fill(Kstb_M);
		 }
	  }

	  if(Type == "MC"){
		 if(Piplus_PT>500. && Kminus_PT>500. && Piminus_PT>500. && Kplus_PT>500. && 
		    Piplus_IPCHI2_OWNPV>36. && Kminus_IPCHI2_OWNPV>36. && Piminus_IPCHI2_OWNPV>36. && Kplus_IPCHI2_OWNPV>36. &&
		    Kminus_PIDK>2. && Kplus_PIDK>2. && Piplus_TRACK_CHI2NDOF<5 && Kminus_TRACK_CHI2NDOF<5 && Piminus_TRACK_CHI2NDOF<5 && Kplus_TRACK_CHI2NDOF<5 &&
		    (Kminus_PIDp-Kminus_PIDK)<0. && (Kplus_PIDp-Kplus_PIDK)<0. && Piminus_PIDp<0. && Piplus_PIDp<0. &&
		    Kstb_M<1600. && Kst_M<1600. && Kstb_PT>900. && Kst_PT>900. && Kstb_ENDVERTEX_CHI2<9. && Kst_ENDVERTEX_CHI2<9.){
			 
			   //Rellenamos los histogramas
			   H_pim_PT_MC->Fill(Piminus_PT);
			   H_pip_PT_MC->Fill(Piplus_PT);
			   H_Kp_PT_MC->Fill(Kplus_PT);
			   H_Km_PT_MC->Fill(Kminus_PT);
			   H_Kst_PT_MC->Fill(Kst_PT);
			   H_Kstb_PT_MC->Fill(Kstb_PT);
			   H_Kst_M_MC->Fill(Kst_M);
			   H_Kstb_M_MC->Fill(Kstb_M);
			   H_InvMass_MC->Fill(B_s0_MM);
		 }
	  } 		  
*/
/*LEVEL 9;
	  //LEVEL 9: DIRA kst and kstb cuts:---------------------------------------------------------
      if(Type == "Data"){
         if(pip_PT>500. && Km_PT>500. && pim_PT>500. && Kp_PT>500. && pip_IPCHI2_OWNPV>36. && 
            Km_IPCHI2_OWNPV>36. && pim_IPCHI2_OWNPV>36. && Kp_IPCHI2_OWNPV>36. && Km_PIDK>2. && Kp_PIDK>2. &&
            pip_PIDK<0. && pim_PIDK<0. && pip_TRACK_CHI2NDOF<5 && Km_TRACK_CHI2NDOF<5 && pim_TRACK_CHI2NDOF<5 && Kp_TRACK_CHI2NDOF<5 &&
            (Km_PIDp-Km_PIDK)<0. && (Kp_PIDp-Kp_PIDK)<0. && pim_PIDp<0. && pip_PIDp<0. && Kstb_M<1600. && Kst_M<1600. &&
            Kstb_PT>900. && Kst_PT>900.&& Kstb_ENDVERTEX_CHI2<9. && Kst_ENDVERTEX_CHI2<9.&& Kstb_DIRA_OWNPV>0. && Kst_DIRA_OWNPV>0.){
				  
				//Construcción de los cutrivectores
				kplus.SetPxPyPzE(Kp_PX,Kp_PY,Kp_PZ,Kp_PE);
				kminus.SetPxPyPzE(Km_PX,Km_PY,Km_PZ,Km_PE);
				piplus.SetPxPyPzE(pip_PX,pip_PY,pip_PZ,pip_PE);
				piminus.SetPxPyPzE(pim_PX,pim_PY,pim_PZ,pim_PE);
										
				//calculo masa invariante de los cuatro cuerpos
				Mkpikpi=(kplus+piminus+kminus+piplus).M();
				H_InvMass_Data->Fill(Mkpikpi);
													 
				H_pim_PT_Data->Fill(pim_PT);
				H_pip_PT_Data->Fill(pip_PT);
			    H_Kp_PT_Data->Fill(Kp_PT);
				H_Km_PT_Data->Fill(Km_PT);
			    H_Kst_PT_Data->Fill(Kst_PT);
				H_Kstb_PT_Data->Fill(Kstb_PT);
				H_Kst_M_Data->Fill(Kst_M);
				H_Kstb_M_Data->Fill(Kstb_M);
		 }
	  }	  

	  if(Type == "MC"){
		 if(Piplus_PT>500. && Kminus_PT>500. && Piminus_PT>500. && Kplus_PT>500. && 
		    Piplus_IPCHI2_OWNPV>36. && Kminus_IPCHI2_OWNPV>36. && Piminus_IPCHI2_OWNPV>36. && Kplus_IPCHI2_OWNPV>36. &&
		    Kminus_PIDK>2. && Kplus_PIDK>2. && Piplus_TRACK_CHI2NDOF<5 && Kminus_TRACK_CHI2NDOF<5 && Piminus_TRACK_CHI2NDOF<5 && Kplus_TRACK_CHI2NDOF<5 &&
		    (Kminus_PIDp-Kminus_PIDK)<0. && (Kplus_PIDp-Kplus_PIDK)<0. && Piminus_PIDp<0. && Piplus_PIDp<0. &&
		    Kstb_M<1600. && Kst_M<1600. && Kstb_PT>900. && Kst_PT>900. && Kstb_ENDVERTEX_CHI2<9. && Kst_ENDVERTEX_CHI2<9. &&
		    Kstb_DIRA_OWNPV>0. && Kst_DIRA_OWNPV>0.){
			 
			   //Rellenamos los histogramas
			   H_pim_PT_MC->Fill(Piminus_PT);
			   H_pip_PT_MC->Fill(Piplus_PT);
			   H_Kp_PT_MC->Fill(Kplus_PT);
			   H_Km_PT_MC->Fill(Kminus_PT);
			   H_Kst_PT_MC->Fill(Kst_PT);
			   H_Kstb_PT_MC->Fill(Kstb_PT);
			   H_Kst_M_MC->Fill(Kst_M);
			   H_Kstb_M_MC->Fill(Kstb_M);
			   H_InvMass_MC->Fill(B_s0_MM);
		 }
	  } 
*/	  	    
/*LEVEL 10;*/   
      //LEVEL 10; (veto to muons) Final cuts:-----------------------------------------------------------------------------------------
      if(Type == "Data"){
		  //tracks_pt. Limites al momento de las particulas finales k (+,-) pion (+,-) 
		  if(pip_PT>500. && Km_PT>500. && pim_PT>500. && Kp_PT>500.){
			  //tracks_chi2. La reconstrucción de la traza debe tener una desviación cuadrática de 6 sigmas en cuanto
			  //a que proceda del vértice secundario las cuatro partículas finales. Los K generados no vuelan por lo que 
			  //sus productos de desintegracion salen del mismo punto
			  if(pip_IPCHI2_OWNPV>36. && Km_IPCHI2_OWNPV>36. && pim_IPCHI2_OWNPV>36. && Kp_IPCHI2_OWNPV>36.){
				  //pid_kaons. De acuerdo a la definición del particle identification (vease apuntes de Juan Saborido)
				  if(Km_PIDK>2. && Kp_PIDK>2.){
					  //pid_pions. Se definen sobre los kaones por lo que debe ser un número negativo para que las
				      //particulas que identificamos sean piones.
				      if(pip_PIDK<0. && pim_PIDK<0.){
						  //trchi2dof. Se exige que la traza cumpla un chi square dividido por los grados de libertad.
						  //pedimos que sea un buen ajuste la traza reconstruida de cada partícula
						  if(pip_TRACK_CHI2NDOF<5 && Km_TRACK_CHI2NDOF<5 && pim_TRACK_CHI2NDOF<5 && Kp_TRACK_CHI2NDOF<5){
							  //vprotons. Se exige un veto a protones, es decir, que todas nuestras particulas reconstruidas
							  //a través del particle identification no sean protones
							  if((Km_PIDp-Km_PIDK)<0. && (Kp_PIDp-Kp_PIDK)<0. && pim_PIDp<0. && pip_PIDp<0.){
								  //Ks_mass. Se impone una selección sobre la masa de kstar y kstar bar
								  if(Kstb_M<1600. && Kst_M<1600.){
									  //Ks_pt. Se impone una selección sobre el momento del kstar y kstar bar
									  if(Kstb_PT>900. && Kst_PT>900.){
										  //Ks_Vchi2ndof
										  if(Kstb_ENDVERTEX_CHI2<9. && Kst_ENDVERTEX_CHI2<9.){
											  //Ks_DIRA
											  if(Kstb_DIRA_OWNPV>0. && Kst_DIRA_OWNPV>0.){
												  //Veto a muones. No queremos que ninguna de nuestras particulas sea un muon
												  if(pip_isMuon==0 && pim_isMuon==0 && Kp_isMuon==0 && Km_isMuon==0){
													  
													  //Construcción de los cutrivectores
													  kplus.SetPxPyPzE(Kp_PX,Kp_PY,Kp_PZ,Kp_PE);
													  kminus.SetPxPyPzE(Km_PX,Km_PY,Km_PZ,Km_PE);
													  piplus.SetPxPyPzE(pip_PX,pip_PY,pip_PZ,pip_PE);
													  piminus.SetPxPyPzE(pim_PX,pim_PY,pim_PZ,pim_PE);
										
													  //calculo masa invariante de los cuatro cuerpos
													  Mkpikpi=(kplus+piminus+kminus+piplus).M();
													  H_InvMass_Data->Fill(Mkpikpi);
													  
													  H_pim_PT_Data->Fill(pim_PT);
											    	  H_pip_PT_Data->Fill(pip_PT);
													  H_Kp_PT_Data->Fill(Kp_PT);
													  H_Km_PT_Data->Fill(Km_PT);
													  H_Kst_PT_Data->Fill(Kst_PT);
													  H_Kstb_PT_Data->Fill(Kstb_PT);
													  H_Kst_M_Data->Fill(Kst_M);
													  H_Kstb_M_Data->Fill(Kstb_M);
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
      
      //LEVEL 10; (veto to muons) Final cuts MC:-----------------------------------------------------------------------------------------
      if(Type == "MC"){
		  if(Piplus_PT>500. && Kminus_PT>500. && Piminus_PT>500. && Kplus_PT>500.){
			  if(Piplus_IPCHI2_OWNPV>36. && Kminus_IPCHI2_OWNPV>36. && Piminus_IPCHI2_OWNPV>36. && Kplus_IPCHI2_OWNPV>36.){
				  if(Kminus_PIDK>2. && Kplus_PIDK>2.){
				      if(Piplus_PIDK<0. && Piminus_PIDK<0.){
						  if(Piplus_TRACK_CHI2NDOF<5 && Kminus_TRACK_CHI2NDOF<5 && Piminus_TRACK_CHI2NDOF<5 && Kplus_TRACK_CHI2NDOF<5){
							  if((Kminus_PIDp-Kminus_PIDK)<0. && (Kplus_PIDp-Kplus_PIDK)<0. && Piminus_PIDp<0. && Piplus_PIDp<0.){
								  if(Kstb_M<1600. && Kst_M<1600.){
									  if(Kstb_PT>900. && Kst_PT>900.){
										  if(Kstb_ENDVERTEX_CHI2<9. && Kst_ENDVERTEX_CHI2<9.){
											  if(Kstb_DIRA_OWNPV>0. && Kst_DIRA_OWNPV>0.){
												  if(Piplus_isMuon==0 && Piminus_isMuon==0 && Kplus_isMuon==0 && Kminus_isMuon == 0){
													  
														//Rellenamos los histogramas
															H_pim_PT_MC->Fill(Piminus_PT);
															H_pip_PT_MC->Fill(Piplus_PT);
															H_Kp_PT_MC->Fill(Kplus_PT);
															H_Km_PT_MC->Fill(Kminus_PT);
															H_Kst_PT_MC->Fill(Kst_PT);
															H_Kstb_PT_MC->Fill(Kstb_PT);
															H_Kst_M_MC->Fill(Kst_M);
															H_Kstb_M_MC->Fill(Kstb_M);
															H_InvMass_MC->Fill(B_s0_MM);
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
 
cout << endl;	
std::cout<< "100" << "%   ¡Complete!  " << std::flush << "\r" << endl;

// ----- Finish --------------------------------------------------------------
timer.Stop();
Double_t rtime = timer.RealTime();
Double_t ctime = timer.CpuTime();
cout << endl;
cout << "Macro finished succesfully." << endl;
cout << "Real time " << rtime << " s, CPU time " << ctime << " s" << endl;
// ---------------------------------------------------------------------------    
}

void AnalyzerDBsKsKs::WriteHistos(){
  TString outputDir = "./Histograms";
  gSystem->mkdir(outputDir, true);
  out = new TFile(outputDir + "/Histos_" + sampleNameRoot + ".root", "RECREATE");
  
  if(Type == "Data"){
	H_InvMass_Data->Write();
	H_pim_PT_Data->Write();
	H_pip_PT_Data->Write();
	H_Kp_PT_Data->Write();
	H_Km_PT_Data->Write();
	H_Kst_PT_Data->Write();
	H_Kstb_PT_Data->Write();
	H_Kst_M_Data->Write();
	H_Kstb_M_Data->Write();
  }
  if(Type == "MC"){
	H_pim_PT_MC->Write();
	H_pip_PT_MC->Write();
	H_Kp_PT_MC->Write();
	H_Km_PT_MC->Write();
	H_Kst_PT_MC->Write();
	H_Kstb_PT_MC->Write();
    H_Kst_M_MC->Write();
    H_Kstb_M_MC->Write();
	H_InvMass_MC->Write();
  }
  
  out->Close();
  delete out;
}

