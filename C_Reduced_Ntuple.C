
TCut cuts4() {

  TCut cuts_tracks_pt = "pip_PT>500 && Km_PT>500 && pim_PT>500 && Kp_PT>500" ;
  TCut cuts_tracks_chi2 = "pip_IPCHI2_OWNPV>36. && Km_IPCHI2_OWNPV>36. && pim_IPCHI2_OWNPV>36. && Kp_IPCHI2_OWNPV>36." ;
  TCut cuts_pid_kaons = "Km_PIDK>2. && Kp_PIDK>2." ;
  TCut cuts_pid_pions = "pip_PIDK<0. && pim_PIDK<0." ;
  TCut cuts_trchi2dof = "pip_TRACK_CHI2NDOF<5 && Km_TRACK_CHI2NDOF<5 && pim_TRACK_CHI2NDOF<5 && Kp_TRACK_CHI2NDOF<5" ;
  TCut cuts_pid_vprotons = "(Km_PIDp-Km_PIDK)<0. && (Kp_PIDp-Kp_PIDK)<0. && pim_PIDp<0. && pip_PIDp<0." ;

  TCut cuts_GD = cuts_tracks_pt + cuts_tracks_chi2 + cuts_pid_kaons + cuts_pid_pions + cuts_trchi2dof + cuts_pid_vprotons ;

  TCut cuts_Ks_mass = "Kstb_M<1600. && Kst_M<1600." ;
  TCut cuts_Ks_pt = "Kstb_PT>900. && Kst_PT>900." ;
  TCut cuts_Ks_Vchi2ndof = "Kstb_ENDVERTEX_CHI2<9. && Kst_ENDVERTEX_CHI2<9." ;
  TCut cuts_Ks_DIRA = "Kstb_DIRA_OWNPV>0. && Kst_DIRA_OWNPV>0." ;

  TCut cuts_D = cuts_Ks_mass + cuts_Ks_pt + cuts_Ks_Vchi2ndof + cuts_Ks_DIRA ;

  TCut cuts_muons = "pip_isMuon==0 && pim_isMuon==0 && Kp_isMuon==0 && Km_isMuon==0" ;

  TCut cuts_B = "(Bs_M<5200. || Bs_M>5500.)" ;

  //TCut cuts_GL = " && GLKsb.>0.22" ;                                             
  TCut cuts_GL = "" ;

  TCut cuts = cuts_GD + cuts_D + cuts_B + cuts_muons + cuts_GL ;

  return cuts ;

}

Double_t doca( Double_t x1, Double_t y1, Double_t z1, Double_t xp1, Double_t yp1, Double_t x2, Double_t y2, Double_t z2, Double_t xp2, Double_t yp2 ){

  Double_t difxp = xp2 - xp1 ;
  Double_t difyp = yp2 - yp1 ;

  Double_t equis = x1 - x2 + xp2*z2 - xp1*z1 ;
  Double_t ygrie = y1 - y2 + yp2*z2 - yp1*z1 ;

  Double_t zeta  = ( equis*difxp + ygrie*difyp ) / ( difxp*difxp + difyp*difyp ) ;

  Double_t nx1 = x1 + xp1*(zeta-z1) ;
  Double_t ny1 = y1 + yp1*(zeta-z1) ;
  Double_t nz1 = zeta ;

  Double_t nx2 = x2 + xp2*(zeta-z2) ;
  Double_t ny2 = y2 + yp2*(zeta-z2) ;
  Double_t nz2 = zeta ;

  Double_t dist = TMath::Sqrt( (nx1-nx2)*(nx1-nx2) + (ny1-ny2)*(ny1-ny2) + (nz1-nz2)*(nz1-nz2) ) ;

  return dist ;

}

void C_Reduce_Ntuple() {


   TFile *fold = TFile::Open("/home3/daniel.fernandez/Arboles/DTT_2016_Reco16Strip28_Up_BHADRON.root");
   //TFile *fold = TFile::Open("/home3/daniel.fernandez/Arboles/DTT_2016_Reco16Strip28_Down_BHADRON.root");                                                            

   TTree *Told = (TTree*)fold->Get("Bs2KpiKpi/DecayTree");
   //TTree *Told = (TTree*)fold->Get("DecayTree");                                 

   TCut cortes = cuts4() ;

   TFile *fnew = TFile::Open("BkgWindow_Podao_DTT_2016_Reco16Strip2_Up_BHADRON.root","recreate");
   //TFile *fnew = TFile::Open("BkgWindow_Podao_DTT_2016_Reco16Strip2_Down_BHADRON.root","recreate");
   TTree *Tnew = Told->CopyTree(cortes);
   //TTree *Tnew = Told->CopyTree("Kstb_M<1600. && Kst_M<1600.");                  

   Tnew->Write();
   fnew->Write();
   fnew->Close();
   fold->Close();
   delete fnew;
   delete fold;
}
  
