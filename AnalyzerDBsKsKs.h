//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Tue Feb 13 19:15:24 2018 by ROOT version 5.34/36
// from TTree DecayTree/DecayTree
// found on file: DTT_2016_Reco16Strip28_Down_BHADRON.root
//////////////////////////////////////////////////////////

#ifndef DecayTree_h
#define DecayTree_h 1

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TLorentzVector.h>
#include <TSystem.h>

// Header file for the classes stored in the TTree if any.

// Fixed size dimensions of array or collections stored in the TTree if any.
   const Int_t kMaxBs_ENDVERTEX_COV = 1;
   const Int_t kMaxBs_OWNPV_COV = 1;
   const Int_t kMaxBs_TOPPV_COV = 1;
   const Int_t kMaxKst_ENDVERTEX_COV = 1;
   const Int_t kMaxKst_OWNPV_COV = 1;
   const Int_t kMaxKst_TOPPV_COV = 1;
   const Int_t kMaxKst_ORIVX_COV = 1;
   const Int_t kMaxKp_OWNPV_COV = 1;
   const Int_t kMaxKp_TOPPV_COV = 1;
   const Int_t kMaxKp_ORIVX_COV = 1;
   const Int_t kMaxpim_OWNPV_COV = 1;
   const Int_t kMaxpim_TOPPV_COV = 1;
   const Int_t kMaxpim_ORIVX_COV = 1;
   const Int_t kMaxKstb_ENDVERTEX_COV = 1;
   const Int_t kMaxKstb_OWNPV_COV = 1;
   const Int_t kMaxKstb_TOPPV_COV = 1;
   const Int_t kMaxKstb_ORIVX_COV = 1;
   const Int_t kMaxKm_OWNPV_COV = 1;
   const Int_t kMaxKm_TOPPV_COV = 1;
   const Int_t kMaxKm_ORIVX_COV = 1;
   const Int_t kMaxpip_OWNPV_COV = 1;
   const Int_t kMaxpip_TOPPV_COV = 1;
   const Int_t kMaxpip_ORIVX_COV = 1;

class AnalyzerDBsKsKs {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   Double_t        Bs_LOKI_ENERGY;
   Double_t        Bs_LOKI_ETA;
   Double_t        Bs_LOKI_PHI;
   Double_t        Bs_MINIP;
   Double_t        Bs_MINIPCHI2;
   Double_t        Bs_MINIPNEXTBEST;
   Double_t        Bs_MINIPCHI2NEXTBEST;
   Int_t           nPV;
   Float_t         Bs_AllIP[100];   //[nPV]
   Float_t         Bs_AllIPchi2[100];   //[nPV]
   Float_t         Bs_AllDIRA[100];   //[nPV]
   Double_t        Bs_ENDVERTEX_X;
   Double_t        Bs_ENDVERTEX_Y;
   Double_t        Bs_ENDVERTEX_Z;
   Double_t        Bs_ENDVERTEX_XERR;
   Double_t        Bs_ENDVERTEX_YERR;
   Double_t        Bs_ENDVERTEX_ZERR;
   Double_t        Bs_ENDVERTEX_CHI2;
   Int_t           Bs_ENDVERTEX_NDOF;
   Float_t         Bs_ENDVERTEX_COV_[3][3];
   Double_t        Bs_OWNPV_X;
   Double_t        Bs_OWNPV_Y;
   Double_t        Bs_OWNPV_Z;
   Double_t        Bs_OWNPV_XERR;
   Double_t        Bs_OWNPV_YERR;
   Double_t        Bs_OWNPV_ZERR;
   Double_t        Bs_OWNPV_CHI2;
   Int_t           Bs_OWNPV_NDOF;
   Float_t         Bs_OWNPV_COV_[3][3];
   Double_t        Bs_IP_OWNPV;
   Double_t        Bs_IPCHI2_OWNPV;
   Double_t        Bs_FD_OWNPV;
   Double_t        Bs_FDCHI2_OWNPV;
   Double_t        Bs_DIRA_OWNPV;
   Double_t        Bs_TOPPV_X;
   Double_t        Bs_TOPPV_Y;
   Double_t        Bs_TOPPV_Z;
   Double_t        Bs_TOPPV_XERR;
   Double_t        Bs_TOPPV_YERR;
   Double_t        Bs_TOPPV_ZERR;
   Double_t        Bs_TOPPV_CHI2;
   Int_t           Bs_TOPPV_NDOF;
   Float_t         Bs_TOPPV_COV_[3][3];
   Double_t        Bs_IP_TOPPV;
   Double_t        Bs_IPCHI2_TOPPV;
   Double_t        Bs_FD_TOPPV;
   Double_t        Bs_FDCHI2_TOPPV;
   Double_t        Bs_DIRA_TOPPV;
   Double_t        Bs_P;
   Double_t        Bs_PT;
   Double_t        Bs_PE;
   Double_t        Bs_PX;
   Double_t        Bs_PY;
   Double_t        Bs_PZ;
   Double_t        Bs_REFPX;
   Double_t        Bs_REFPY;
   Double_t        Bs_REFPZ;
   Double_t        Bs_MM;
   Double_t        Bs_MMERR;
   Double_t        Bs_M;
   Int_t           Bs_ID;
   Double_t        Bs_TAU;
   Double_t        Bs_TAUERR;
   Double_t        Bs_TAUCHI2;
   Double_t        Bs_X;
   Double_t        Bs_Y;
   Bool_t          Bs_L0Global_Dec;
   Bool_t          Bs_L0Global_TIS;
   Bool_t          Bs_L0Global_TOS;
   Bool_t          Bs_Hlt1Global_Dec;
   Bool_t          Bs_Hlt1Global_TIS;
   Bool_t          Bs_Hlt1Global_TOS;
   Bool_t          Bs_Hlt1Phys_Dec;
   Bool_t          Bs_Hlt1Phys_TIS;
   Bool_t          Bs_Hlt1Phys_TOS;
   Bool_t          Bs_Hlt2Global_Dec;
   Bool_t          Bs_Hlt2Global_TIS;
   Bool_t          Bs_Hlt2Global_TOS;
   Bool_t          Bs_Hlt2Phys_Dec;
   Bool_t          Bs_Hlt2Phys_TIS;
   Bool_t          Bs_Hlt2Phys_TOS;
   Bool_t          Bs_L0HadronDecision_Dec;
   Bool_t          Bs_L0HadronDecision_TIS;
   Bool_t          Bs_L0HadronDecision_TOS;
   Bool_t          Bs_Hlt1TrackMVADecision_Dec;
   Bool_t          Bs_Hlt1TrackMVADecision_TIS;
   Bool_t          Bs_Hlt1TrackMVADecision_TOS;
   Bool_t          Bs_Hlt1TwoTrackMVADecision_Dec;
   Bool_t          Bs_Hlt1TwoTrackMVADecision_TIS;
   Bool_t          Bs_Hlt1TwoTrackMVADecision_TOS;
   Bool_t          Bs_Hlt2Topo2BodyDecision_Dec;
   Bool_t          Bs_Hlt2Topo2BodyDecision_TIS;
   Bool_t          Bs_Hlt2Topo2BodyDecision_TOS;
   Double_t        Kst_LOKI_ENERGY;
   Double_t        Kst_LOKI_ETA;
   Double_t        Kst_LOKI_PHI;
   Double_t        Kst_CosTheta;
   Double_t        Kst_MINIP;
   Double_t        Kst_MINIPCHI2;
   Double_t        Kst_MINIPNEXTBEST;
   Double_t        Kst_MINIPCHI2NEXTBEST;
   Float_t         Kst_AllIP[100];   //[nPV]
   Float_t         Kst_AllIPchi2[100];   //[nPV]
   Float_t         Kst_AllDIRA[100];   //[nPV]
   Double_t        Kst_ENDVERTEX_X;
   Double_t        Kst_ENDVERTEX_Y;
   Double_t        Kst_ENDVERTEX_Z;
   Double_t        Kst_ENDVERTEX_XERR;
   Double_t        Kst_ENDVERTEX_YERR;
   Double_t        Kst_ENDVERTEX_ZERR;
   Double_t        Kst_ENDVERTEX_CHI2;
   Int_t           Kst_ENDVERTEX_NDOF;
   Float_t         Kst_ENDVERTEX_COV_[3][3];
   Double_t        Kst_OWNPV_X;
   Double_t        Kst_OWNPV_Y;
   Double_t        Kst_OWNPV_Z;
   Double_t        Kst_OWNPV_XERR;
   Double_t        Kst_OWNPV_YERR;
   Double_t        Kst_OWNPV_ZERR;
   Double_t        Kst_OWNPV_CHI2;
   Int_t           Kst_OWNPV_NDOF;
   Float_t         Kst_OWNPV_COV_[3][3];
   Double_t        Kst_IP_OWNPV;
   Double_t        Kst_IPCHI2_OWNPV;
   Double_t        Kst_FD_OWNPV;
   Double_t        Kst_FDCHI2_OWNPV;
   Double_t        Kst_DIRA_OWNPV;
   Double_t        Kst_TOPPV_X;
   Double_t        Kst_TOPPV_Y;
   Double_t        Kst_TOPPV_Z;
   Double_t        Kst_TOPPV_XERR;
   Double_t        Kst_TOPPV_YERR;
   Double_t        Kst_TOPPV_ZERR;
   Double_t        Kst_TOPPV_CHI2;
   Int_t           Kst_TOPPV_NDOF;
   Float_t         Kst_TOPPV_COV_[3][3];
   Double_t        Kst_IP_TOPPV;
   Double_t        Kst_IPCHI2_TOPPV;
   Double_t        Kst_FD_TOPPV;
   Double_t        Kst_FDCHI2_TOPPV;
   Double_t        Kst_DIRA_TOPPV;
   Double_t        Kst_ORIVX_X;
   Double_t        Kst_ORIVX_Y;
   Double_t        Kst_ORIVX_Z;
   Double_t        Kst_ORIVX_XERR;
   Double_t        Kst_ORIVX_YERR;
   Double_t        Kst_ORIVX_ZERR;
   Double_t        Kst_ORIVX_CHI2;
   Int_t           Kst_ORIVX_NDOF;
   Float_t         Kst_ORIVX_COV_[3][3];
   Double_t        Kst_IP_ORIVX;
   Double_t        Kst_IPCHI2_ORIVX;
   Double_t        Kst_FD_ORIVX;
   Double_t        Kst_FDCHI2_ORIVX;
   Double_t        Kst_DIRA_ORIVX;
   Double_t        Kst_P;
   Double_t        Kst_PT;
   Double_t        Kst_PE;
   Double_t        Kst_PX;
   Double_t        Kst_PY;
   Double_t        Kst_PZ;
   Double_t        Kst_REFPX;
   Double_t        Kst_REFPY;
   Double_t        Kst_REFPZ;
   Double_t        Kst_MM;
   Double_t        Kst_MMERR;
   Double_t        Kst_M;
   Int_t           Kst_ID;
   Double_t        Kst_TAU;
   Double_t        Kst_TAUERR;
   Double_t        Kst_TAUCHI2;
   Double_t        Kst_X;
   Double_t        Kst_Y;
   Double_t        Kp_LOKI_ENERGY;
   Double_t        Kp_LOKI_ETA;
   Double_t        Kp_LOKI_PHI;
   Double_t        Kp_CosTheta;
   Double_t        Kp_MINIP;
   Double_t        Kp_MINIPCHI2;
   Double_t        Kp_MINIPNEXTBEST;
   Double_t        Kp_MINIPCHI2NEXTBEST;
   Float_t         Kp_AllIP[100];   //[nPV]
   Float_t         Kp_AllIPchi2[100];   //[nPV]
   Double_t        Kp_OWNPV_X;
   Double_t        Kp_OWNPV_Y;
   Double_t        Kp_OWNPV_Z;
   Double_t        Kp_OWNPV_XERR;
   Double_t        Kp_OWNPV_YERR;
   Double_t        Kp_OWNPV_ZERR;
   Double_t        Kp_OWNPV_CHI2;
   Int_t           Kp_OWNPV_NDOF;
   Float_t         Kp_OWNPV_COV_[3][3];
   Double_t        Kp_IP_OWNPV;
   Double_t        Kp_IPCHI2_OWNPV;
   Double_t        Kp_TOPPV_X;
   Double_t        Kp_TOPPV_Y;
   Double_t        Kp_TOPPV_Z;
   Double_t        Kp_TOPPV_XERR;
   Double_t        Kp_TOPPV_YERR;
   Double_t        Kp_TOPPV_ZERR;
   Double_t        Kp_TOPPV_CHI2;
   Int_t           Kp_TOPPV_NDOF;
   Float_t         Kp_TOPPV_COV_[3][3];
   Double_t        Kp_IP_TOPPV;
   Double_t        Kp_IPCHI2_TOPPV;
   Double_t        Kp_ORIVX_X;
   Double_t        Kp_ORIVX_Y;
   Double_t        Kp_ORIVX_Z;
   Double_t        Kp_ORIVX_XERR;
   Double_t        Kp_ORIVX_YERR;
   Double_t        Kp_ORIVX_ZERR;
   Double_t        Kp_ORIVX_CHI2;
   Int_t           Kp_ORIVX_NDOF;
   Float_t         Kp_ORIVX_COV_[3][3];
   Double_t        Kp_IP_ORIVX;
   Double_t        Kp_IPCHI2_ORIVX;
   Double_t        Kp_P;
   Double_t        Kp_PT;
   Double_t        Kp_PE;
   Double_t        Kp_PX;
   Double_t        Kp_PY;
   Double_t        Kp_PZ;
   Double_t        Kp_REFPX;
   Double_t        Kp_REFPY;
   Double_t        Kp_REFPZ;
   Double_t        Kp_M;
   Double_t        Kp_AtVtx_PE;
   Double_t        Kp_AtVtx_PX;
   Double_t        Kp_AtVtx_PY;
   Double_t        Kp_AtVtx_PZ;
   Int_t           Kp_ID;
   Double_t        Kp_PIDe;
   Double_t        Kp_PIDmu;
   Double_t        Kp_PIDK;
   Double_t        Kp_PIDp;
   Double_t        Kp_ProbNNe;
   Double_t        Kp_ProbNNk;
   Double_t        Kp_ProbNNp;
   Double_t        Kp_ProbNNpi;
   Double_t        Kp_ProbNNmu;
   Double_t        Kp_ProbNNghost;
   Bool_t          Kp_hasMuon;
   Bool_t          Kp_isMuon;
   Bool_t          Kp_hasRich;
   Bool_t          Kp_UsedRichAerogel;
   Bool_t          Kp_UsedRich1Gas;
   Bool_t          Kp_UsedRich2Gas;
   Bool_t          Kp_RichAboveElThres;
   Bool_t          Kp_RichAboveMuThres;
   Bool_t          Kp_RichAbovePiThres;
   Bool_t          Kp_RichAboveKaThres;
   Bool_t          Kp_RichAbovePrThres;
   Bool_t          Kp_hasCalo;
   Int_t           Kp_TRACK_Type;
   Int_t           Kp_TRACK_Key;
   Double_t        Kp_TRACK_CHI2NDOF;
   Double_t        Kp_TRACK_PCHI2;
   Double_t        Kp_TRACK_MatchCHI2;
   Double_t        Kp_TRACK_GhostProb;
   Double_t        Kp_TRACK_CloneDist;
   Double_t        Kp_TRACK_Likelihood;
   Double_t        Kp_X;
   Double_t        Kp_Y;
   Double_t        pim_LOKI_ENERGY;
   Double_t        pim_LOKI_ETA;
   Double_t        pim_LOKI_PHI;
   Double_t        pim_CosTheta;
   Double_t        pim_MINIP;
   Double_t        pim_MINIPCHI2;
   Double_t        pim_MINIPNEXTBEST;
   Double_t        pim_MINIPCHI2NEXTBEST;
   Float_t         pim_AllIP[100];   //[nPV]
   Float_t         pim_AllIPchi2[100];   //[nPV]
   Double_t        pim_OWNPV_X;
   Double_t        pim_OWNPV_Y;
   Double_t        pim_OWNPV_Z;
   Double_t        pim_OWNPV_XERR;
   Double_t        pim_OWNPV_YERR;
   Double_t        pim_OWNPV_ZERR;
   Double_t        pim_OWNPV_CHI2;
   Int_t           pim_OWNPV_NDOF;
   Float_t         pim_OWNPV_COV_[3][3];
   Double_t        pim_IP_OWNPV;
   Double_t        pim_IPCHI2_OWNPV;
   Double_t        pim_TOPPV_X;
   Double_t        pim_TOPPV_Y;
   Double_t        pim_TOPPV_Z;
   Double_t        pim_TOPPV_XERR;
   Double_t        pim_TOPPV_YERR;
   Double_t        pim_TOPPV_ZERR;
   Double_t        pim_TOPPV_CHI2;
   Int_t           pim_TOPPV_NDOF;
   Float_t         pim_TOPPV_COV_[3][3];
   Double_t        pim_IP_TOPPV;
   Double_t        pim_IPCHI2_TOPPV;
   Double_t        pim_ORIVX_X;
   Double_t        pim_ORIVX_Y;
   Double_t        pim_ORIVX_Z;
   Double_t        pim_ORIVX_XERR;
   Double_t        pim_ORIVX_YERR;
   Double_t        pim_ORIVX_ZERR;
   Double_t        pim_ORIVX_CHI2;
   Int_t           pim_ORIVX_NDOF;
   Float_t         pim_ORIVX_COV_[3][3];
   Double_t        pim_IP_ORIVX;
   Double_t        pim_IPCHI2_ORIVX;
   Double_t        pim_P;
   Double_t        pim_PT;
   Double_t        pim_PE;
   Double_t        pim_PX;
   Double_t        pim_PY;
   Double_t        pim_PZ;
   Double_t        pim_REFPX;
   Double_t        pim_REFPY;
   Double_t        pim_REFPZ;
   Double_t        pim_M;
   Double_t        pim_AtVtx_PE;
   Double_t        pim_AtVtx_PX;
   Double_t        pim_AtVtx_PY;
   Double_t        pim_AtVtx_PZ;
   Int_t           pim_ID;
   Double_t        pim_PIDe;
   Double_t        pim_PIDmu;
   Double_t        pim_PIDK;
   Double_t        pim_PIDp;
   Double_t        pim_ProbNNe;
   Double_t        pim_ProbNNk;
   Double_t        pim_ProbNNp;
   Double_t        pim_ProbNNpi;
   Double_t        pim_ProbNNmu;
   Double_t        pim_ProbNNghost;
   Bool_t          pim_hasMuon;
   Bool_t          pim_isMuon;
   Bool_t          pim_hasRich;
   Bool_t          pim_UsedRichAerogel;
   Bool_t          pim_UsedRich1Gas;
   Bool_t          pim_UsedRich2Gas;
   Bool_t          pim_RichAboveElThres;
   Bool_t          pim_RichAboveMuThres;
   Bool_t          pim_RichAbovePiThres;
   Bool_t          pim_RichAboveKaThres;
   Bool_t          pim_RichAbovePrThres;
   Bool_t          pim_hasCalo;
   Int_t           pim_TRACK_Type;
   Int_t           pim_TRACK_Key;
   Double_t        pim_TRACK_CHI2NDOF;
   Double_t        pim_TRACK_PCHI2;
   Double_t        pim_TRACK_MatchCHI2;
   Double_t        pim_TRACK_GhostProb;
   Double_t        pim_TRACK_CloneDist;
   Double_t        pim_TRACK_Likelihood;
   Double_t        pim_X;
   Double_t        pim_Y;
   Double_t        Kstb_LOKI_ENERGY;
   Double_t        Kstb_LOKI_ETA;
   Double_t        Kstb_LOKI_PHI;
   Double_t        Kstb_CosTheta;
   Double_t        Kstb_MINIP;
   Double_t        Kstb_MINIPCHI2;
   Double_t        Kstb_MINIPNEXTBEST;
   Double_t        Kstb_MINIPCHI2NEXTBEST;
   Float_t         Kstb_AllIP[100];   //[nPV]
   Float_t         Kstb_AllIPchi2[100];   //[nPV]
   Float_t         Kstb_AllDIRA[100];   //[nPV]
   Double_t        Kstb_ENDVERTEX_X;
   Double_t        Kstb_ENDVERTEX_Y;
   Double_t        Kstb_ENDVERTEX_Z;
   Double_t        Kstb_ENDVERTEX_XERR;
   Double_t        Kstb_ENDVERTEX_YERR;
   Double_t        Kstb_ENDVERTEX_ZERR;
   Double_t        Kstb_ENDVERTEX_CHI2;
   Int_t           Kstb_ENDVERTEX_NDOF;
   Float_t         Kstb_ENDVERTEX_COV_[3][3];
   Double_t        Kstb_OWNPV_X;
   Double_t        Kstb_OWNPV_Y;
   Double_t        Kstb_OWNPV_Z;
   Double_t        Kstb_OWNPV_XERR;
   Double_t        Kstb_OWNPV_YERR;
   Double_t        Kstb_OWNPV_ZERR;
   Double_t        Kstb_OWNPV_CHI2;
   Int_t           Kstb_OWNPV_NDOF;
   Float_t         Kstb_OWNPV_COV_[3][3];
   Double_t        Kstb_IP_OWNPV;
   Double_t        Kstb_IPCHI2_OWNPV;
   Double_t        Kstb_FD_OWNPV;
   Double_t        Kstb_FDCHI2_OWNPV;
   Double_t        Kstb_DIRA_OWNPV;
   Double_t        Kstb_TOPPV_X;
   Double_t        Kstb_TOPPV_Y;
   Double_t        Kstb_TOPPV_Z;
   Double_t        Kstb_TOPPV_XERR;
   Double_t        Kstb_TOPPV_YERR;
   Double_t        Kstb_TOPPV_ZERR;
   Double_t        Kstb_TOPPV_CHI2;
   Int_t           Kstb_TOPPV_NDOF;
   Float_t         Kstb_TOPPV_COV_[3][3];
   Double_t        Kstb_IP_TOPPV;
   Double_t        Kstb_IPCHI2_TOPPV;
   Double_t        Kstb_FD_TOPPV;
   Double_t        Kstb_FDCHI2_TOPPV;
   Double_t        Kstb_DIRA_TOPPV;
   Double_t        Kstb_ORIVX_X;
   Double_t        Kstb_ORIVX_Y;
   Double_t        Kstb_ORIVX_Z;
   Double_t        Kstb_ORIVX_XERR;
   Double_t        Kstb_ORIVX_YERR;
   Double_t        Kstb_ORIVX_ZERR;
   Double_t        Kstb_ORIVX_CHI2;
   Int_t           Kstb_ORIVX_NDOF;
   Float_t         Kstb_ORIVX_COV_[3][3];
   Double_t        Kstb_IP_ORIVX;
   Double_t        Kstb_IPCHI2_ORIVX;
   Double_t        Kstb_FD_ORIVX;
   Double_t        Kstb_FDCHI2_ORIVX;
   Double_t        Kstb_DIRA_ORIVX;
   Double_t        Kstb_P;
   Double_t        Kstb_PT;
   Double_t        Kstb_PE;
   Double_t        Kstb_PX;
   Double_t        Kstb_PY;
   Double_t        Kstb_PZ;
   Double_t        Kstb_REFPX;
   Double_t        Kstb_REFPY;
   Double_t        Kstb_REFPZ;
   Double_t        Kstb_MM;
   Double_t        Kstb_MMERR;
   Double_t        Kstb_M;
   Int_t           Kstb_ID;
   Double_t        Kstb_TAU;
   Double_t        Kstb_TAUERR;
   Double_t        Kstb_TAUCHI2;
   Double_t        Kstb_X;
   Double_t        Kstb_Y;
   Double_t        Km_LOKI_ENERGY;
   Double_t        Km_LOKI_ETA;
   Double_t        Km_LOKI_PHI;
   Double_t        Km_CosTheta;
   Double_t        Km_MINIP;
   Double_t        Km_MINIPCHI2;
   Double_t        Km_MINIPNEXTBEST;
   Double_t        Km_MINIPCHI2NEXTBEST;
   Float_t         Km_AllIP[100];   //[nPV]
   Float_t         Km_AllIPchi2[100];   //[nPV]
   Double_t        Km_OWNPV_X;
   Double_t        Km_OWNPV_Y;
   Double_t        Km_OWNPV_Z;
   Double_t        Km_OWNPV_XERR;
   Double_t        Km_OWNPV_YERR;
   Double_t        Km_OWNPV_ZERR;
   Double_t        Km_OWNPV_CHI2;
   Int_t           Km_OWNPV_NDOF;
   Float_t         Km_OWNPV_COV_[3][3];
   Double_t        Km_IP_OWNPV;
   Double_t        Km_IPCHI2_OWNPV;
   Double_t        Km_TOPPV_X;
   Double_t        Km_TOPPV_Y;
   Double_t        Km_TOPPV_Z;
   Double_t        Km_TOPPV_XERR;
   Double_t        Km_TOPPV_YERR;
   Double_t        Km_TOPPV_ZERR;
   Double_t        Km_TOPPV_CHI2;
   Int_t           Km_TOPPV_NDOF;
   Float_t         Km_TOPPV_COV_[3][3];
   Double_t        Km_IP_TOPPV;
   Double_t        Km_IPCHI2_TOPPV;
   Double_t        Km_ORIVX_X;
   Double_t        Km_ORIVX_Y;
   Double_t        Km_ORIVX_Z;
   Double_t        Km_ORIVX_XERR;
   Double_t        Km_ORIVX_YERR;
   Double_t        Km_ORIVX_ZERR;
   Double_t        Km_ORIVX_CHI2;
   Int_t           Km_ORIVX_NDOF;
   Float_t         Km_ORIVX_COV_[3][3];
   Double_t        Km_IP_ORIVX;
   Double_t        Km_IPCHI2_ORIVX;
   Double_t        Km_P;
   Double_t        Km_PT;
   Double_t        Km_PE;
   Double_t        Km_PX;
   Double_t        Km_PY;
   Double_t        Km_PZ;
   Double_t        Km_REFPX;
   Double_t        Km_REFPY;
   Double_t        Km_REFPZ;
   Double_t        Km_M;
   Double_t        Km_AtVtx_PE;
   Double_t        Km_AtVtx_PX;
   Double_t        Km_AtVtx_PY;
   Double_t        Km_AtVtx_PZ;
   Int_t           Km_ID;
   Double_t        Km_PIDe;
   Double_t        Km_PIDmu;
   Double_t        Km_PIDK;
   Double_t        Km_PIDp;
   Double_t        Km_ProbNNe;
   Double_t        Km_ProbNNk;
   Double_t        Km_ProbNNp;
   Double_t        Km_ProbNNpi;
   Double_t        Km_ProbNNmu;
   Double_t        Km_ProbNNghost;
   Bool_t          Km_hasMuon;
   Bool_t          Km_isMuon;
   Bool_t          Km_hasRich;
   Bool_t          Km_UsedRichAerogel;
   Bool_t          Km_UsedRich1Gas;
   Bool_t          Km_UsedRich2Gas;
   Bool_t          Km_RichAboveElThres;
   Bool_t          Km_RichAboveMuThres;
   Bool_t          Km_RichAbovePiThres;
   Bool_t          Km_RichAboveKaThres;
   Bool_t          Km_RichAbovePrThres;
   Bool_t          Km_hasCalo;
   Int_t           Km_TRACK_Type;
   Int_t           Km_TRACK_Key;
   Double_t        Km_TRACK_CHI2NDOF;
   Double_t        Km_TRACK_PCHI2;
   Double_t        Km_TRACK_MatchCHI2;
   Double_t        Km_TRACK_GhostProb;
   Double_t        Km_TRACK_CloneDist;
   Double_t        Km_TRACK_Likelihood;
   Double_t        Km_X;
   Double_t        Km_Y;
   Double_t        pip_LOKI_ENERGY;
   Double_t        pip_LOKI_ETA;
   Double_t        pip_LOKI_PHI;
   Double_t        pip_CosTheta;
   Double_t        pip_MINIP;
   Double_t        pip_MINIPCHI2;
   Double_t        pip_MINIPNEXTBEST;
   Double_t        pip_MINIPCHI2NEXTBEST;
   Float_t         pip_AllIP[100];   //[nPV]
   Float_t         pip_AllIPchi2[100];   //[nPV]
   Double_t        pip_OWNPV_X;
   Double_t        pip_OWNPV_Y;
   Double_t        pip_OWNPV_Z;
   Double_t        pip_OWNPV_XERR;
   Double_t        pip_OWNPV_YERR;
   Double_t        pip_OWNPV_ZERR;
   Double_t        pip_OWNPV_CHI2;
   Int_t           pip_OWNPV_NDOF;
   Float_t         pip_OWNPV_COV_[3][3];
   Double_t        pip_IP_OWNPV;
   Double_t        pip_IPCHI2_OWNPV;
   Double_t        pip_TOPPV_X;
   Double_t        pip_TOPPV_Y;
   Double_t        pip_TOPPV_Z;
   Double_t        pip_TOPPV_XERR;
   Double_t        pip_TOPPV_YERR;
   Double_t        pip_TOPPV_ZERR;
   Double_t        pip_TOPPV_CHI2;
   Int_t           pip_TOPPV_NDOF;
   Float_t         pip_TOPPV_COV_[3][3];
   Double_t        pip_IP_TOPPV;
   Double_t        pip_IPCHI2_TOPPV;
   Double_t        pip_ORIVX_X;
   Double_t        pip_ORIVX_Y;
   Double_t        pip_ORIVX_Z;
   Double_t        pip_ORIVX_XERR;
   Double_t        pip_ORIVX_YERR;
   Double_t        pip_ORIVX_ZERR;
   Double_t        pip_ORIVX_CHI2;
   Int_t           pip_ORIVX_NDOF;
   Float_t         pip_ORIVX_COV_[3][3];
   Double_t        pip_IP_ORIVX;
   Double_t        pip_IPCHI2_ORIVX;
   Double_t        pip_P;
   Double_t        pip_PT;
   Double_t        pip_PE;
   Double_t        pip_PX;
   Double_t        pip_PY;
   Double_t        pip_PZ;
   Double_t        pip_REFPX;
   Double_t        pip_REFPY;
   Double_t        pip_REFPZ;
   Double_t        pip_M;
   Double_t        pip_AtVtx_PE;
   Double_t        pip_AtVtx_PX;
   Double_t        pip_AtVtx_PY;
   Double_t        pip_AtVtx_PZ;
   Int_t           pip_ID;
   Double_t        pip_PIDe;
   Double_t        pip_PIDmu;
   Double_t        pip_PIDK;
   Double_t        pip_PIDp;
   Double_t        pip_ProbNNe;
   Double_t        pip_ProbNNk;
   Double_t        pip_ProbNNp;
   Double_t        pip_ProbNNpi;
   Double_t        pip_ProbNNmu;
   Double_t        pip_ProbNNghost;
   Bool_t          pip_hasMuon;
   Bool_t          pip_isMuon;
   Bool_t          pip_hasRich;
   Bool_t          pip_UsedRichAerogel;
   Bool_t          pip_UsedRich1Gas;
   Bool_t          pip_UsedRich2Gas;
   Bool_t          pip_RichAboveElThres;
   Bool_t          pip_RichAboveMuThres;
   Bool_t          pip_RichAbovePiThres;
   Bool_t          pip_RichAboveKaThres;
   Bool_t          pip_RichAbovePrThres;
   Bool_t          pip_hasCalo;
   Int_t           pip_TRACK_Type;
   Int_t           pip_TRACK_Key;
   Double_t        pip_TRACK_CHI2NDOF;
   Double_t        pip_TRACK_PCHI2;
   Double_t        pip_TRACK_MatchCHI2;
   Double_t        pip_TRACK_GhostProb;
   Double_t        pip_TRACK_CloneDist;
   Double_t        pip_TRACK_Likelihood;
   Double_t        pip_X;
   Double_t        pip_Y;
   UInt_t          nCandidate;
   ULong64_t       totCandidates;
   ULong64_t       EventInSequence;
   UInt_t          runNumber;
   ULong64_t       eventNumber;
   UInt_t          BCID;
   Int_t           BCType;
   UInt_t          OdinTCK;
   UInt_t          L0DUTCK;
   UInt_t          HLT1TCK;
   UInt_t          HLT2TCK;
   ULong64_t       GpsTime;
   Short_t         Polarity;
   Float_t         PVX[100];   //[nPV]
   Float_t         PVY[100];   //[nPV]
   Float_t         PVZ[100];   //[nPV]
   Float_t         PVXERR[100];   //[nPV]
   Float_t         PVYERR[100];   //[nPV]
   Float_t         PVZERR[100];   //[nPV]
   Float_t         PVCHI2[100];   //[nPV]
   Float_t         PVNDOF[100];   //[nPV]
   Float_t         PVNTRACKS[100];   //[nPV]
   Int_t           nPVs;
   Int_t           nTracks;
   Int_t           nLongTracks;
   Int_t           nDownstreamTracks;
   Int_t           nUpstreamTracks;
   Int_t           nVeloTracks;
   Int_t           nTTracks;
   Int_t           nBackTracks;
   Int_t           nRich1Hits;
   Int_t           nRich2Hits;
   Int_t           nVeloClusters;
   Int_t           nITClusters;
   Int_t           nTTClusters;
   Int_t           nOTClusters;
   Int_t           nSPDHits;
   Int_t           nMuonCoordsS0;
   Int_t           nMuonCoordsS1;
   Int_t           nMuonCoordsS2;
   Int_t           nMuonCoordsS3;
   Int_t           nMuonCoordsS4;
   Int_t           nMuonTracks;
   UInt_t          StrippingBs2K0stK0stNominalLineDecision;

   // List of branches
   TBranch        *b_Bs_LOKI_ENERGY;   //!
   TBranch        *b_Bs_LOKI_ETA;   //!
   TBranch        *b_Bs_LOKI_PHI;   //!
   TBranch        *b_Bs_MINIP;   //!
   TBranch        *b_Bs_MINIPCHI2;   //!
   TBranch        *b_Bs_MINIPNEXTBEST;   //!
   TBranch        *b_Bs_MINIPCHI2NEXTBEST;   //!
   TBranch        *b_nPV;   //!
   TBranch        *b_Bs_AllIP;   //!
   TBranch        *b_Bs_AllIPchi2;   //!
   TBranch        *b_Bs_AllDIRA;   //!
   TBranch        *b_Bs_ENDVERTEX_X;   //!
   TBranch        *b_Bs_ENDVERTEX_Y;   //!
   TBranch        *b_Bs_ENDVERTEX_Z;   //!
   TBranch        *b_Bs_ENDVERTEX_XERR;   //!
   TBranch        *b_Bs_ENDVERTEX_YERR;   //!
   TBranch        *b_Bs_ENDVERTEX_ZERR;   //!
   TBranch        *b_Bs_ENDVERTEX_CHI2;   //!
   TBranch        *b_Bs_ENDVERTEX_NDOF;   //!
   TBranch        *b_Bs_ENDVERTEX_COV_;   //!
   TBranch        *b_Bs_OWNPV_X;   //!
   TBranch        *b_Bs_OWNPV_Y;   //!
   TBranch        *b_Bs_OWNPV_Z;   //!
   TBranch        *b_Bs_OWNPV_XERR;   //!
   TBranch        *b_Bs_OWNPV_YERR;   //!
   TBranch        *b_Bs_OWNPV_ZERR;   //!
   TBranch        *b_Bs_OWNPV_CHI2;   //!
   TBranch        *b_Bs_OWNPV_NDOF;   //!
   TBranch        *b_Bs_OWNPV_COV_;   //!
   TBranch        *b_Bs_IP_OWNPV;   //!
   TBranch        *b_Bs_IPCHI2_OWNPV;   //!
   TBranch        *b_Bs_FD_OWNPV;   //!
   TBranch        *b_Bs_FDCHI2_OWNPV;   //!
   TBranch        *b_Bs_DIRA_OWNPV;   //!
   TBranch        *b_Bs_TOPPV_X;   //!
   TBranch        *b_Bs_TOPPV_Y;   //!
   TBranch        *b_Bs_TOPPV_Z;   //!
   TBranch        *b_Bs_TOPPV_XERR;   //!
   TBranch        *b_Bs_TOPPV_YERR;   //!
   TBranch        *b_Bs_TOPPV_ZERR;   //!
   TBranch        *b_Bs_TOPPV_CHI2;   //!
   TBranch        *b_Bs_TOPPV_NDOF;   //!
   TBranch        *b_Bs_TOPPV_COV_;   //!
   TBranch        *b_Bs_IP_TOPPV;   //!
   TBranch        *b_Bs_IPCHI2_TOPPV;   //!
   TBranch        *b_Bs_FD_TOPPV;   //!
   TBranch        *b_Bs_FDCHI2_TOPPV;   //!
   TBranch        *b_Bs_DIRA_TOPPV;   //!
   TBranch        *b_Bs_P;   //!
   TBranch        *b_Bs_PT;   //!
   TBranch        *b_Bs_PE;   //!
   TBranch        *b_Bs_PX;   //!
   TBranch        *b_Bs_PY;   //!
   TBranch        *b_Bs_PZ;   //!
   TBranch        *b_Bs_REFPX;   //!
   TBranch        *b_Bs_REFPY;   //!
   TBranch        *b_Bs_REFPZ;   //!
   TBranch        *b_Bs_MM;   //!
   TBranch        *b_Bs_MMERR;   //!
   TBranch        *b_Bs_M;   //!
   TBranch        *b_Bs_ID;   //!
   TBranch        *b_Bs_TAU;   //!
   TBranch        *b_Bs_TAUERR;   //!
   TBranch        *b_Bs_TAUCHI2;   //!
   TBranch        *b_Bs_X;   //!
   TBranch        *b_Bs_Y;   //!
   TBranch        *b_Bs_L0Global_Dec;   //!
   TBranch        *b_Bs_L0Global_TIS;   //!
   TBranch        *b_Bs_L0Global_TOS;   //!
   TBranch        *b_Bs_Hlt1Global_Dec;   //!
   TBranch        *b_Bs_Hlt1Global_TIS;   //!
   TBranch        *b_Bs_Hlt1Global_TOS;   //!
   TBranch        *b_Bs_Hlt1Phys_Dec;   //!
   TBranch        *b_Bs_Hlt1Phys_TIS;   //!
   TBranch        *b_Bs_Hlt1Phys_TOS;   //!
   TBranch        *b_Bs_Hlt2Global_Dec;   //!
   TBranch        *b_Bs_Hlt2Global_TIS;   //!
   TBranch        *b_Bs_Hlt2Global_TOS;   //!
   TBranch        *b_Bs_Hlt2Phys_Dec;   //!
   TBranch        *b_Bs_Hlt2Phys_TIS;   //!
   TBranch        *b_Bs_Hlt2Phys_TOS;   //!
   TBranch        *b_Bs_L0HadronDecision_Dec;   //!
   TBranch        *b_Bs_L0HadronDecision_TIS;   //!
   TBranch        *b_Bs_L0HadronDecision_TOS;   //!
   TBranch        *b_Bs_Hlt1TrackMVADecision_Dec;   //!
   TBranch        *b_Bs_Hlt1TrackMVADecision_TIS;   //!
   TBranch        *b_Bs_Hlt1TrackMVADecision_TOS;   //!
   TBranch        *b_Bs_Hlt1TwoTrackMVADecision_Dec;   //!
   TBranch        *b_Bs_Hlt1TwoTrackMVADecision_TIS;   //!
   TBranch        *b_Bs_Hlt1TwoTrackMVADecision_TOS;   //!
   TBranch        *b_Bs_Hlt2Topo2BodyDecision_Dec;   //!
   TBranch        *b_Bs_Hlt2Topo2BodyDecision_TIS;   //!
   TBranch        *b_Bs_Hlt2Topo2BodyDecision_TOS;   //!
   TBranch        *b_Kst_LOKI_ENERGY;   //!
   TBranch        *b_Kst_LOKI_ETA;   //!
   TBranch        *b_Kst_LOKI_PHI;   //!
   TBranch        *b_Kst_CosTheta;   //!
   TBranch        *b_Kst_MINIP;   //!
   TBranch        *b_Kst_MINIPCHI2;   //!
   TBranch        *b_Kst_MINIPNEXTBEST;   //!
   TBranch        *b_Kst_MINIPCHI2NEXTBEST;   //!
   TBranch        *b_Kst_AllIP;   //!
   TBranch        *b_Kst_AllIPchi2;   //!
   TBranch        *b_Kst_AllDIRA;   //!
   TBranch        *b_Kst_ENDVERTEX_X;   //!
   TBranch        *b_Kst_ENDVERTEX_Y;   //!
   TBranch        *b_Kst_ENDVERTEX_Z;   //!
   TBranch        *b_Kst_ENDVERTEX_XERR;   //!
   TBranch        *b_Kst_ENDVERTEX_YERR;   //!
   TBranch        *b_Kst_ENDVERTEX_ZERR;   //!
   TBranch        *b_Kst_ENDVERTEX_CHI2;   //!
   TBranch        *b_Kst_ENDVERTEX_NDOF;   //!
   TBranch        *b_Kst_ENDVERTEX_COV_;   //!
   TBranch        *b_Kst_OWNPV_X;   //!
   TBranch        *b_Kst_OWNPV_Y;   //!
   TBranch        *b_Kst_OWNPV_Z;   //!
   TBranch        *b_Kst_OWNPV_XERR;   //!
   TBranch        *b_Kst_OWNPV_YERR;   //!
   TBranch        *b_Kst_OWNPV_ZERR;   //!
   TBranch        *b_Kst_OWNPV_CHI2;   //!
   TBranch        *b_Kst_OWNPV_NDOF;   //!
   TBranch        *b_Kst_OWNPV_COV_;   //!
   TBranch        *b_Kst_IP_OWNPV;   //!
   TBranch        *b_Kst_IPCHI2_OWNPV;   //!
   TBranch        *b_Kst_FD_OWNPV;   //!
   TBranch        *b_Kst_FDCHI2_OWNPV;   //!
   TBranch        *b_Kst_DIRA_OWNPV;   //!
   TBranch        *b_Kst_TOPPV_X;   //!
   TBranch        *b_Kst_TOPPV_Y;   //!
   TBranch        *b_Kst_TOPPV_Z;   //!
   TBranch        *b_Kst_TOPPV_XERR;   //!
   TBranch        *b_Kst_TOPPV_YERR;   //!
   TBranch        *b_Kst_TOPPV_ZERR;   //!
   TBranch        *b_Kst_TOPPV_CHI2;   //!
   TBranch        *b_Kst_TOPPV_NDOF;   //!
   TBranch        *b_Kst_TOPPV_COV_;   //!
   TBranch        *b_Kst_IP_TOPPV;   //!
   TBranch        *b_Kst_IPCHI2_TOPPV;   //!
   TBranch        *b_Kst_FD_TOPPV;   //!
   TBranch        *b_Kst_FDCHI2_TOPPV;   //!
   TBranch        *b_Kst_DIRA_TOPPV;   //!
   TBranch        *b_Kst_ORIVX_X;   //!
   TBranch        *b_Kst_ORIVX_Y;   //!
   TBranch        *b_Kst_ORIVX_Z;   //!
   TBranch        *b_Kst_ORIVX_XERR;   //!
   TBranch        *b_Kst_ORIVX_YERR;   //!
   TBranch        *b_Kst_ORIVX_ZERR;   //!
   TBranch        *b_Kst_ORIVX_CHI2;   //!
   TBranch        *b_Kst_ORIVX_NDOF;   //!
   TBranch        *b_Kst_ORIVX_COV_;   //!
   TBranch        *b_Kst_IP_ORIVX;   //!
   TBranch        *b_Kst_IPCHI2_ORIVX;   //!
   TBranch        *b_Kst_FD_ORIVX;   //!
   TBranch        *b_Kst_FDCHI2_ORIVX;   //!
   TBranch        *b_Kst_DIRA_ORIVX;   //!
   TBranch        *b_Kst_P;   //!
   TBranch        *b_Kst_PT;   //!
   TBranch        *b_Kst_PE;   //!
   TBranch        *b_Kst_PX;   //!
   TBranch        *b_Kst_PY;   //!
   TBranch        *b_Kst_PZ;   //!
   TBranch        *b_Kst_REFPX;   //!
   TBranch        *b_Kst_REFPY;   //!
   TBranch        *b_Kst_REFPZ;   //!
   TBranch        *b_Kst_MM;   //!
   TBranch        *b_Kst_MMERR;   //!
   TBranch        *b_Kst_M;   //!
   TBranch        *b_Kst_ID;   //!
   TBranch        *b_Kst_TAU;   //!
   TBranch        *b_Kst_TAUERR;   //!
   TBranch        *b_Kst_TAUCHI2;   //!
   TBranch        *b_Kst_X;   //!
   TBranch        *b_Kst_Y;   //!
   TBranch        *b_Kp_LOKI_ENERGY;   //!
   TBranch        *b_Kp_LOKI_ETA;   //!
   TBranch        *b_Kp_LOKI_PHI;   //!
   TBranch        *b_Kp_CosTheta;   //!
   TBranch        *b_Kp_MINIP;   //!
   TBranch        *b_Kp_MINIPCHI2;   //!
   TBranch        *b_Kp_MINIPNEXTBEST;   //!
   TBranch        *b_Kp_MINIPCHI2NEXTBEST;   //!
   TBranch        *b_Kp_AllIP;   //!
   TBranch        *b_Kp_AllIPchi2;   //!
   TBranch        *b_Kp_OWNPV_X;   //!
   TBranch        *b_Kp_OWNPV_Y;   //!
   TBranch        *b_Kp_OWNPV_Z;   //!
   TBranch        *b_Kp_OWNPV_XERR;   //!
   TBranch        *b_Kp_OWNPV_YERR;   //!
   TBranch        *b_Kp_OWNPV_ZERR;   //!
   TBranch        *b_Kp_OWNPV_CHI2;   //!
   TBranch        *b_Kp_OWNPV_NDOF;   //!
   TBranch        *b_Kp_OWNPV_COV_;   //!
   TBranch        *b_Kp_IP_OWNPV;   //!
   TBranch        *b_Kp_IPCHI2_OWNPV;   //!
   TBranch        *b_Kp_TOPPV_X;   //!
   TBranch        *b_Kp_TOPPV_Y;   //!
   TBranch        *b_Kp_TOPPV_Z;   //!
   TBranch        *b_Kp_TOPPV_XERR;   //!
   TBranch        *b_Kp_TOPPV_YERR;   //!
   TBranch        *b_Kp_TOPPV_ZERR;   //!
   TBranch        *b_Kp_TOPPV_CHI2;   //!
   TBranch        *b_Kp_TOPPV_NDOF;   //!
   TBranch        *b_Kp_TOPPV_COV_;   //!
   TBranch        *b_Kp_IP_TOPPV;   //!
   TBranch        *b_Kp_IPCHI2_TOPPV;   //!
   TBranch        *b_Kp_ORIVX_X;   //!
   TBranch        *b_Kp_ORIVX_Y;   //!
   TBranch        *b_Kp_ORIVX_Z;   //!
   TBranch        *b_Kp_ORIVX_XERR;   //!
   TBranch        *b_Kp_ORIVX_YERR;   //!
   TBranch        *b_Kp_ORIVX_ZERR;   //!
   TBranch        *b_Kp_ORIVX_CHI2;   //!
   TBranch        *b_Kp_ORIVX_NDOF;   //!
   TBranch        *b_Kp_ORIVX_COV_;   //!
   TBranch        *b_Kp_IP_ORIVX;   //!
   TBranch        *b_Kp_IPCHI2_ORIVX;   //!
   TBranch        *b_Kp_P;   //!
   TBranch        *b_Kp_PT;   //!
   TBranch        *b_Kp_PE;   //!
   TBranch        *b_Kp_PX;   //!
   TBranch        *b_Kp_PY;   //!
   TBranch        *b_Kp_PZ;   //!
   TBranch        *b_Kp_REFPX;   //!
   TBranch        *b_Kp_REFPY;   //!
   TBranch        *b_Kp_REFPZ;   //!
   TBranch        *b_Kp_M;   //!
   TBranch        *b_Kp_AtVtx_PE;   //!
   TBranch        *b_Kp_AtVtx_PX;   //!
   TBranch        *b_Kp_AtVtx_PY;   //!
   TBranch        *b_Kp_AtVtx_PZ;   //!
   TBranch        *b_Kp_ID;   //!
   TBranch        *b_Kp_PIDe;   //!
   TBranch        *b_Kp_PIDmu;   //!
   TBranch        *b_Kp_PIDK;   //!
   TBranch        *b_Kp_PIDp;   //!
   TBranch        *b_Kp_ProbNNe;   //!
   TBranch        *b_Kp_ProbNNk;   //!
   TBranch        *b_Kp_ProbNNp;   //!
   TBranch        *b_Kp_ProbNNpi;   //!
   TBranch        *b_Kp_ProbNNmu;   //!
   TBranch        *b_Kp_ProbNNghost;   //!
   TBranch        *b_Kp_hasMuon;   //!
   TBranch        *b_Kp_isMuon;   //!
   TBranch        *b_Kp_hasRich;   //!
   TBranch        *b_Kp_UsedRichAerogel;   //!
   TBranch        *b_Kp_UsedRich1Gas;   //!
   TBranch        *b_Kp_UsedRich2Gas;   //!
   TBranch        *b_Kp_RichAboveElThres;   //!
   TBranch        *b_Kp_RichAboveMuThres;   //!
   TBranch        *b_Kp_RichAbovePiThres;   //!
   TBranch        *b_Kp_RichAboveKaThres;   //!
   TBranch        *b_Kp_RichAbovePrThres;   //!
   TBranch        *b_Kp_hasCalo;   //!
   TBranch        *b_Kp_TRACK_Type;   //!
   TBranch        *b_Kp_TRACK_Key;   //!
   TBranch        *b_Kp_TRACK_CHI2NDOF;   //!
   TBranch        *b_Kp_TRACK_PCHI2;   //!
   TBranch        *b_Kp_TRACK_MatchCHI2;   //!
   TBranch        *b_Kp_TRACK_GhostProb;   //!
   TBranch        *b_Kp_TRACK_CloneDist;   //!
   TBranch        *b_Kp_TRACK_Likelihood;   //!
   TBranch        *b_Kp_X;   //!
   TBranch        *b_Kp_Y;   //!
   TBranch        *b_pim_LOKI_ENERGY;   //!
   TBranch        *b_pim_LOKI_ETA;   //!
   TBranch        *b_pim_LOKI_PHI;   //!
   TBranch        *b_pim_CosTheta;   //!
   TBranch        *b_pim_MINIP;   //!
   TBranch        *b_pim_MINIPCHI2;   //!
   TBranch        *b_pim_MINIPNEXTBEST;   //!
   TBranch        *b_pim_MINIPCHI2NEXTBEST;   //!
   TBranch        *b_pim_AllIP;   //!
   TBranch        *b_pim_AllIPchi2;   //!
   TBranch        *b_pim_OWNPV_X;   //!
   TBranch        *b_pim_OWNPV_Y;   //!
   TBranch        *b_pim_OWNPV_Z;   //!
   TBranch        *b_pim_OWNPV_XERR;   //!
   TBranch        *b_pim_OWNPV_YERR;   //!
   TBranch        *b_pim_OWNPV_ZERR;   //!
   TBranch        *b_pim_OWNPV_CHI2;   //!
   TBranch        *b_pim_OWNPV_NDOF;   //!
   TBranch        *b_pim_OWNPV_COV_;   //!
   TBranch        *b_pim_IP_OWNPV;   //!
   TBranch        *b_pim_IPCHI2_OWNPV;   //!
   TBranch        *b_pim_TOPPV_X;   //!
   TBranch        *b_pim_TOPPV_Y;   //!
   TBranch        *b_pim_TOPPV_Z;   //!
   TBranch        *b_pim_TOPPV_XERR;   //!
   TBranch        *b_pim_TOPPV_YERR;   //!
   TBranch        *b_pim_TOPPV_ZERR;   //!
   TBranch        *b_pim_TOPPV_CHI2;   //!
   TBranch        *b_pim_TOPPV_NDOF;   //!
   TBranch        *b_pim_TOPPV_COV_;   //!
   TBranch        *b_pim_IP_TOPPV;   //!
   TBranch        *b_pim_IPCHI2_TOPPV;   //!
   TBranch        *b_pim_ORIVX_X;   //!
   TBranch        *b_pim_ORIVX_Y;   //!
   TBranch        *b_pim_ORIVX_Z;   //!
   TBranch        *b_pim_ORIVX_XERR;   //!
   TBranch        *b_pim_ORIVX_YERR;   //!
   TBranch        *b_pim_ORIVX_ZERR;   //!
   TBranch        *b_pim_ORIVX_CHI2;   //!
   TBranch        *b_pim_ORIVX_NDOF;   //!
   TBranch        *b_pim_ORIVX_COV_;   //!
   TBranch        *b_pim_IP_ORIVX;   //!
   TBranch        *b_pim_IPCHI2_ORIVX;   //!
   TBranch        *b_pim_P;   //!
   TBranch        *b_pim_PT;   //!
   TBranch        *b_pim_PE;   //!
   TBranch        *b_pim_PX;   //!
   TBranch        *b_pim_PY;   //!
   TBranch        *b_pim_PZ;   //!
   TBranch        *b_pim_REFPX;   //!
   TBranch        *b_pim_REFPY;   //!
   TBranch        *b_pim_REFPZ;   //!
   TBranch        *b_pim_M;   //!
   TBranch        *b_pim_AtVtx_PE;   //!
   TBranch        *b_pim_AtVtx_PX;   //!
   TBranch        *b_pim_AtVtx_PY;   //!
   TBranch        *b_pim_AtVtx_PZ;   //!
   TBranch        *b_pim_ID;   //!
   TBranch        *b_pim_PIDe;   //!
   TBranch        *b_pim_PIDmu;   //!
   TBranch        *b_pim_PIDK;   //!
   TBranch        *b_pim_PIDp;   //!
   TBranch        *b_pim_ProbNNe;   //!
   TBranch        *b_pim_ProbNNk;   //!
   TBranch        *b_pim_ProbNNp;   //!
   TBranch        *b_pim_ProbNNpi;   //!
   TBranch        *b_pim_ProbNNmu;   //!
   TBranch        *b_pim_ProbNNghost;   //!
   TBranch        *b_pim_hasMuon;   //!
   TBranch        *b_pim_isMuon;   //!
   TBranch        *b_pim_hasRich;   //!
   TBranch        *b_pim_UsedRichAerogel;   //!
   TBranch        *b_pim_UsedRich1Gas;   //!
   TBranch        *b_pim_UsedRich2Gas;   //!
   TBranch        *b_pim_RichAboveElThres;   //!
   TBranch        *b_pim_RichAboveMuThres;   //!
   TBranch        *b_pim_RichAbovePiThres;   //!
   TBranch        *b_pim_RichAboveKaThres;   //!
   TBranch        *b_pim_RichAbovePrThres;   //!
   TBranch        *b_pim_hasCalo;   //!
   TBranch        *b_pim_TRACK_Type;   //!
   TBranch        *b_pim_TRACK_Key;   //!
   TBranch        *b_pim_TRACK_CHI2NDOF;   //!
   TBranch        *b_pim_TRACK_PCHI2;   //!
   TBranch        *b_pim_TRACK_MatchCHI2;   //!
   TBranch        *b_pim_TRACK_GhostProb;   //!
   TBranch        *b_pim_TRACK_CloneDist;   //!
   TBranch        *b_pim_TRACK_Likelihood;   //!
   TBranch        *b_pim_X;   //!
   TBranch        *b_pim_Y;   //!
   TBranch        *b_Kstb_LOKI_ENERGY;   //!
   TBranch        *b_Kstb_LOKI_ETA;   //!
   TBranch        *b_Kstb_LOKI_PHI;   //!
   TBranch        *b_Kstb_CosTheta;   //!
   TBranch        *b_Kstb_MINIP;   //!
   TBranch        *b_Kstb_MINIPCHI2;   //!
   TBranch        *b_Kstb_MINIPNEXTBEST;   //!
   TBranch        *b_Kstb_MINIPCHI2NEXTBEST;   //!
   TBranch        *b_Kstb_AllIP;   //!
   TBranch        *b_Kstb_AllIPchi2;   //!
   TBranch        *b_Kstb_AllDIRA;   //!
   TBranch        *b_Kstb_ENDVERTEX_X;   //!
   TBranch        *b_Kstb_ENDVERTEX_Y;   //!
   TBranch        *b_Kstb_ENDVERTEX_Z;   //!
   TBranch        *b_Kstb_ENDVERTEX_XERR;   //!
   TBranch        *b_Kstb_ENDVERTEX_YERR;   //!
   TBranch        *b_Kstb_ENDVERTEX_ZERR;   //!
   TBranch        *b_Kstb_ENDVERTEX_CHI2;   //!
   TBranch        *b_Kstb_ENDVERTEX_NDOF;   //!
   TBranch        *b_Kstb_ENDVERTEX_COV_;   //!
   TBranch        *b_Kstb_OWNPV_X;   //!
   TBranch        *b_Kstb_OWNPV_Y;   //!
   TBranch        *b_Kstb_OWNPV_Z;   //!
   TBranch        *b_Kstb_OWNPV_XERR;   //!
   TBranch        *b_Kstb_OWNPV_YERR;   //!
   TBranch        *b_Kstb_OWNPV_ZERR;   //!
   TBranch        *b_Kstb_OWNPV_CHI2;   //!
   TBranch        *b_Kstb_OWNPV_NDOF;   //!
   TBranch        *b_Kstb_OWNPV_COV_;   //!
   TBranch        *b_Kstb_IP_OWNPV;   //!
   TBranch        *b_Kstb_IPCHI2_OWNPV;   //!
   TBranch        *b_Kstb_FD_OWNPV;   //!
   TBranch        *b_Kstb_FDCHI2_OWNPV;   //!
   TBranch        *b_Kstb_DIRA_OWNPV;   //!
   TBranch        *b_Kstb_TOPPV_X;   //!
   TBranch        *b_Kstb_TOPPV_Y;   //!
   TBranch        *b_Kstb_TOPPV_Z;   //!
   TBranch        *b_Kstb_TOPPV_XERR;   //!
   TBranch        *b_Kstb_TOPPV_YERR;   //!
   TBranch        *b_Kstb_TOPPV_ZERR;   //!
   TBranch        *b_Kstb_TOPPV_CHI2;   //!
   TBranch        *b_Kstb_TOPPV_NDOF;   //!
   TBranch        *b_Kstb_TOPPV_COV_;   //!
   TBranch        *b_Kstb_IP_TOPPV;   //!
   TBranch        *b_Kstb_IPCHI2_TOPPV;   //!
   TBranch        *b_Kstb_FD_TOPPV;   //!
   TBranch        *b_Kstb_FDCHI2_TOPPV;   //!
   TBranch        *b_Kstb_DIRA_TOPPV;   //!
   TBranch        *b_Kstb_ORIVX_X;   //!
   TBranch        *b_Kstb_ORIVX_Y;   //!
   TBranch        *b_Kstb_ORIVX_Z;   //!
   TBranch        *b_Kstb_ORIVX_XERR;   //!
   TBranch        *b_Kstb_ORIVX_YERR;   //!
   TBranch        *b_Kstb_ORIVX_ZERR;   //!
   TBranch        *b_Kstb_ORIVX_CHI2;   //!
   TBranch        *b_Kstb_ORIVX_NDOF;   //!
   TBranch        *b_Kstb_ORIVX_COV_;   //!
   TBranch        *b_Kstb_IP_ORIVX;   //!
   TBranch        *b_Kstb_IPCHI2_ORIVX;   //!
   TBranch        *b_Kstb_FD_ORIVX;   //!
   TBranch        *b_Kstb_FDCHI2_ORIVX;   //!
   TBranch        *b_Kstb_DIRA_ORIVX;   //!
   TBranch        *b_Kstb_P;   //!
   TBranch        *b_Kstb_PT;   //!
   TBranch        *b_Kstb_PE;   //!
   TBranch        *b_Kstb_PX;   //!
   TBranch        *b_Kstb_PY;   //!
   TBranch        *b_Kstb_PZ;   //!
   TBranch        *b_Kstb_REFPX;   //!
   TBranch        *b_Kstb_REFPY;   //!
   TBranch        *b_Kstb_REFPZ;   //!
   TBranch        *b_Kstb_MM;   //!
   TBranch        *b_Kstb_MMERR;   //!
   TBranch        *b_Kstb_M;   //!
   TBranch        *b_Kstb_ID;   //!
   TBranch        *b_Kstb_TAU;   //!
   TBranch        *b_Kstb_TAUERR;   //!
   TBranch        *b_Kstb_TAUCHI2;   //!
   TBranch        *b_Kstb_X;   //!
   TBranch        *b_Kstb_Y;   //!
   TBranch        *b_Km_LOKI_ENERGY;   //!
   TBranch        *b_Km_LOKI_ETA;   //!
   TBranch        *b_Km_LOKI_PHI;   //!
   TBranch        *b_Km_CosTheta;   //!
   TBranch        *b_Km_MINIP;   //!
   TBranch        *b_Km_MINIPCHI2;   //!
   TBranch        *b_Km_MINIPNEXTBEST;   //!
   TBranch        *b_Km_MINIPCHI2NEXTBEST;   //!
   TBranch        *b_Km_AllIP;   //!
   TBranch        *b_Km_AllIPchi2;   //!
   TBranch        *b_Km_OWNPV_X;   //!
   TBranch        *b_Km_OWNPV_Y;   //!
   TBranch        *b_Km_OWNPV_Z;   //!
   TBranch        *b_Km_OWNPV_XERR;   //!
   TBranch        *b_Km_OWNPV_YERR;   //!
   TBranch        *b_Km_OWNPV_ZERR;   //!
   TBranch        *b_Km_OWNPV_CHI2;   //!
   TBranch        *b_Km_OWNPV_NDOF;   //!
   TBranch        *b_Km_OWNPV_COV_;   //!
   TBranch        *b_Km_IP_OWNPV;   //!
   TBranch        *b_Km_IPCHI2_OWNPV;   //!
   TBranch        *b_Km_TOPPV_X;   //!
   TBranch        *b_Km_TOPPV_Y;   //!
   TBranch        *b_Km_TOPPV_Z;   //!
   TBranch        *b_Km_TOPPV_XERR;   //!
   TBranch        *b_Km_TOPPV_YERR;   //!
   TBranch        *b_Km_TOPPV_ZERR;   //!
   TBranch        *b_Km_TOPPV_CHI2;   //!
   TBranch        *b_Km_TOPPV_NDOF;   //!
   TBranch        *b_Km_TOPPV_COV_;   //!
   TBranch        *b_Km_IP_TOPPV;   //!
   TBranch        *b_Km_IPCHI2_TOPPV;   //!
   TBranch        *b_Km_ORIVX_X;   //!
   TBranch        *b_Km_ORIVX_Y;   //!
   TBranch        *b_Km_ORIVX_Z;   //!
   TBranch        *b_Km_ORIVX_XERR;   //!
   TBranch        *b_Km_ORIVX_YERR;   //!
   TBranch        *b_Km_ORIVX_ZERR;   //!
   TBranch        *b_Km_ORIVX_CHI2;   //!
   TBranch        *b_Km_ORIVX_NDOF;   //!
   TBranch        *b_Km_ORIVX_COV_;   //!
   TBranch        *b_Km_IP_ORIVX;   //!
   TBranch        *b_Km_IPCHI2_ORIVX;   //!
   TBranch        *b_Km_P;   //!
   TBranch        *b_Km_PT;   //!
   TBranch        *b_Km_PE;   //!
   TBranch        *b_Km_PX;   //!
   TBranch        *b_Km_PY;   //!
   TBranch        *b_Km_PZ;   //!
   TBranch        *b_Km_REFPX;   //!
   TBranch        *b_Km_REFPY;   //!
   TBranch        *b_Km_REFPZ;   //!
   TBranch        *b_Km_M;   //!
   TBranch        *b_Km_AtVtx_PE;   //!
   TBranch        *b_Km_AtVtx_PX;   //!
   TBranch        *b_Km_AtVtx_PY;   //!
   TBranch        *b_Km_AtVtx_PZ;   //!
   TBranch        *b_Km_ID;   //!
   TBranch        *b_Km_PIDe;   //!
   TBranch        *b_Km_PIDmu;   //!
   TBranch        *b_Km_PIDK;   //!
   TBranch        *b_Km_PIDp;   //!
   TBranch        *b_Km_ProbNNe;   //!
   TBranch        *b_Km_ProbNNk;   //!
   TBranch        *b_Km_ProbNNp;   //!
   TBranch        *b_Km_ProbNNpi;   //!
   TBranch        *b_Km_ProbNNmu;   //!
   TBranch        *b_Km_ProbNNghost;   //!
   TBranch        *b_Km_hasMuon;   //!
   TBranch        *b_Km_isMuon;   //!
   TBranch        *b_Km_hasRich;   //!
   TBranch        *b_Km_UsedRichAerogel;   //!
   TBranch        *b_Km_UsedRich1Gas;   //!
   TBranch        *b_Km_UsedRich2Gas;   //!
   TBranch        *b_Km_RichAboveElThres;   //!
   TBranch        *b_Km_RichAboveMuThres;   //!
   TBranch        *b_Km_RichAbovePiThres;   //!
   TBranch        *b_Km_RichAboveKaThres;   //!
   TBranch        *b_Km_RichAbovePrThres;   //!
   TBranch        *b_Km_hasCalo;   //!
   TBranch        *b_Km_TRACK_Type;   //!
   TBranch        *b_Km_TRACK_Key;   //!
   TBranch        *b_Km_TRACK_CHI2NDOF;   //!
   TBranch        *b_Km_TRACK_PCHI2;   //!
   TBranch        *b_Km_TRACK_MatchCHI2;   //!
   TBranch        *b_Km_TRACK_GhostProb;   //!
   TBranch        *b_Km_TRACK_CloneDist;   //!
   TBranch        *b_Km_TRACK_Likelihood;   //!
   TBranch        *b_Km_X;   //!
   TBranch        *b_Km_Y;   //!
   TBranch        *b_pip_LOKI_ENERGY;   //!
   TBranch        *b_pip_LOKI_ETA;   //!
   TBranch        *b_pip_LOKI_PHI;   //!
   TBranch        *b_pip_CosTheta;   //!
   TBranch        *b_pip_MINIP;   //!
   TBranch        *b_pip_MINIPCHI2;   //!
   TBranch        *b_pip_MINIPNEXTBEST;   //!
   TBranch        *b_pip_MINIPCHI2NEXTBEST;   //!
   TBranch        *b_pip_AllIP;   //!
   TBranch        *b_pip_AllIPchi2;   //!
   TBranch        *b_pip_OWNPV_X;   //!
   TBranch        *b_pip_OWNPV_Y;   //!
   TBranch        *b_pip_OWNPV_Z;   //!
   TBranch        *b_pip_OWNPV_XERR;   //!
   TBranch        *b_pip_OWNPV_YERR;   //!
   TBranch        *b_pip_OWNPV_ZERR;   //!
   TBranch        *b_pip_OWNPV_CHI2;   //!
   TBranch        *b_pip_OWNPV_NDOF;   //!
   TBranch        *b_pip_OWNPV_COV_;   //!
   TBranch        *b_pip_IP_OWNPV;   //!
   TBranch        *b_pip_IPCHI2_OWNPV;   //!
   TBranch        *b_pip_TOPPV_X;   //!
   TBranch        *b_pip_TOPPV_Y;   //!
   TBranch        *b_pip_TOPPV_Z;   //!
   TBranch        *b_pip_TOPPV_XERR;   //!
   TBranch        *b_pip_TOPPV_YERR;   //!
   TBranch        *b_pip_TOPPV_ZERR;   //!
   TBranch        *b_pip_TOPPV_CHI2;   //!
   TBranch        *b_pip_TOPPV_NDOF;   //!
   TBranch        *b_pip_TOPPV_COV_;   //!
   TBranch        *b_pip_IP_TOPPV;   //!
   TBranch        *b_pip_IPCHI2_TOPPV;   //!
   TBranch        *b_pip_ORIVX_X;   //!
   TBranch        *b_pip_ORIVX_Y;   //!
   TBranch        *b_pip_ORIVX_Z;   //!
   TBranch        *b_pip_ORIVX_XERR;   //!
   TBranch        *b_pip_ORIVX_YERR;   //!
   TBranch        *b_pip_ORIVX_ZERR;   //!
   TBranch        *b_pip_ORIVX_CHI2;   //!
   TBranch        *b_pip_ORIVX_NDOF;   //!
   TBranch        *b_pip_ORIVX_COV_;   //!
   TBranch        *b_pip_IP_ORIVX;   //!
   TBranch        *b_pip_IPCHI2_ORIVX;   //!
   TBranch        *b_pip_P;   //!
   TBranch        *b_pip_PT;   //!
   TBranch        *b_pip_PE;   //!
   TBranch        *b_pip_PX;   //!
   TBranch        *b_pip_PY;   //!
   TBranch        *b_pip_PZ;   //!
   TBranch        *b_pip_REFPX;   //!
   TBranch        *b_pip_REFPY;   //!
   TBranch        *b_pip_REFPZ;   //!
   TBranch        *b_pip_M;   //!
   TBranch        *b_pip_AtVtx_PE;   //!
   TBranch        *b_pip_AtVtx_PX;   //!
   TBranch        *b_pip_AtVtx_PY;   //!
   TBranch        *b_pip_AtVtx_PZ;   //!
   TBranch        *b_pip_ID;   //!
   TBranch        *b_pip_PIDe;   //!
   TBranch        *b_pip_PIDmu;   //!
   TBranch        *b_pip_PIDK;   //!
   TBranch        *b_pip_PIDp;   //!
   TBranch        *b_pip_ProbNNe;   //!
   TBranch        *b_pip_ProbNNk;   //!
   TBranch        *b_pip_ProbNNp;   //!
   TBranch        *b_pip_ProbNNpi;   //!
   TBranch        *b_pip_ProbNNmu;   //!
   TBranch        *b_pip_ProbNNghost;   //!
   TBranch        *b_pip_hasMuon;   //!
   TBranch        *b_pip_isMuon;   //!
   TBranch        *b_pip_hasRich;   //!
   TBranch        *b_pip_UsedRichAerogel;   //!
   TBranch        *b_pip_UsedRich1Gas;   //!
   TBranch        *b_pip_UsedRich2Gas;   //!
   TBranch        *b_pip_RichAboveElThres;   //!
   TBranch        *b_pip_RichAboveMuThres;   //!
   TBranch        *b_pip_RichAbovePiThres;   //!
   TBranch        *b_pip_RichAboveKaThres;   //!
   TBranch        *b_pip_RichAbovePrThres;   //!
   TBranch        *b_pip_hasCalo;   //!
   TBranch        *b_pip_TRACK_Type;   //!
   TBranch        *b_pip_TRACK_Key;   //!
   TBranch        *b_pip_TRACK_CHI2NDOF;   //!
   TBranch        *b_pip_TRACK_PCHI2;   //!
   TBranch        *b_pip_TRACK_MatchCHI2;   //!
   TBranch        *b_pip_TRACK_GhostProb;   //!
   TBranch        *b_pip_TRACK_CloneDist;   //!
   TBranch        *b_pip_TRACK_Likelihood;   //!
   TBranch        *b_pip_X;   //!
   TBranch        *b_pip_Y;   //!
   TBranch        *b_nCandidate;   //!
   TBranch        *b_totCandidates;   //!
   TBranch        *b_EventInSequence;   //!
   TBranch        *b_runNumber;   //!
   TBranch        *b_eventNumber;   //!
   TBranch        *b_BCID;   //!
   TBranch        *b_BCType;   //!
   TBranch        *b_OdinTCK;   //!
   TBranch        *b_L0DUTCK;   //!
   TBranch        *b_HLT1TCK;   //!
   TBranch        *b_HLT2TCK;   //!
   TBranch        *b_GpsTime;   //!
   TBranch        *b_Polarity;   //!
   TBranch        *b_PVX;   //!
   TBranch        *b_PVY;   //!
   TBranch        *b_PVZ;   //!
   TBranch        *b_PVXERR;   //!
   TBranch        *b_PVYERR;   //!
   TBranch        *b_PVZERR;   //!
   TBranch        *b_PVCHI2;   //!
   TBranch        *b_PVNDOF;   //!
   TBranch        *b_PVNTRACKS;   //!
   TBranch        *b_nPVs;   //!
   TBranch        *b_nTracks;   //!
   TBranch        *b_nLongTracks;   //!
   TBranch        *b_nDownstreamTracks;   //!
   TBranch        *b_nUpstreamTracks;   //!
   TBranch        *b_nVeloTracks;   //!
   TBranch        *b_nTTracks;   //!
   TBranch        *b_nBackTracks;   //!
   TBranch        *b_nRich1Hits;   //!
   TBranch        *b_nRich2Hits;   //!
   TBranch        *b_nVeloClusters;   //!
   TBranch        *b_nITClusters;   //!
   TBranch        *b_nTTClusters;   //!
   TBranch        *b_nOTClusters;   //!
   TBranch        *b_nSPDHits;   //!
   TBranch        *b_nMuonCoordsS0;   //!
   TBranch        *b_nMuonCoordsS1;   //!
   TBranch        *b_nMuonCoordsS2;   //!
   TBranch        *b_nMuonCoordsS3;   //!
   TBranch        *b_nMuonCoordsS4;   //!
   TBranch        *b_nMuonTracks;   //!
   TBranch        *b_StrippingBs2K0stK0stNominalLineDecision;   //!

   AnalyzerDBsKsKs(TString sampleName);
   virtual ~AnalyzerDBsKsKs();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
   void WriteHistos();

   TString sampleName;
   TFile* out = NULL;
};


AnalyzerDBsKsKs::AnalyzerDBsKsKs(TString sample) : fChain(0) {
  TTree *tree; sampleName = sample;
  TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("Samples/" + sampleName  + ".root");
  if (!f || !f->IsOpen()) {
    f = new TFile("Samples/" + sampleName + ".root");
  }
  f->GetObject("DecayTree",tree);

  Init(tree);
}

//AnalyzerDBsKsKs::AnalyzerDBsKsKs(TString sample) : fChain(0) 
//{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   //if (tree == 0) {
      //TFile *f = TFile::Open("/home3/daniel.fernandez/Arboles/DTT_2016_Reco16Strip28_Down_BHADRON.root");
      //TDirectory * dir = (TDirectory*)f->Get("Bs2KpiKpi");
      //tree = (TTree*) f->Get("Bs2KpiKpi/DecayTree");
   //}
   //Init(tree);
//}

AnalyzerDBsKsKs::~AnalyzerDBsKsKs(){
// Destructor
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t AnalyzerDBsKsKs::GetEntry(Long64_t entry){
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t AnalyzerDBsKsKs::LoadTree(Long64_t entry){
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void AnalyzerDBsKsKs::Init(TTree *tree){
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("Bs_LOKI_ENERGY", &Bs_LOKI_ENERGY, &b_Bs_LOKI_ENERGY);
   fChain->SetBranchAddress("Bs_LOKI_ETA", &Bs_LOKI_ETA, &b_Bs_LOKI_ETA);
   fChain->SetBranchAddress("Bs_LOKI_PHI", &Bs_LOKI_PHI, &b_Bs_LOKI_PHI);
   fChain->SetBranchAddress("Bs_MINIP", &Bs_MINIP, &b_Bs_MINIP);
   fChain->SetBranchAddress("Bs_MINIPCHI2", &Bs_MINIPCHI2, &b_Bs_MINIPCHI2);
   fChain->SetBranchAddress("Bs_MINIPNEXTBEST", &Bs_MINIPNEXTBEST, &b_Bs_MINIPNEXTBEST);
   fChain->SetBranchAddress("Bs_MINIPCHI2NEXTBEST", &Bs_MINIPCHI2NEXTBEST, &b_Bs_MINIPCHI2NEXTBEST);
   fChain->SetBranchAddress("nPV", &nPV, &b_nPV);
   fChain->SetBranchAddress("Bs_AllIP", Bs_AllIP, &b_Bs_AllIP);
   fChain->SetBranchAddress("Bs_AllIPchi2", Bs_AllIPchi2, &b_Bs_AllIPchi2);
   fChain->SetBranchAddress("Bs_AllDIRA", Bs_AllDIRA, &b_Bs_AllDIRA);
   fChain->SetBranchAddress("Bs_ENDVERTEX_X", &Bs_ENDVERTEX_X, &b_Bs_ENDVERTEX_X);
   fChain->SetBranchAddress("Bs_ENDVERTEX_Y", &Bs_ENDVERTEX_Y, &b_Bs_ENDVERTEX_Y);
   fChain->SetBranchAddress("Bs_ENDVERTEX_Z", &Bs_ENDVERTEX_Z, &b_Bs_ENDVERTEX_Z);
   fChain->SetBranchAddress("Bs_ENDVERTEX_XERR", &Bs_ENDVERTEX_XERR, &b_Bs_ENDVERTEX_XERR);
   fChain->SetBranchAddress("Bs_ENDVERTEX_YERR", &Bs_ENDVERTEX_YERR, &b_Bs_ENDVERTEX_YERR);
   fChain->SetBranchAddress("Bs_ENDVERTEX_ZERR", &Bs_ENDVERTEX_ZERR, &b_Bs_ENDVERTEX_ZERR);
   fChain->SetBranchAddress("Bs_ENDVERTEX_CHI2", &Bs_ENDVERTEX_CHI2, &b_Bs_ENDVERTEX_CHI2);
   fChain->SetBranchAddress("Bs_ENDVERTEX_NDOF", &Bs_ENDVERTEX_NDOF, &b_Bs_ENDVERTEX_NDOF);
   fChain->SetBranchAddress("Bs_ENDVERTEX_COV_", Bs_ENDVERTEX_COV_, &b_Bs_ENDVERTEX_COV_);
   fChain->SetBranchAddress("Bs_OWNPV_X", &Bs_OWNPV_X, &b_Bs_OWNPV_X);
   fChain->SetBranchAddress("Bs_OWNPV_Y", &Bs_OWNPV_Y, &b_Bs_OWNPV_Y);
   fChain->SetBranchAddress("Bs_OWNPV_Z", &Bs_OWNPV_Z, &b_Bs_OWNPV_Z);
   fChain->SetBranchAddress("Bs_OWNPV_XERR", &Bs_OWNPV_XERR, &b_Bs_OWNPV_XERR);
   fChain->SetBranchAddress("Bs_OWNPV_YERR", &Bs_OWNPV_YERR, &b_Bs_OWNPV_YERR);
   fChain->SetBranchAddress("Bs_OWNPV_ZERR", &Bs_OWNPV_ZERR, &b_Bs_OWNPV_ZERR);
   fChain->SetBranchAddress("Bs_OWNPV_CHI2", &Bs_OWNPV_CHI2, &b_Bs_OWNPV_CHI2);
   fChain->SetBranchAddress("Bs_OWNPV_NDOF", &Bs_OWNPV_NDOF, &b_Bs_OWNPV_NDOF);
   fChain->SetBranchAddress("Bs_OWNPV_COV_", Bs_OWNPV_COV_, &b_Bs_OWNPV_COV_);
   fChain->SetBranchAddress("Bs_IP_OWNPV", &Bs_IP_OWNPV, &b_Bs_IP_OWNPV);
   fChain->SetBranchAddress("Bs_IPCHI2_OWNPV", &Bs_IPCHI2_OWNPV, &b_Bs_IPCHI2_OWNPV);
   fChain->SetBranchAddress("Bs_FD_OWNPV", &Bs_FD_OWNPV, &b_Bs_FD_OWNPV);
   fChain->SetBranchAddress("Bs_FDCHI2_OWNPV", &Bs_FDCHI2_OWNPV, &b_Bs_FDCHI2_OWNPV);
   fChain->SetBranchAddress("Bs_DIRA_OWNPV", &Bs_DIRA_OWNPV, &b_Bs_DIRA_OWNPV);
   fChain->SetBranchAddress("Bs_TOPPV_X", &Bs_TOPPV_X, &b_Bs_TOPPV_X);
   fChain->SetBranchAddress("Bs_TOPPV_Y", &Bs_TOPPV_Y, &b_Bs_TOPPV_Y);
   fChain->SetBranchAddress("Bs_TOPPV_Z", &Bs_TOPPV_Z, &b_Bs_TOPPV_Z);
   fChain->SetBranchAddress("Bs_TOPPV_XERR", &Bs_TOPPV_XERR, &b_Bs_TOPPV_XERR);
   fChain->SetBranchAddress("Bs_TOPPV_YERR", &Bs_TOPPV_YERR, &b_Bs_TOPPV_YERR);
   fChain->SetBranchAddress("Bs_TOPPV_ZERR", &Bs_TOPPV_ZERR, &b_Bs_TOPPV_ZERR);
   fChain->SetBranchAddress("Bs_TOPPV_CHI2", &Bs_TOPPV_CHI2, &b_Bs_TOPPV_CHI2);
   fChain->SetBranchAddress("Bs_TOPPV_NDOF", &Bs_TOPPV_NDOF, &b_Bs_TOPPV_NDOF);
   fChain->SetBranchAddress("Bs_TOPPV_COV_", Bs_TOPPV_COV_, &b_Bs_TOPPV_COV_);
   fChain->SetBranchAddress("Bs_IP_TOPPV", &Bs_IP_TOPPV, &b_Bs_IP_TOPPV);
   fChain->SetBranchAddress("Bs_IPCHI2_TOPPV", &Bs_IPCHI2_TOPPV, &b_Bs_IPCHI2_TOPPV);
   fChain->SetBranchAddress("Bs_FD_TOPPV", &Bs_FD_TOPPV, &b_Bs_FD_TOPPV);
   fChain->SetBranchAddress("Bs_FDCHI2_TOPPV", &Bs_FDCHI2_TOPPV, &b_Bs_FDCHI2_TOPPV);
   fChain->SetBranchAddress("Bs_DIRA_TOPPV", &Bs_DIRA_TOPPV, &b_Bs_DIRA_TOPPV);
   fChain->SetBranchAddress("Bs_P", &Bs_P, &b_Bs_P);
   fChain->SetBranchAddress("Bs_PT", &Bs_PT, &b_Bs_PT);
   fChain->SetBranchAddress("Bs_PE", &Bs_PE, &b_Bs_PE);
   fChain->SetBranchAddress("Bs_PX", &Bs_PX, &b_Bs_PX);
   fChain->SetBranchAddress("Bs_PY", &Bs_PY, &b_Bs_PY);
   fChain->SetBranchAddress("Bs_PZ", &Bs_PZ, &b_Bs_PZ);
   fChain->SetBranchAddress("Bs_REFPX", &Bs_REFPX, &b_Bs_REFPX);
   fChain->SetBranchAddress("Bs_REFPY", &Bs_REFPY, &b_Bs_REFPY);
   fChain->SetBranchAddress("Bs_REFPZ", &Bs_REFPZ, &b_Bs_REFPZ);
   fChain->SetBranchAddress("Bs_MM", &Bs_MM, &b_Bs_MM);
   fChain->SetBranchAddress("Bs_MMERR", &Bs_MMERR, &b_Bs_MMERR);
   fChain->SetBranchAddress("Bs_M", &Bs_M, &b_Bs_M);
   fChain->SetBranchAddress("Bs_ID", &Bs_ID, &b_Bs_ID);
   fChain->SetBranchAddress("Bs_TAU", &Bs_TAU, &b_Bs_TAU);
   fChain->SetBranchAddress("Bs_TAUERR", &Bs_TAUERR, &b_Bs_TAUERR);
   fChain->SetBranchAddress("Bs_TAUCHI2", &Bs_TAUCHI2, &b_Bs_TAUCHI2);
   fChain->SetBranchAddress("Bs_X", &Bs_X, &b_Bs_X);
   fChain->SetBranchAddress("Bs_Y", &Bs_Y, &b_Bs_Y);
   fChain->SetBranchAddress("Bs_L0Global_Dec", &Bs_L0Global_Dec, &b_Bs_L0Global_Dec);
   fChain->SetBranchAddress("Bs_L0Global_TIS", &Bs_L0Global_TIS, &b_Bs_L0Global_TIS);
   fChain->SetBranchAddress("Bs_L0Global_TOS", &Bs_L0Global_TOS, &b_Bs_L0Global_TOS);
   fChain->SetBranchAddress("Bs_Hlt1Global_Dec", &Bs_Hlt1Global_Dec, &b_Bs_Hlt1Global_Dec);
   fChain->SetBranchAddress("Bs_Hlt1Global_TIS", &Bs_Hlt1Global_TIS, &b_Bs_Hlt1Global_TIS);
   fChain->SetBranchAddress("Bs_Hlt1Global_TOS", &Bs_Hlt1Global_TOS, &b_Bs_Hlt1Global_TOS);
   fChain->SetBranchAddress("Bs_Hlt1Phys_Dec", &Bs_Hlt1Phys_Dec, &b_Bs_Hlt1Phys_Dec);
   fChain->SetBranchAddress("Bs_Hlt1Phys_TIS", &Bs_Hlt1Phys_TIS, &b_Bs_Hlt1Phys_TIS);
   fChain->SetBranchAddress("Bs_Hlt1Phys_TOS", &Bs_Hlt1Phys_TOS, &b_Bs_Hlt1Phys_TOS);
   fChain->SetBranchAddress("Bs_Hlt2Global_Dec", &Bs_Hlt2Global_Dec, &b_Bs_Hlt2Global_Dec);
   fChain->SetBranchAddress("Bs_Hlt2Global_TIS", &Bs_Hlt2Global_TIS, &b_Bs_Hlt2Global_TIS);
   fChain->SetBranchAddress("Bs_Hlt2Global_TOS", &Bs_Hlt2Global_TOS, &b_Bs_Hlt2Global_TOS);
   fChain->SetBranchAddress("Bs_Hlt2Phys_Dec", &Bs_Hlt2Phys_Dec, &b_Bs_Hlt2Phys_Dec);
   fChain->SetBranchAddress("Bs_Hlt2Phys_TIS", &Bs_Hlt2Phys_TIS, &b_Bs_Hlt2Phys_TIS);
   fChain->SetBranchAddress("Bs_Hlt2Phys_TOS", &Bs_Hlt2Phys_TOS, &b_Bs_Hlt2Phys_TOS);
   fChain->SetBranchAddress("Bs_L0HadronDecision_Dec", &Bs_L0HadronDecision_Dec, &b_Bs_L0HadronDecision_Dec);
   fChain->SetBranchAddress("Bs_L0HadronDecision_TIS", &Bs_L0HadronDecision_TIS, &b_Bs_L0HadronDecision_TIS);
   fChain->SetBranchAddress("Bs_L0HadronDecision_TOS", &Bs_L0HadronDecision_TOS, &b_Bs_L0HadronDecision_TOS);
   fChain->SetBranchAddress("Bs_Hlt1TrackMVADecision_Dec", &Bs_Hlt1TrackMVADecision_Dec, &b_Bs_Hlt1TrackMVADecision_Dec);
   fChain->SetBranchAddress("Bs_Hlt1TrackMVADecision_TIS", &Bs_Hlt1TrackMVADecision_TIS, &b_Bs_Hlt1TrackMVADecision_TIS);
   fChain->SetBranchAddress("Bs_Hlt1TrackMVADecision_TOS", &Bs_Hlt1TrackMVADecision_TOS, &b_Bs_Hlt1TrackMVADecision_TOS);
   fChain->SetBranchAddress("Bs_Hlt1TwoTrackMVADecision_Dec", &Bs_Hlt1TwoTrackMVADecision_Dec, &b_Bs_Hlt1TwoTrackMVADecision_Dec);
   fChain->SetBranchAddress("Bs_Hlt1TwoTrackMVADecision_TIS", &Bs_Hlt1TwoTrackMVADecision_TIS, &b_Bs_Hlt1TwoTrackMVADecision_TIS);
   fChain->SetBranchAddress("Bs_Hlt1TwoTrackMVADecision_TOS", &Bs_Hlt1TwoTrackMVADecision_TOS, &b_Bs_Hlt1TwoTrackMVADecision_TOS);
   fChain->SetBranchAddress("Bs_Hlt2Topo2BodyDecision_Dec", &Bs_Hlt2Topo2BodyDecision_Dec, &b_Bs_Hlt2Topo2BodyDecision_Dec);
   fChain->SetBranchAddress("Bs_Hlt2Topo2BodyDecision_TIS", &Bs_Hlt2Topo2BodyDecision_TIS, &b_Bs_Hlt2Topo2BodyDecision_TIS);
   fChain->SetBranchAddress("Bs_Hlt2Topo2BodyDecision_TOS", &Bs_Hlt2Topo2BodyDecision_TOS, &b_Bs_Hlt2Topo2BodyDecision_TOS);
   fChain->SetBranchAddress("Kst_LOKI_ENERGY", &Kst_LOKI_ENERGY, &b_Kst_LOKI_ENERGY);
   fChain->SetBranchAddress("Kst_LOKI_ETA", &Kst_LOKI_ETA, &b_Kst_LOKI_ETA);
   fChain->SetBranchAddress("Kst_LOKI_PHI", &Kst_LOKI_PHI, &b_Kst_LOKI_PHI);
   fChain->SetBranchAddress("Kst_CosTheta", &Kst_CosTheta, &b_Kst_CosTheta);
   fChain->SetBranchAddress("Kst_MINIP", &Kst_MINIP, &b_Kst_MINIP);
   fChain->SetBranchAddress("Kst_MINIPCHI2", &Kst_MINIPCHI2, &b_Kst_MINIPCHI2);
   fChain->SetBranchAddress("Kst_MINIPNEXTBEST", &Kst_MINIPNEXTBEST, &b_Kst_MINIPNEXTBEST);
   fChain->SetBranchAddress("Kst_MINIPCHI2NEXTBEST", &Kst_MINIPCHI2NEXTBEST, &b_Kst_MINIPCHI2NEXTBEST);
   fChain->SetBranchAddress("Kst_AllIP", Kst_AllIP, &b_Kst_AllIP);
   fChain->SetBranchAddress("Kst_AllIPchi2", Kst_AllIPchi2, &b_Kst_AllIPchi2);
   fChain->SetBranchAddress("Kst_AllDIRA", Kst_AllDIRA, &b_Kst_AllDIRA);
   fChain->SetBranchAddress("Kst_ENDVERTEX_X", &Kst_ENDVERTEX_X, &b_Kst_ENDVERTEX_X);
   fChain->SetBranchAddress("Kst_ENDVERTEX_Y", &Kst_ENDVERTEX_Y, &b_Kst_ENDVERTEX_Y);
   fChain->SetBranchAddress("Kst_ENDVERTEX_Z", &Kst_ENDVERTEX_Z, &b_Kst_ENDVERTEX_Z);
   fChain->SetBranchAddress("Kst_ENDVERTEX_XERR", &Kst_ENDVERTEX_XERR, &b_Kst_ENDVERTEX_XERR);
   fChain->SetBranchAddress("Kst_ENDVERTEX_YERR", &Kst_ENDVERTEX_YERR, &b_Kst_ENDVERTEX_YERR);
   fChain->SetBranchAddress("Kst_ENDVERTEX_ZERR", &Kst_ENDVERTEX_ZERR, &b_Kst_ENDVERTEX_ZERR);
   fChain->SetBranchAddress("Kst_ENDVERTEX_CHI2", &Kst_ENDVERTEX_CHI2, &b_Kst_ENDVERTEX_CHI2);
   fChain->SetBranchAddress("Kst_ENDVERTEX_NDOF", &Kst_ENDVERTEX_NDOF, &b_Kst_ENDVERTEX_NDOF);
   fChain->SetBranchAddress("Kst_ENDVERTEX_COV_", Kst_ENDVERTEX_COV_, &b_Kst_ENDVERTEX_COV_);
   fChain->SetBranchAddress("Kst_OWNPV_X", &Kst_OWNPV_X, &b_Kst_OWNPV_X);
   fChain->SetBranchAddress("Kst_OWNPV_Y", &Kst_OWNPV_Y, &b_Kst_OWNPV_Y);
   fChain->SetBranchAddress("Kst_OWNPV_Z", &Kst_OWNPV_Z, &b_Kst_OWNPV_Z);
   fChain->SetBranchAddress("Kst_OWNPV_XERR", &Kst_OWNPV_XERR, &b_Kst_OWNPV_XERR);
   fChain->SetBranchAddress("Kst_OWNPV_YERR", &Kst_OWNPV_YERR, &b_Kst_OWNPV_YERR);
   fChain->SetBranchAddress("Kst_OWNPV_ZERR", &Kst_OWNPV_ZERR, &b_Kst_OWNPV_ZERR);
   fChain->SetBranchAddress("Kst_OWNPV_CHI2", &Kst_OWNPV_CHI2, &b_Kst_OWNPV_CHI2);
   fChain->SetBranchAddress("Kst_OWNPV_NDOF", &Kst_OWNPV_NDOF, &b_Kst_OWNPV_NDOF);
   fChain->SetBranchAddress("Kst_OWNPV_COV_", Kst_OWNPV_COV_, &b_Kst_OWNPV_COV_);
   fChain->SetBranchAddress("Kst_IP_OWNPV", &Kst_IP_OWNPV, &b_Kst_IP_OWNPV);
   fChain->SetBranchAddress("Kst_IPCHI2_OWNPV", &Kst_IPCHI2_OWNPV, &b_Kst_IPCHI2_OWNPV);
   fChain->SetBranchAddress("Kst_FD_OWNPV", &Kst_FD_OWNPV, &b_Kst_FD_OWNPV);
   fChain->SetBranchAddress("Kst_FDCHI2_OWNPV", &Kst_FDCHI2_OWNPV, &b_Kst_FDCHI2_OWNPV);
   fChain->SetBranchAddress("Kst_DIRA_OWNPV", &Kst_DIRA_OWNPV, &b_Kst_DIRA_OWNPV);
   fChain->SetBranchAddress("Kst_TOPPV_X", &Kst_TOPPV_X, &b_Kst_TOPPV_X);
   fChain->SetBranchAddress("Kst_TOPPV_Y", &Kst_TOPPV_Y, &b_Kst_TOPPV_Y);
   fChain->SetBranchAddress("Kst_TOPPV_Z", &Kst_TOPPV_Z, &b_Kst_TOPPV_Z);
   fChain->SetBranchAddress("Kst_TOPPV_XERR", &Kst_TOPPV_XERR, &b_Kst_TOPPV_XERR);
   fChain->SetBranchAddress("Kst_TOPPV_YERR", &Kst_TOPPV_YERR, &b_Kst_TOPPV_YERR);
   fChain->SetBranchAddress("Kst_TOPPV_ZERR", &Kst_TOPPV_ZERR, &b_Kst_TOPPV_ZERR);
   fChain->SetBranchAddress("Kst_TOPPV_CHI2", &Kst_TOPPV_CHI2, &b_Kst_TOPPV_CHI2);
   fChain->SetBranchAddress("Kst_TOPPV_NDOF", &Kst_TOPPV_NDOF, &b_Kst_TOPPV_NDOF);
   fChain->SetBranchAddress("Kst_TOPPV_COV_", Kst_TOPPV_COV_, &b_Kst_TOPPV_COV_);
   fChain->SetBranchAddress("Kst_IP_TOPPV", &Kst_IP_TOPPV, &b_Kst_IP_TOPPV);
   fChain->SetBranchAddress("Kst_IPCHI2_TOPPV", &Kst_IPCHI2_TOPPV, &b_Kst_IPCHI2_TOPPV);
   fChain->SetBranchAddress("Kst_FD_TOPPV", &Kst_FD_TOPPV, &b_Kst_FD_TOPPV);
   fChain->SetBranchAddress("Kst_FDCHI2_TOPPV", &Kst_FDCHI2_TOPPV, &b_Kst_FDCHI2_TOPPV);
   fChain->SetBranchAddress("Kst_DIRA_TOPPV", &Kst_DIRA_TOPPV, &b_Kst_DIRA_TOPPV);
   fChain->SetBranchAddress("Kst_ORIVX_X", &Kst_ORIVX_X, &b_Kst_ORIVX_X);
   fChain->SetBranchAddress("Kst_ORIVX_Y", &Kst_ORIVX_Y, &b_Kst_ORIVX_Y);
   fChain->SetBranchAddress("Kst_ORIVX_Z", &Kst_ORIVX_Z, &b_Kst_ORIVX_Z);
   fChain->SetBranchAddress("Kst_ORIVX_XERR", &Kst_ORIVX_XERR, &b_Kst_ORIVX_XERR);
   fChain->SetBranchAddress("Kst_ORIVX_YERR", &Kst_ORIVX_YERR, &b_Kst_ORIVX_YERR);
   fChain->SetBranchAddress("Kst_ORIVX_ZERR", &Kst_ORIVX_ZERR, &b_Kst_ORIVX_ZERR);
   fChain->SetBranchAddress("Kst_ORIVX_CHI2", &Kst_ORIVX_CHI2, &b_Kst_ORIVX_CHI2);
   fChain->SetBranchAddress("Kst_ORIVX_NDOF", &Kst_ORIVX_NDOF, &b_Kst_ORIVX_NDOF);
   fChain->SetBranchAddress("Kst_ORIVX_COV_", Kst_ORIVX_COV_, &b_Kst_ORIVX_COV_);
   fChain->SetBranchAddress("Kst_IP_ORIVX", &Kst_IP_ORIVX, &b_Kst_IP_ORIVX);
   fChain->SetBranchAddress("Kst_IPCHI2_ORIVX", &Kst_IPCHI2_ORIVX, &b_Kst_IPCHI2_ORIVX);
   fChain->SetBranchAddress("Kst_FD_ORIVX", &Kst_FD_ORIVX, &b_Kst_FD_ORIVX);
   fChain->SetBranchAddress("Kst_FDCHI2_ORIVX", &Kst_FDCHI2_ORIVX, &b_Kst_FDCHI2_ORIVX);
   fChain->SetBranchAddress("Kst_DIRA_ORIVX", &Kst_DIRA_ORIVX, &b_Kst_DIRA_ORIVX);
   fChain->SetBranchAddress("Kst_P", &Kst_P, &b_Kst_P);
   fChain->SetBranchAddress("Kst_PT", &Kst_PT, &b_Kst_PT);
   fChain->SetBranchAddress("Kst_PE", &Kst_PE, &b_Kst_PE);
   fChain->SetBranchAddress("Kst_PX", &Kst_PX, &b_Kst_PX);
   fChain->SetBranchAddress("Kst_PY", &Kst_PY, &b_Kst_PY);
   fChain->SetBranchAddress("Kst_PZ", &Kst_PZ, &b_Kst_PZ);
   fChain->SetBranchAddress("Kst_REFPX", &Kst_REFPX, &b_Kst_REFPX);
   fChain->SetBranchAddress("Kst_REFPY", &Kst_REFPY, &b_Kst_REFPY);
   fChain->SetBranchAddress("Kst_REFPZ", &Kst_REFPZ, &b_Kst_REFPZ);
   fChain->SetBranchAddress("Kst_MM", &Kst_MM, &b_Kst_MM);
   fChain->SetBranchAddress("Kst_MMERR", &Kst_MMERR, &b_Kst_MMERR);
   fChain->SetBranchAddress("Kst_M", &Kst_M, &b_Kst_M);
   fChain->SetBranchAddress("Kst_ID", &Kst_ID, &b_Kst_ID);
   fChain->SetBranchAddress("Kst_TAU", &Kst_TAU, &b_Kst_TAU);
   fChain->SetBranchAddress("Kst_TAUERR", &Kst_TAUERR, &b_Kst_TAUERR);
   fChain->SetBranchAddress("Kst_TAUCHI2", &Kst_TAUCHI2, &b_Kst_TAUCHI2);
   fChain->SetBranchAddress("Kst_X", &Kst_X, &b_Kst_X);
   fChain->SetBranchAddress("Kst_Y", &Kst_Y, &b_Kst_Y);
   fChain->SetBranchAddress("Kp_LOKI_ENERGY", &Kp_LOKI_ENERGY, &b_Kp_LOKI_ENERGY);
   fChain->SetBranchAddress("Kp_LOKI_ETA", &Kp_LOKI_ETA, &b_Kp_LOKI_ETA);
   fChain->SetBranchAddress("Kp_LOKI_PHI", &Kp_LOKI_PHI, &b_Kp_LOKI_PHI);
   fChain->SetBranchAddress("Kp_CosTheta", &Kp_CosTheta, &b_Kp_CosTheta);
   fChain->SetBranchAddress("Kp_MINIP", &Kp_MINIP, &b_Kp_MINIP);
   fChain->SetBranchAddress("Kp_MINIPCHI2", &Kp_MINIPCHI2, &b_Kp_MINIPCHI2);
   fChain->SetBranchAddress("Kp_MINIPNEXTBEST", &Kp_MINIPNEXTBEST, &b_Kp_MINIPNEXTBEST);
   fChain->SetBranchAddress("Kp_MINIPCHI2NEXTBEST", &Kp_MINIPCHI2NEXTBEST, &b_Kp_MINIPCHI2NEXTBEST);
   fChain->SetBranchAddress("Kp_AllIP", Kp_AllIP, &b_Kp_AllIP);
   fChain->SetBranchAddress("Kp_AllIPchi2", Kp_AllIPchi2, &b_Kp_AllIPchi2);
   fChain->SetBranchAddress("Kp_OWNPV_X", &Kp_OWNPV_X, &b_Kp_OWNPV_X);
   fChain->SetBranchAddress("Kp_OWNPV_Y", &Kp_OWNPV_Y, &b_Kp_OWNPV_Y);
   fChain->SetBranchAddress("Kp_OWNPV_Z", &Kp_OWNPV_Z, &b_Kp_OWNPV_Z);
   fChain->SetBranchAddress("Kp_OWNPV_XERR", &Kp_OWNPV_XERR, &b_Kp_OWNPV_XERR);
   fChain->SetBranchAddress("Kp_OWNPV_YERR", &Kp_OWNPV_YERR, &b_Kp_OWNPV_YERR);
   fChain->SetBranchAddress("Kp_OWNPV_ZERR", &Kp_OWNPV_ZERR, &b_Kp_OWNPV_ZERR);
   fChain->SetBranchAddress("Kp_OWNPV_CHI2", &Kp_OWNPV_CHI2, &b_Kp_OWNPV_CHI2);
   fChain->SetBranchAddress("Kp_OWNPV_NDOF", &Kp_OWNPV_NDOF, &b_Kp_OWNPV_NDOF);
   fChain->SetBranchAddress("Kp_OWNPV_COV_", Kp_OWNPV_COV_, &b_Kp_OWNPV_COV_);
   fChain->SetBranchAddress("Kp_IP_OWNPV", &Kp_IP_OWNPV, &b_Kp_IP_OWNPV);
   fChain->SetBranchAddress("Kp_IPCHI2_OWNPV", &Kp_IPCHI2_OWNPV, &b_Kp_IPCHI2_OWNPV);
   fChain->SetBranchAddress("Kp_TOPPV_X", &Kp_TOPPV_X, &b_Kp_TOPPV_X);
   fChain->SetBranchAddress("Kp_TOPPV_Y", &Kp_TOPPV_Y, &b_Kp_TOPPV_Y);
   fChain->SetBranchAddress("Kp_TOPPV_Z", &Kp_TOPPV_Z, &b_Kp_TOPPV_Z);
   fChain->SetBranchAddress("Kp_TOPPV_XERR", &Kp_TOPPV_XERR, &b_Kp_TOPPV_XERR);
   fChain->SetBranchAddress("Kp_TOPPV_YERR", &Kp_TOPPV_YERR, &b_Kp_TOPPV_YERR);
   fChain->SetBranchAddress("Kp_TOPPV_ZERR", &Kp_TOPPV_ZERR, &b_Kp_TOPPV_ZERR);
   fChain->SetBranchAddress("Kp_TOPPV_CHI2", &Kp_TOPPV_CHI2, &b_Kp_TOPPV_CHI2);
   fChain->SetBranchAddress("Kp_TOPPV_NDOF", &Kp_TOPPV_NDOF, &b_Kp_TOPPV_NDOF);
   fChain->SetBranchAddress("Kp_TOPPV_COV_", Kp_TOPPV_COV_, &b_Kp_TOPPV_COV_);
   fChain->SetBranchAddress("Kp_IP_TOPPV", &Kp_IP_TOPPV, &b_Kp_IP_TOPPV);
   fChain->SetBranchAddress("Kp_IPCHI2_TOPPV", &Kp_IPCHI2_TOPPV, &b_Kp_IPCHI2_TOPPV);
   fChain->SetBranchAddress("Kp_ORIVX_X", &Kp_ORIVX_X, &b_Kp_ORIVX_X);
   fChain->SetBranchAddress("Kp_ORIVX_Y", &Kp_ORIVX_Y, &b_Kp_ORIVX_Y);
   fChain->SetBranchAddress("Kp_ORIVX_Z", &Kp_ORIVX_Z, &b_Kp_ORIVX_Z);
   fChain->SetBranchAddress("Kp_ORIVX_XERR", &Kp_ORIVX_XERR, &b_Kp_ORIVX_XERR);
   fChain->SetBranchAddress("Kp_ORIVX_YERR", &Kp_ORIVX_YERR, &b_Kp_ORIVX_YERR);
   fChain->SetBranchAddress("Kp_ORIVX_ZERR", &Kp_ORIVX_ZERR, &b_Kp_ORIVX_ZERR);
   fChain->SetBranchAddress("Kp_ORIVX_CHI2", &Kp_ORIVX_CHI2, &b_Kp_ORIVX_CHI2);
   fChain->SetBranchAddress("Kp_ORIVX_NDOF", &Kp_ORIVX_NDOF, &b_Kp_ORIVX_NDOF);
   fChain->SetBranchAddress("Kp_ORIVX_COV_", Kp_ORIVX_COV_, &b_Kp_ORIVX_COV_);
   fChain->SetBranchAddress("Kp_IP_ORIVX", &Kp_IP_ORIVX, &b_Kp_IP_ORIVX);
   fChain->SetBranchAddress("Kp_IPCHI2_ORIVX", &Kp_IPCHI2_ORIVX, &b_Kp_IPCHI2_ORIVX);
   fChain->SetBranchAddress("Kp_P", &Kp_P, &b_Kp_P);
   fChain->SetBranchAddress("Kp_PT", &Kp_PT, &b_Kp_PT);
   fChain->SetBranchAddress("Kp_PE", &Kp_PE, &b_Kp_PE);
   fChain->SetBranchAddress("Kp_PX", &Kp_PX, &b_Kp_PX);
   fChain->SetBranchAddress("Kp_PY", &Kp_PY, &b_Kp_PY);
   fChain->SetBranchAddress("Kp_PZ", &Kp_PZ, &b_Kp_PZ);
   fChain->SetBranchAddress("Kp_REFPX", &Kp_REFPX, &b_Kp_REFPX);
   fChain->SetBranchAddress("Kp_REFPY", &Kp_REFPY, &b_Kp_REFPY);
   fChain->SetBranchAddress("Kp_REFPZ", &Kp_REFPZ, &b_Kp_REFPZ);
   fChain->SetBranchAddress("Kp_M", &Kp_M, &b_Kp_M);
   fChain->SetBranchAddress("Kp_AtVtx_PE", &Kp_AtVtx_PE, &b_Kp_AtVtx_PE);
   fChain->SetBranchAddress("Kp_AtVtx_PX", &Kp_AtVtx_PX, &b_Kp_AtVtx_PX);
   fChain->SetBranchAddress("Kp_AtVtx_PY", &Kp_AtVtx_PY, &b_Kp_AtVtx_PY);
   fChain->SetBranchAddress("Kp_AtVtx_PZ", &Kp_AtVtx_PZ, &b_Kp_AtVtx_PZ);
   fChain->SetBranchAddress("Kp_ID", &Kp_ID, &b_Kp_ID);
   fChain->SetBranchAddress("Kp_PIDe", &Kp_PIDe, &b_Kp_PIDe);
   fChain->SetBranchAddress("Kp_PIDmu", &Kp_PIDmu, &b_Kp_PIDmu);
   fChain->SetBranchAddress("Kp_PIDK", &Kp_PIDK, &b_Kp_PIDK);
   fChain->SetBranchAddress("Kp_PIDp", &Kp_PIDp, &b_Kp_PIDp);
   fChain->SetBranchAddress("Kp_ProbNNe", &Kp_ProbNNe, &b_Kp_ProbNNe);
   fChain->SetBranchAddress("Kp_ProbNNk", &Kp_ProbNNk, &b_Kp_ProbNNk);
   fChain->SetBranchAddress("Kp_ProbNNp", &Kp_ProbNNp, &b_Kp_ProbNNp);
   fChain->SetBranchAddress("Kp_ProbNNpi", &Kp_ProbNNpi, &b_Kp_ProbNNpi);
   fChain->SetBranchAddress("Kp_ProbNNmu", &Kp_ProbNNmu, &b_Kp_ProbNNmu);
   fChain->SetBranchAddress("Kp_ProbNNghost", &Kp_ProbNNghost, &b_Kp_ProbNNghost);
   fChain->SetBranchAddress("Kp_hasMuon", &Kp_hasMuon, &b_Kp_hasMuon);
   fChain->SetBranchAddress("Kp_isMuon", &Kp_isMuon, &b_Kp_isMuon);
   fChain->SetBranchAddress("Kp_hasRich", &Kp_hasRich, &b_Kp_hasRich);
   fChain->SetBranchAddress("Kp_UsedRichAerogel", &Kp_UsedRichAerogel, &b_Kp_UsedRichAerogel);
   fChain->SetBranchAddress("Kp_UsedRich1Gas", &Kp_UsedRich1Gas, &b_Kp_UsedRich1Gas);
   fChain->SetBranchAddress("Kp_UsedRich2Gas", &Kp_UsedRich2Gas, &b_Kp_UsedRich2Gas);
   fChain->SetBranchAddress("Kp_RichAboveElThres", &Kp_RichAboveElThres, &b_Kp_RichAboveElThres);
   fChain->SetBranchAddress("Kp_RichAboveMuThres", &Kp_RichAboveMuThres, &b_Kp_RichAboveMuThres);
   fChain->SetBranchAddress("Kp_RichAbovePiThres", &Kp_RichAbovePiThres, &b_Kp_RichAbovePiThres);
   fChain->SetBranchAddress("Kp_RichAboveKaThres", &Kp_RichAboveKaThres, &b_Kp_RichAboveKaThres);
   fChain->SetBranchAddress("Kp_RichAbovePrThres", &Kp_RichAbovePrThres, &b_Kp_RichAbovePrThres);
   fChain->SetBranchAddress("Kp_hasCalo", &Kp_hasCalo, &b_Kp_hasCalo);
   fChain->SetBranchAddress("Kp_TRACK_Type", &Kp_TRACK_Type, &b_Kp_TRACK_Type);
   fChain->SetBranchAddress("Kp_TRACK_Key", &Kp_TRACK_Key, &b_Kp_TRACK_Key);
   fChain->SetBranchAddress("Kp_TRACK_CHI2NDOF", &Kp_TRACK_CHI2NDOF, &b_Kp_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("Kp_TRACK_PCHI2", &Kp_TRACK_PCHI2, &b_Kp_TRACK_PCHI2);
   fChain->SetBranchAddress("Kp_TRACK_MatchCHI2", &Kp_TRACK_MatchCHI2, &b_Kp_TRACK_MatchCHI2);
   fChain->SetBranchAddress("Kp_TRACK_GhostProb", &Kp_TRACK_GhostProb, &b_Kp_TRACK_GhostProb);
   fChain->SetBranchAddress("Kp_TRACK_CloneDist", &Kp_TRACK_CloneDist, &b_Kp_TRACK_CloneDist);
   fChain->SetBranchAddress("Kp_TRACK_Likelihood", &Kp_TRACK_Likelihood, &b_Kp_TRACK_Likelihood);
   fChain->SetBranchAddress("Kp_X", &Kp_X, &b_Kp_X);
   fChain->SetBranchAddress("Kp_Y", &Kp_Y, &b_Kp_Y);
   fChain->SetBranchAddress("pim_LOKI_ENERGY", &pim_LOKI_ENERGY, &b_pim_LOKI_ENERGY);
   fChain->SetBranchAddress("pim_LOKI_ETA", &pim_LOKI_ETA, &b_pim_LOKI_ETA);
   fChain->SetBranchAddress("pim_LOKI_PHI", &pim_LOKI_PHI, &b_pim_LOKI_PHI);
   fChain->SetBranchAddress("pim_CosTheta", &pim_CosTheta, &b_pim_CosTheta);
   fChain->SetBranchAddress("pim_MINIP", &pim_MINIP, &b_pim_MINIP);
   fChain->SetBranchAddress("pim_MINIPCHI2", &pim_MINIPCHI2, &b_pim_MINIPCHI2);
   fChain->SetBranchAddress("pim_MINIPNEXTBEST", &pim_MINIPNEXTBEST, &b_pim_MINIPNEXTBEST);
   fChain->SetBranchAddress("pim_MINIPCHI2NEXTBEST", &pim_MINIPCHI2NEXTBEST, &b_pim_MINIPCHI2NEXTBEST);
   fChain->SetBranchAddress("pim_AllIP", pim_AllIP, &b_pim_AllIP);
   fChain->SetBranchAddress("pim_AllIPchi2", pim_AllIPchi2, &b_pim_AllIPchi2);
   fChain->SetBranchAddress("pim_OWNPV_X", &pim_OWNPV_X, &b_pim_OWNPV_X);
   fChain->SetBranchAddress("pim_OWNPV_Y", &pim_OWNPV_Y, &b_pim_OWNPV_Y);
   fChain->SetBranchAddress("pim_OWNPV_Z", &pim_OWNPV_Z, &b_pim_OWNPV_Z);
   fChain->SetBranchAddress("pim_OWNPV_XERR", &pim_OWNPV_XERR, &b_pim_OWNPV_XERR);
   fChain->SetBranchAddress("pim_OWNPV_YERR", &pim_OWNPV_YERR, &b_pim_OWNPV_YERR);
   fChain->SetBranchAddress("pim_OWNPV_ZERR", &pim_OWNPV_ZERR, &b_pim_OWNPV_ZERR);
   fChain->SetBranchAddress("pim_OWNPV_CHI2", &pim_OWNPV_CHI2, &b_pim_OWNPV_CHI2);
   fChain->SetBranchAddress("pim_OWNPV_NDOF", &pim_OWNPV_NDOF, &b_pim_OWNPV_NDOF);
   fChain->SetBranchAddress("pim_OWNPV_COV_", pim_OWNPV_COV_, &b_pim_OWNPV_COV_);
   fChain->SetBranchAddress("pim_IP_OWNPV", &pim_IP_OWNPV, &b_pim_IP_OWNPV);
   fChain->SetBranchAddress("pim_IPCHI2_OWNPV", &pim_IPCHI2_OWNPV, &b_pim_IPCHI2_OWNPV);
   fChain->SetBranchAddress("pim_TOPPV_X", &pim_TOPPV_X, &b_pim_TOPPV_X);
   fChain->SetBranchAddress("pim_TOPPV_Y", &pim_TOPPV_Y, &b_pim_TOPPV_Y);
   fChain->SetBranchAddress("pim_TOPPV_Z", &pim_TOPPV_Z, &b_pim_TOPPV_Z);
   fChain->SetBranchAddress("pim_TOPPV_XERR", &pim_TOPPV_XERR, &b_pim_TOPPV_XERR);
   fChain->SetBranchAddress("pim_TOPPV_YERR", &pim_TOPPV_YERR, &b_pim_TOPPV_YERR);
   fChain->SetBranchAddress("pim_TOPPV_ZERR", &pim_TOPPV_ZERR, &b_pim_TOPPV_ZERR);
   fChain->SetBranchAddress("pim_TOPPV_CHI2", &pim_TOPPV_CHI2, &b_pim_TOPPV_CHI2);
   fChain->SetBranchAddress("pim_TOPPV_NDOF", &pim_TOPPV_NDOF, &b_pim_TOPPV_NDOF);
   fChain->SetBranchAddress("pim_TOPPV_COV_", pim_TOPPV_COV_, &b_pim_TOPPV_COV_);
   fChain->SetBranchAddress("pim_IP_TOPPV", &pim_IP_TOPPV, &b_pim_IP_TOPPV);
   fChain->SetBranchAddress("pim_IPCHI2_TOPPV", &pim_IPCHI2_TOPPV, &b_pim_IPCHI2_TOPPV);
   fChain->SetBranchAddress("pim_ORIVX_X", &pim_ORIVX_X, &b_pim_ORIVX_X);
   fChain->SetBranchAddress("pim_ORIVX_Y", &pim_ORIVX_Y, &b_pim_ORIVX_Y);
   fChain->SetBranchAddress("pim_ORIVX_Z", &pim_ORIVX_Z, &b_pim_ORIVX_Z);
   fChain->SetBranchAddress("pim_ORIVX_XERR", &pim_ORIVX_XERR, &b_pim_ORIVX_XERR);
   fChain->SetBranchAddress("pim_ORIVX_YERR", &pim_ORIVX_YERR, &b_pim_ORIVX_YERR);
   fChain->SetBranchAddress("pim_ORIVX_ZERR", &pim_ORIVX_ZERR, &b_pim_ORIVX_ZERR);
   fChain->SetBranchAddress("pim_ORIVX_CHI2", &pim_ORIVX_CHI2, &b_pim_ORIVX_CHI2);
   fChain->SetBranchAddress("pim_ORIVX_NDOF", &pim_ORIVX_NDOF, &b_pim_ORIVX_NDOF);
   fChain->SetBranchAddress("pim_ORIVX_COV_", pim_ORIVX_COV_, &b_pim_ORIVX_COV_);
   fChain->SetBranchAddress("pim_IP_ORIVX", &pim_IP_ORIVX, &b_pim_IP_ORIVX);
   fChain->SetBranchAddress("pim_IPCHI2_ORIVX", &pim_IPCHI2_ORIVX, &b_pim_IPCHI2_ORIVX);
   fChain->SetBranchAddress("pim_P", &pim_P, &b_pim_P);
   fChain->SetBranchAddress("pim_PT", &pim_PT, &b_pim_PT);
   fChain->SetBranchAddress("pim_PE", &pim_PE, &b_pim_PE);
   fChain->SetBranchAddress("pim_PX", &pim_PX, &b_pim_PX);
   fChain->SetBranchAddress("pim_PY", &pim_PY, &b_pim_PY);
   fChain->SetBranchAddress("pim_PZ", &pim_PZ, &b_pim_PZ);
   fChain->SetBranchAddress("pim_REFPX", &pim_REFPX, &b_pim_REFPX);
   fChain->SetBranchAddress("pim_REFPY", &pim_REFPY, &b_pim_REFPY);
   fChain->SetBranchAddress("pim_REFPZ", &pim_REFPZ, &b_pim_REFPZ);
   fChain->SetBranchAddress("pim_M", &pim_M, &b_pim_M);
   fChain->SetBranchAddress("pim_AtVtx_PE", &pim_AtVtx_PE, &b_pim_AtVtx_PE);
   fChain->SetBranchAddress("pim_AtVtx_PX", &pim_AtVtx_PX, &b_pim_AtVtx_PX);
   fChain->SetBranchAddress("pim_AtVtx_PY", &pim_AtVtx_PY, &b_pim_AtVtx_PY);
   fChain->SetBranchAddress("pim_AtVtx_PZ", &pim_AtVtx_PZ, &b_pim_AtVtx_PZ);
   fChain->SetBranchAddress("pim_ID", &pim_ID, &b_pim_ID);
   fChain->SetBranchAddress("pim_PIDe", &pim_PIDe, &b_pim_PIDe);
   fChain->SetBranchAddress("pim_PIDmu", &pim_PIDmu, &b_pim_PIDmu);
   fChain->SetBranchAddress("pim_PIDK", &pim_PIDK, &b_pim_PIDK);
   fChain->SetBranchAddress("pim_PIDp", &pim_PIDp, &b_pim_PIDp);
   fChain->SetBranchAddress("pim_ProbNNe", &pim_ProbNNe, &b_pim_ProbNNe);
   fChain->SetBranchAddress("pim_ProbNNk", &pim_ProbNNk, &b_pim_ProbNNk);
   fChain->SetBranchAddress("pim_ProbNNp", &pim_ProbNNp, &b_pim_ProbNNp);
   fChain->SetBranchAddress("pim_ProbNNpi", &pim_ProbNNpi, &b_pim_ProbNNpi);
   fChain->SetBranchAddress("pim_ProbNNmu", &pim_ProbNNmu, &b_pim_ProbNNmu);
   fChain->SetBranchAddress("pim_ProbNNghost", &pim_ProbNNghost, &b_pim_ProbNNghost);
   fChain->SetBranchAddress("pim_hasMuon", &pim_hasMuon, &b_pim_hasMuon);
   fChain->SetBranchAddress("pim_isMuon", &pim_isMuon, &b_pim_isMuon);
   fChain->SetBranchAddress("pim_hasRich", &pim_hasRich, &b_pim_hasRich);
   fChain->SetBranchAddress("pim_UsedRichAerogel", &pim_UsedRichAerogel, &b_pim_UsedRichAerogel);
   fChain->SetBranchAddress("pim_UsedRich1Gas", &pim_UsedRich1Gas, &b_pim_UsedRich1Gas);
   fChain->SetBranchAddress("pim_UsedRich2Gas", &pim_UsedRich2Gas, &b_pim_UsedRich2Gas);
   fChain->SetBranchAddress("pim_RichAboveElThres", &pim_RichAboveElThres, &b_pim_RichAboveElThres);
   fChain->SetBranchAddress("pim_RichAboveMuThres", &pim_RichAboveMuThres, &b_pim_RichAboveMuThres);
   fChain->SetBranchAddress("pim_RichAbovePiThres", &pim_RichAbovePiThres, &b_pim_RichAbovePiThres);
   fChain->SetBranchAddress("pim_RichAboveKaThres", &pim_RichAboveKaThres, &b_pim_RichAboveKaThres);
   fChain->SetBranchAddress("pim_RichAbovePrThres", &pim_RichAbovePrThres, &b_pim_RichAbovePrThres);
   fChain->SetBranchAddress("pim_hasCalo", &pim_hasCalo, &b_pim_hasCalo);
   fChain->SetBranchAddress("pim_TRACK_Type", &pim_TRACK_Type, &b_pim_TRACK_Type);
   fChain->SetBranchAddress("pim_TRACK_Key", &pim_TRACK_Key, &b_pim_TRACK_Key);
   fChain->SetBranchAddress("pim_TRACK_CHI2NDOF", &pim_TRACK_CHI2NDOF, &b_pim_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("pim_TRACK_PCHI2", &pim_TRACK_PCHI2, &b_pim_TRACK_PCHI2);
   fChain->SetBranchAddress("pim_TRACK_MatchCHI2", &pim_TRACK_MatchCHI2, &b_pim_TRACK_MatchCHI2);
   fChain->SetBranchAddress("pim_TRACK_GhostProb", &pim_TRACK_GhostProb, &b_pim_TRACK_GhostProb);
   fChain->SetBranchAddress("pim_TRACK_CloneDist", &pim_TRACK_CloneDist, &b_pim_TRACK_CloneDist);
   fChain->SetBranchAddress("pim_TRACK_Likelihood", &pim_TRACK_Likelihood, &b_pim_TRACK_Likelihood);
   fChain->SetBranchAddress("pim_X", &pim_X, &b_pim_X);
   fChain->SetBranchAddress("pim_Y", &pim_Y, &b_pim_Y);
   fChain->SetBranchAddress("Kstb_LOKI_ENERGY", &Kstb_LOKI_ENERGY, &b_Kstb_LOKI_ENERGY);
   fChain->SetBranchAddress("Kstb_LOKI_ETA", &Kstb_LOKI_ETA, &b_Kstb_LOKI_ETA);
   fChain->SetBranchAddress("Kstb_LOKI_PHI", &Kstb_LOKI_PHI, &b_Kstb_LOKI_PHI);
   fChain->SetBranchAddress("Kstb_CosTheta", &Kstb_CosTheta, &b_Kstb_CosTheta);
   fChain->SetBranchAddress("Kstb_MINIP", &Kstb_MINIP, &b_Kstb_MINIP);
   fChain->SetBranchAddress("Kstb_MINIPCHI2", &Kstb_MINIPCHI2, &b_Kstb_MINIPCHI2);
   fChain->SetBranchAddress("Kstb_MINIPNEXTBEST", &Kstb_MINIPNEXTBEST, &b_Kstb_MINIPNEXTBEST);
   fChain->SetBranchAddress("Kstb_MINIPCHI2NEXTBEST", &Kstb_MINIPCHI2NEXTBEST, &b_Kstb_MINIPCHI2NEXTBEST);
   fChain->SetBranchAddress("Kstb_AllIP", Kstb_AllIP, &b_Kstb_AllIP);
   fChain->SetBranchAddress("Kstb_AllIPchi2", Kstb_AllIPchi2, &b_Kstb_AllIPchi2);
   fChain->SetBranchAddress("Kstb_AllDIRA", Kstb_AllDIRA, &b_Kstb_AllDIRA);
   fChain->SetBranchAddress("Kstb_ENDVERTEX_X", &Kstb_ENDVERTEX_X, &b_Kstb_ENDVERTEX_X);
   fChain->SetBranchAddress("Kstb_ENDVERTEX_Y", &Kstb_ENDVERTEX_Y, &b_Kstb_ENDVERTEX_Y);
   fChain->SetBranchAddress("Kstb_ENDVERTEX_Z", &Kstb_ENDVERTEX_Z, &b_Kstb_ENDVERTEX_Z);
   fChain->SetBranchAddress("Kstb_ENDVERTEX_XERR", &Kstb_ENDVERTEX_XERR, &b_Kstb_ENDVERTEX_XERR);
   fChain->SetBranchAddress("Kstb_ENDVERTEX_YERR", &Kstb_ENDVERTEX_YERR, &b_Kstb_ENDVERTEX_YERR);
   fChain->SetBranchAddress("Kstb_ENDVERTEX_ZERR", &Kstb_ENDVERTEX_ZERR, &b_Kstb_ENDVERTEX_ZERR);
   fChain->SetBranchAddress("Kstb_ENDVERTEX_CHI2", &Kstb_ENDVERTEX_CHI2, &b_Kstb_ENDVERTEX_CHI2);
   fChain->SetBranchAddress("Kstb_ENDVERTEX_NDOF", &Kstb_ENDVERTEX_NDOF, &b_Kstb_ENDVERTEX_NDOF);
   fChain->SetBranchAddress("Kstb_ENDVERTEX_COV_", Kstb_ENDVERTEX_COV_, &b_Kstb_ENDVERTEX_COV_);
   fChain->SetBranchAddress("Kstb_OWNPV_X", &Kstb_OWNPV_X, &b_Kstb_OWNPV_X);
   fChain->SetBranchAddress("Kstb_OWNPV_Y", &Kstb_OWNPV_Y, &b_Kstb_OWNPV_Y);
   fChain->SetBranchAddress("Kstb_OWNPV_Z", &Kstb_OWNPV_Z, &b_Kstb_OWNPV_Z);
   fChain->SetBranchAddress("Kstb_OWNPV_XERR", &Kstb_OWNPV_XERR, &b_Kstb_OWNPV_XERR);
   fChain->SetBranchAddress("Kstb_OWNPV_YERR", &Kstb_OWNPV_YERR, &b_Kstb_OWNPV_YERR);
   fChain->SetBranchAddress("Kstb_OWNPV_ZERR", &Kstb_OWNPV_ZERR, &b_Kstb_OWNPV_ZERR);
   fChain->SetBranchAddress("Kstb_OWNPV_CHI2", &Kstb_OWNPV_CHI2, &b_Kstb_OWNPV_CHI2);
   fChain->SetBranchAddress("Kstb_OWNPV_NDOF", &Kstb_OWNPV_NDOF, &b_Kstb_OWNPV_NDOF);
   fChain->SetBranchAddress("Kstb_OWNPV_COV_", Kstb_OWNPV_COV_, &b_Kstb_OWNPV_COV_);
   fChain->SetBranchAddress("Kstb_IP_OWNPV", &Kstb_IP_OWNPV, &b_Kstb_IP_OWNPV);
   fChain->SetBranchAddress("Kstb_IPCHI2_OWNPV", &Kstb_IPCHI2_OWNPV, &b_Kstb_IPCHI2_OWNPV);
   fChain->SetBranchAddress("Kstb_FD_OWNPV", &Kstb_FD_OWNPV, &b_Kstb_FD_OWNPV);
   fChain->SetBranchAddress("Kstb_FDCHI2_OWNPV", &Kstb_FDCHI2_OWNPV, &b_Kstb_FDCHI2_OWNPV);
   fChain->SetBranchAddress("Kstb_DIRA_OWNPV", &Kstb_DIRA_OWNPV, &b_Kstb_DIRA_OWNPV);
   fChain->SetBranchAddress("Kstb_TOPPV_X", &Kstb_TOPPV_X, &b_Kstb_TOPPV_X);
   fChain->SetBranchAddress("Kstb_TOPPV_Y", &Kstb_TOPPV_Y, &b_Kstb_TOPPV_Y);
   fChain->SetBranchAddress("Kstb_TOPPV_Z", &Kstb_TOPPV_Z, &b_Kstb_TOPPV_Z);
   fChain->SetBranchAddress("Kstb_TOPPV_XERR", &Kstb_TOPPV_XERR, &b_Kstb_TOPPV_XERR);
   fChain->SetBranchAddress("Kstb_TOPPV_YERR", &Kstb_TOPPV_YERR, &b_Kstb_TOPPV_YERR);
   fChain->SetBranchAddress("Kstb_TOPPV_ZERR", &Kstb_TOPPV_ZERR, &b_Kstb_TOPPV_ZERR);
   fChain->SetBranchAddress("Kstb_TOPPV_CHI2", &Kstb_TOPPV_CHI2, &b_Kstb_TOPPV_CHI2);
   fChain->SetBranchAddress("Kstb_TOPPV_NDOF", &Kstb_TOPPV_NDOF, &b_Kstb_TOPPV_NDOF);
   fChain->SetBranchAddress("Kstb_TOPPV_COV_", Kstb_TOPPV_COV_, &b_Kstb_TOPPV_COV_);
   fChain->SetBranchAddress("Kstb_IP_TOPPV", &Kstb_IP_TOPPV, &b_Kstb_IP_TOPPV);
   fChain->SetBranchAddress("Kstb_IPCHI2_TOPPV", &Kstb_IPCHI2_TOPPV, &b_Kstb_IPCHI2_TOPPV);
   fChain->SetBranchAddress("Kstb_FD_TOPPV", &Kstb_FD_TOPPV, &b_Kstb_FD_TOPPV);
   fChain->SetBranchAddress("Kstb_FDCHI2_TOPPV", &Kstb_FDCHI2_TOPPV, &b_Kstb_FDCHI2_TOPPV);
   fChain->SetBranchAddress("Kstb_DIRA_TOPPV", &Kstb_DIRA_TOPPV, &b_Kstb_DIRA_TOPPV);
   fChain->SetBranchAddress("Kstb_ORIVX_X", &Kstb_ORIVX_X, &b_Kstb_ORIVX_X);
   fChain->SetBranchAddress("Kstb_ORIVX_Y", &Kstb_ORIVX_Y, &b_Kstb_ORIVX_Y);
   fChain->SetBranchAddress("Kstb_ORIVX_Z", &Kstb_ORIVX_Z, &b_Kstb_ORIVX_Z);
   fChain->SetBranchAddress("Kstb_ORIVX_XERR", &Kstb_ORIVX_XERR, &b_Kstb_ORIVX_XERR);
   fChain->SetBranchAddress("Kstb_ORIVX_YERR", &Kstb_ORIVX_YERR, &b_Kstb_ORIVX_YERR);
   fChain->SetBranchAddress("Kstb_ORIVX_ZERR", &Kstb_ORIVX_ZERR, &b_Kstb_ORIVX_ZERR);
   fChain->SetBranchAddress("Kstb_ORIVX_CHI2", &Kstb_ORIVX_CHI2, &b_Kstb_ORIVX_CHI2);
   fChain->SetBranchAddress("Kstb_ORIVX_NDOF", &Kstb_ORIVX_NDOF, &b_Kstb_ORIVX_NDOF);
   fChain->SetBranchAddress("Kstb_ORIVX_COV_", Kstb_ORIVX_COV_, &b_Kstb_ORIVX_COV_);
   fChain->SetBranchAddress("Kstb_IP_ORIVX", &Kstb_IP_ORIVX, &b_Kstb_IP_ORIVX);
   fChain->SetBranchAddress("Kstb_IPCHI2_ORIVX", &Kstb_IPCHI2_ORIVX, &b_Kstb_IPCHI2_ORIVX);
   fChain->SetBranchAddress("Kstb_FD_ORIVX", &Kstb_FD_ORIVX, &b_Kstb_FD_ORIVX);
   fChain->SetBranchAddress("Kstb_FDCHI2_ORIVX", &Kstb_FDCHI2_ORIVX, &b_Kstb_FDCHI2_ORIVX);
   fChain->SetBranchAddress("Kstb_DIRA_ORIVX", &Kstb_DIRA_ORIVX, &b_Kstb_DIRA_ORIVX);
   fChain->SetBranchAddress("Kstb_P", &Kstb_P, &b_Kstb_P);
   fChain->SetBranchAddress("Kstb_PT", &Kstb_PT, &b_Kstb_PT);
   fChain->SetBranchAddress("Kstb_PE", &Kstb_PE, &b_Kstb_PE);
   fChain->SetBranchAddress("Kstb_PX", &Kstb_PX, &b_Kstb_PX);
   fChain->SetBranchAddress("Kstb_PY", &Kstb_PY, &b_Kstb_PY);
   fChain->SetBranchAddress("Kstb_PZ", &Kstb_PZ, &b_Kstb_PZ);
   fChain->SetBranchAddress("Kstb_REFPX", &Kstb_REFPX, &b_Kstb_REFPX);
   fChain->SetBranchAddress("Kstb_REFPY", &Kstb_REFPY, &b_Kstb_REFPY);
   fChain->SetBranchAddress("Kstb_REFPZ", &Kstb_REFPZ, &b_Kstb_REFPZ);
   fChain->SetBranchAddress("Kstb_MM", &Kstb_MM, &b_Kstb_MM);
   fChain->SetBranchAddress("Kstb_MMERR", &Kstb_MMERR, &b_Kstb_MMERR);
   fChain->SetBranchAddress("Kstb_M", &Kstb_M, &b_Kstb_M);
   fChain->SetBranchAddress("Kstb_ID", &Kstb_ID, &b_Kstb_ID);
   fChain->SetBranchAddress("Kstb_TAU", &Kstb_TAU, &b_Kstb_TAU);
   fChain->SetBranchAddress("Kstb_TAUERR", &Kstb_TAUERR, &b_Kstb_TAUERR);
   fChain->SetBranchAddress("Kstb_TAUCHI2", &Kstb_TAUCHI2, &b_Kstb_TAUCHI2);
   fChain->SetBranchAddress("Kstb_X", &Kstb_X, &b_Kstb_X);
   fChain->SetBranchAddress("Kstb_Y", &Kstb_Y, &b_Kstb_Y);
   fChain->SetBranchAddress("Km_LOKI_ENERGY", &Km_LOKI_ENERGY, &b_Km_LOKI_ENERGY);
   fChain->SetBranchAddress("Km_LOKI_ETA", &Km_LOKI_ETA, &b_Km_LOKI_ETA);
   fChain->SetBranchAddress("Km_LOKI_PHI", &Km_LOKI_PHI, &b_Km_LOKI_PHI);
   fChain->SetBranchAddress("Km_CosTheta", &Km_CosTheta, &b_Km_CosTheta);
   fChain->SetBranchAddress("Km_MINIP", &Km_MINIP, &b_Km_MINIP);
   fChain->SetBranchAddress("Km_MINIPCHI2", &Km_MINIPCHI2, &b_Km_MINIPCHI2);
   fChain->SetBranchAddress("Km_MINIPNEXTBEST", &Km_MINIPNEXTBEST, &b_Km_MINIPNEXTBEST);
   fChain->SetBranchAddress("Km_MINIPCHI2NEXTBEST", &Km_MINIPCHI2NEXTBEST, &b_Km_MINIPCHI2NEXTBEST);
   fChain->SetBranchAddress("Km_AllIP", Km_AllIP, &b_Km_AllIP);
   fChain->SetBranchAddress("Km_AllIPchi2", Km_AllIPchi2, &b_Km_AllIPchi2);
   fChain->SetBranchAddress("Km_OWNPV_X", &Km_OWNPV_X, &b_Km_OWNPV_X);
   fChain->SetBranchAddress("Km_OWNPV_Y", &Km_OWNPV_Y, &b_Km_OWNPV_Y);
   fChain->SetBranchAddress("Km_OWNPV_Z", &Km_OWNPV_Z, &b_Km_OWNPV_Z);
   fChain->SetBranchAddress("Km_OWNPV_XERR", &Km_OWNPV_XERR, &b_Km_OWNPV_XERR);
   fChain->SetBranchAddress("Km_OWNPV_YERR", &Km_OWNPV_YERR, &b_Km_OWNPV_YERR);
   fChain->SetBranchAddress("Km_OWNPV_ZERR", &Km_OWNPV_ZERR, &b_Km_OWNPV_ZERR);
   fChain->SetBranchAddress("Km_OWNPV_CHI2", &Km_OWNPV_CHI2, &b_Km_OWNPV_CHI2);
   fChain->SetBranchAddress("Km_OWNPV_NDOF", &Km_OWNPV_NDOF, &b_Km_OWNPV_NDOF);
   fChain->SetBranchAddress("Km_OWNPV_COV_", Km_OWNPV_COV_, &b_Km_OWNPV_COV_);
   fChain->SetBranchAddress("Km_IP_OWNPV", &Km_IP_OWNPV, &b_Km_IP_OWNPV);
   fChain->SetBranchAddress("Km_IPCHI2_OWNPV", &Km_IPCHI2_OWNPV, &b_Km_IPCHI2_OWNPV);
   fChain->SetBranchAddress("Km_TOPPV_X", &Km_TOPPV_X, &b_Km_TOPPV_X);
   fChain->SetBranchAddress("Km_TOPPV_Y", &Km_TOPPV_Y, &b_Km_TOPPV_Y);
   fChain->SetBranchAddress("Km_TOPPV_Z", &Km_TOPPV_Z, &b_Km_TOPPV_Z);
   fChain->SetBranchAddress("Km_TOPPV_XERR", &Km_TOPPV_XERR, &b_Km_TOPPV_XERR);
   fChain->SetBranchAddress("Km_TOPPV_YERR", &Km_TOPPV_YERR, &b_Km_TOPPV_YERR);
   fChain->SetBranchAddress("Km_TOPPV_ZERR", &Km_TOPPV_ZERR, &b_Km_TOPPV_ZERR);
   fChain->SetBranchAddress("Km_TOPPV_CHI2", &Km_TOPPV_CHI2, &b_Km_TOPPV_CHI2);
   fChain->SetBranchAddress("Km_TOPPV_NDOF", &Km_TOPPV_NDOF, &b_Km_TOPPV_NDOF);
   fChain->SetBranchAddress("Km_TOPPV_COV_", Km_TOPPV_COV_, &b_Km_TOPPV_COV_);
   fChain->SetBranchAddress("Km_IP_TOPPV", &Km_IP_TOPPV, &b_Km_IP_TOPPV);
   fChain->SetBranchAddress("Km_IPCHI2_TOPPV", &Km_IPCHI2_TOPPV, &b_Km_IPCHI2_TOPPV);
   fChain->SetBranchAddress("Km_ORIVX_X", &Km_ORIVX_X, &b_Km_ORIVX_X);
   fChain->SetBranchAddress("Km_ORIVX_Y", &Km_ORIVX_Y, &b_Km_ORIVX_Y);
   fChain->SetBranchAddress("Km_ORIVX_Z", &Km_ORIVX_Z, &b_Km_ORIVX_Z);
   fChain->SetBranchAddress("Km_ORIVX_XERR", &Km_ORIVX_XERR, &b_Km_ORIVX_XERR);
   fChain->SetBranchAddress("Km_ORIVX_YERR", &Km_ORIVX_YERR, &b_Km_ORIVX_YERR);
   fChain->SetBranchAddress("Km_ORIVX_ZERR", &Km_ORIVX_ZERR, &b_Km_ORIVX_ZERR);
   fChain->SetBranchAddress("Km_ORIVX_CHI2", &Km_ORIVX_CHI2, &b_Km_ORIVX_CHI2);
   fChain->SetBranchAddress("Km_ORIVX_NDOF", &Km_ORIVX_NDOF, &b_Km_ORIVX_NDOF);
   fChain->SetBranchAddress("Km_ORIVX_COV_", Km_ORIVX_COV_, &b_Km_ORIVX_COV_);
   fChain->SetBranchAddress("Km_IP_ORIVX", &Km_IP_ORIVX, &b_Km_IP_ORIVX);
   fChain->SetBranchAddress("Km_IPCHI2_ORIVX", &Km_IPCHI2_ORIVX, &b_Km_IPCHI2_ORIVX);
   fChain->SetBranchAddress("Km_P", &Km_P, &b_Km_P);
   fChain->SetBranchAddress("Km_PT", &Km_PT, &b_Km_PT);
   fChain->SetBranchAddress("Km_PE", &Km_PE, &b_Km_PE);
   fChain->SetBranchAddress("Km_PX", &Km_PX, &b_Km_PX);
   fChain->SetBranchAddress("Km_PY", &Km_PY, &b_Km_PY);
   fChain->SetBranchAddress("Km_PZ", &Km_PZ, &b_Km_PZ);
   fChain->SetBranchAddress("Km_REFPX", &Km_REFPX, &b_Km_REFPX);
   fChain->SetBranchAddress("Km_REFPY", &Km_REFPY, &b_Km_REFPY);
   fChain->SetBranchAddress("Km_REFPZ", &Km_REFPZ, &b_Km_REFPZ);
   fChain->SetBranchAddress("Km_M", &Km_M, &b_Km_M);
   fChain->SetBranchAddress("Km_AtVtx_PE", &Km_AtVtx_PE, &b_Km_AtVtx_PE);
   fChain->SetBranchAddress("Km_AtVtx_PX", &Km_AtVtx_PX, &b_Km_AtVtx_PX);
   fChain->SetBranchAddress("Km_AtVtx_PY", &Km_AtVtx_PY, &b_Km_AtVtx_PY);
   fChain->SetBranchAddress("Km_AtVtx_PZ", &Km_AtVtx_PZ, &b_Km_AtVtx_PZ);
   fChain->SetBranchAddress("Km_ID", &Km_ID, &b_Km_ID);
   fChain->SetBranchAddress("Km_PIDe", &Km_PIDe, &b_Km_PIDe);
   fChain->SetBranchAddress("Km_PIDmu", &Km_PIDmu, &b_Km_PIDmu);
   fChain->SetBranchAddress("Km_PIDK", &Km_PIDK, &b_Km_PIDK);
   fChain->SetBranchAddress("Km_PIDp", &Km_PIDp, &b_Km_PIDp);
   fChain->SetBranchAddress("Km_ProbNNe", &Km_ProbNNe, &b_Km_ProbNNe);
   fChain->SetBranchAddress("Km_ProbNNk", &Km_ProbNNk, &b_Km_ProbNNk);
   fChain->SetBranchAddress("Km_ProbNNp", &Km_ProbNNp, &b_Km_ProbNNp);
   fChain->SetBranchAddress("Km_ProbNNpi", &Km_ProbNNpi, &b_Km_ProbNNpi);
   fChain->SetBranchAddress("Km_ProbNNmu", &Km_ProbNNmu, &b_Km_ProbNNmu);
   fChain->SetBranchAddress("Km_ProbNNghost", &Km_ProbNNghost, &b_Km_ProbNNghost);
   fChain->SetBranchAddress("Km_hasMuon", &Km_hasMuon, &b_Km_hasMuon);
   fChain->SetBranchAddress("Km_isMuon", &Km_isMuon, &b_Km_isMuon);
   fChain->SetBranchAddress("Km_hasRich", &Km_hasRich, &b_Km_hasRich);
   fChain->SetBranchAddress("Km_UsedRichAerogel", &Km_UsedRichAerogel, &b_Km_UsedRichAerogel);
   fChain->SetBranchAddress("Km_UsedRich1Gas", &Km_UsedRich1Gas, &b_Km_UsedRich1Gas);
   fChain->SetBranchAddress("Km_UsedRich2Gas", &Km_UsedRich2Gas, &b_Km_UsedRich2Gas);
   fChain->SetBranchAddress("Km_RichAboveElThres", &Km_RichAboveElThres, &b_Km_RichAboveElThres);
   fChain->SetBranchAddress("Km_RichAboveMuThres", &Km_RichAboveMuThres, &b_Km_RichAboveMuThres);
   fChain->SetBranchAddress("Km_RichAbovePiThres", &Km_RichAbovePiThres, &b_Km_RichAbovePiThres);
   fChain->SetBranchAddress("Km_RichAboveKaThres", &Km_RichAboveKaThres, &b_Km_RichAboveKaThres);
   fChain->SetBranchAddress("Km_RichAbovePrThres", &Km_RichAbovePrThres, &b_Km_RichAbovePrThres);
   fChain->SetBranchAddress("Km_hasCalo", &Km_hasCalo, &b_Km_hasCalo);
   fChain->SetBranchAddress("Km_TRACK_Type", &Km_TRACK_Type, &b_Km_TRACK_Type);
   fChain->SetBranchAddress("Km_TRACK_Key", &Km_TRACK_Key, &b_Km_TRACK_Key);
   fChain->SetBranchAddress("Km_TRACK_CHI2NDOF", &Km_TRACK_CHI2NDOF, &b_Km_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("Km_TRACK_PCHI2", &Km_TRACK_PCHI2, &b_Km_TRACK_PCHI2);
   fChain->SetBranchAddress("Km_TRACK_MatchCHI2", &Km_TRACK_MatchCHI2, &b_Km_TRACK_MatchCHI2);
   fChain->SetBranchAddress("Km_TRACK_GhostProb", &Km_TRACK_GhostProb, &b_Km_TRACK_GhostProb);
   fChain->SetBranchAddress("Km_TRACK_CloneDist", &Km_TRACK_CloneDist, &b_Km_TRACK_CloneDist);
   fChain->SetBranchAddress("Km_TRACK_Likelihood", &Km_TRACK_Likelihood, &b_Km_TRACK_Likelihood);
   fChain->SetBranchAddress("Km_X", &Km_X, &b_Km_X);
   fChain->SetBranchAddress("Km_Y", &Km_Y, &b_Km_Y);
   fChain->SetBranchAddress("pip_LOKI_ENERGY", &pip_LOKI_ENERGY, &b_pip_LOKI_ENERGY);
   fChain->SetBranchAddress("pip_LOKI_ETA", &pip_LOKI_ETA, &b_pip_LOKI_ETA);
   fChain->SetBranchAddress("pip_LOKI_PHI", &pip_LOKI_PHI, &b_pip_LOKI_PHI);
   fChain->SetBranchAddress("pip_CosTheta", &pip_CosTheta, &b_pip_CosTheta);
   fChain->SetBranchAddress("pip_MINIP", &pip_MINIP, &b_pip_MINIP);
   fChain->SetBranchAddress("pip_MINIPCHI2", &pip_MINIPCHI2, &b_pip_MINIPCHI2);
   fChain->SetBranchAddress("pip_MINIPNEXTBEST", &pip_MINIPNEXTBEST, &b_pip_MINIPNEXTBEST);
   fChain->SetBranchAddress("pip_MINIPCHI2NEXTBEST", &pip_MINIPCHI2NEXTBEST, &b_pip_MINIPCHI2NEXTBEST);
   fChain->SetBranchAddress("pip_AllIP", pip_AllIP, &b_pip_AllIP);
   fChain->SetBranchAddress("pip_AllIPchi2", pip_AllIPchi2, &b_pip_AllIPchi2);
   fChain->SetBranchAddress("pip_OWNPV_X", &pip_OWNPV_X, &b_pip_OWNPV_X);
   fChain->SetBranchAddress("pip_OWNPV_Y", &pip_OWNPV_Y, &b_pip_OWNPV_Y);
   fChain->SetBranchAddress("pip_OWNPV_Z", &pip_OWNPV_Z, &b_pip_OWNPV_Z);
   fChain->SetBranchAddress("pip_OWNPV_XERR", &pip_OWNPV_XERR, &b_pip_OWNPV_XERR);
   fChain->SetBranchAddress("pip_OWNPV_YERR", &pip_OWNPV_YERR, &b_pip_OWNPV_YERR);
   fChain->SetBranchAddress("pip_OWNPV_ZERR", &pip_OWNPV_ZERR, &b_pip_OWNPV_ZERR);
   fChain->SetBranchAddress("pip_OWNPV_CHI2", &pip_OWNPV_CHI2, &b_pip_OWNPV_CHI2);
   fChain->SetBranchAddress("pip_OWNPV_NDOF", &pip_OWNPV_NDOF, &b_pip_OWNPV_NDOF);
   fChain->SetBranchAddress("pip_OWNPV_COV_", pip_OWNPV_COV_, &b_pip_OWNPV_COV_);
   fChain->SetBranchAddress("pip_IP_OWNPV", &pip_IP_OWNPV, &b_pip_IP_OWNPV);
   fChain->SetBranchAddress("pip_IPCHI2_OWNPV", &pip_IPCHI2_OWNPV, &b_pip_IPCHI2_OWNPV);
   fChain->SetBranchAddress("pip_TOPPV_X", &pip_TOPPV_X, &b_pip_TOPPV_X);
   fChain->SetBranchAddress("pip_TOPPV_Y", &pip_TOPPV_Y, &b_pip_TOPPV_Y);
   fChain->SetBranchAddress("pip_TOPPV_Z", &pip_TOPPV_Z, &b_pip_TOPPV_Z);
   fChain->SetBranchAddress("pip_TOPPV_XERR", &pip_TOPPV_XERR, &b_pip_TOPPV_XERR);
   fChain->SetBranchAddress("pip_TOPPV_YERR", &pip_TOPPV_YERR, &b_pip_TOPPV_YERR);
   fChain->SetBranchAddress("pip_TOPPV_ZERR", &pip_TOPPV_ZERR, &b_pip_TOPPV_ZERR);
   fChain->SetBranchAddress("pip_TOPPV_CHI2", &pip_TOPPV_CHI2, &b_pip_TOPPV_CHI2);
   fChain->SetBranchAddress("pip_TOPPV_NDOF", &pip_TOPPV_NDOF, &b_pip_TOPPV_NDOF);
   fChain->SetBranchAddress("pip_TOPPV_COV_", pip_TOPPV_COV_, &b_pip_TOPPV_COV_);
   fChain->SetBranchAddress("pip_IP_TOPPV", &pip_IP_TOPPV, &b_pip_IP_TOPPV);
   fChain->SetBranchAddress("pip_IPCHI2_TOPPV", &pip_IPCHI2_TOPPV, &b_pip_IPCHI2_TOPPV);
   fChain->SetBranchAddress("pip_ORIVX_X", &pip_ORIVX_X, &b_pip_ORIVX_X);
   fChain->SetBranchAddress("pip_ORIVX_Y", &pip_ORIVX_Y, &b_pip_ORIVX_Y);
   fChain->SetBranchAddress("pip_ORIVX_Z", &pip_ORIVX_Z, &b_pip_ORIVX_Z);
   fChain->SetBranchAddress("pip_ORIVX_XERR", &pip_ORIVX_XERR, &b_pip_ORIVX_XERR);
   fChain->SetBranchAddress("pip_ORIVX_YERR", &pip_ORIVX_YERR, &b_pip_ORIVX_YERR);
   fChain->SetBranchAddress("pip_ORIVX_ZERR", &pip_ORIVX_ZERR, &b_pip_ORIVX_ZERR);
   fChain->SetBranchAddress("pip_ORIVX_CHI2", &pip_ORIVX_CHI2, &b_pip_ORIVX_CHI2);
   fChain->SetBranchAddress("pip_ORIVX_NDOF", &pip_ORIVX_NDOF, &b_pip_ORIVX_NDOF);
   fChain->SetBranchAddress("pip_ORIVX_COV_", pip_ORIVX_COV_, &b_pip_ORIVX_COV_);
   fChain->SetBranchAddress("pip_IP_ORIVX", &pip_IP_ORIVX, &b_pip_IP_ORIVX);
   fChain->SetBranchAddress("pip_IPCHI2_ORIVX", &pip_IPCHI2_ORIVX, &b_pip_IPCHI2_ORIVX);
   fChain->SetBranchAddress("pip_P", &pip_P, &b_pip_P);
   fChain->SetBranchAddress("pip_PT", &pip_PT, &b_pip_PT);
   fChain->SetBranchAddress("pip_PE", &pip_PE, &b_pip_PE);
   fChain->SetBranchAddress("pip_PX", &pip_PX, &b_pip_PX);
   fChain->SetBranchAddress("pip_PY", &pip_PY, &b_pip_PY);
   fChain->SetBranchAddress("pip_PZ", &pip_PZ, &b_pip_PZ);
   fChain->SetBranchAddress("pip_REFPX", &pip_REFPX, &b_pip_REFPX);
   fChain->SetBranchAddress("pip_REFPY", &pip_REFPY, &b_pip_REFPY);
   fChain->SetBranchAddress("pip_REFPZ", &pip_REFPZ, &b_pip_REFPZ);
   fChain->SetBranchAddress("pip_M", &pip_M, &b_pip_M);
   fChain->SetBranchAddress("pip_AtVtx_PE", &pip_AtVtx_PE, &b_pip_AtVtx_PE);
   fChain->SetBranchAddress("pip_AtVtx_PX", &pip_AtVtx_PX, &b_pip_AtVtx_PX);
   fChain->SetBranchAddress("pip_AtVtx_PY", &pip_AtVtx_PY, &b_pip_AtVtx_PY);
   fChain->SetBranchAddress("pip_AtVtx_PZ", &pip_AtVtx_PZ, &b_pip_AtVtx_PZ);
   fChain->SetBranchAddress("pip_ID", &pip_ID, &b_pip_ID);
   fChain->SetBranchAddress("pip_PIDe", &pip_PIDe, &b_pip_PIDe);
   fChain->SetBranchAddress("pip_PIDmu", &pip_PIDmu, &b_pip_PIDmu);
   fChain->SetBranchAddress("pip_PIDK", &pip_PIDK, &b_pip_PIDK);
   fChain->SetBranchAddress("pip_PIDp", &pip_PIDp, &b_pip_PIDp);
   fChain->SetBranchAddress("pip_ProbNNe", &pip_ProbNNe, &b_pip_ProbNNe);
   fChain->SetBranchAddress("pip_ProbNNk", &pip_ProbNNk, &b_pip_ProbNNk);
   fChain->SetBranchAddress("pip_ProbNNp", &pip_ProbNNp, &b_pip_ProbNNp);
   fChain->SetBranchAddress("pip_ProbNNpi", &pip_ProbNNpi, &b_pip_ProbNNpi);
   fChain->SetBranchAddress("pip_ProbNNmu", &pip_ProbNNmu, &b_pip_ProbNNmu);
   fChain->SetBranchAddress("pip_ProbNNghost", &pip_ProbNNghost, &b_pip_ProbNNghost);
   fChain->SetBranchAddress("pip_hasMuon", &pip_hasMuon, &b_pip_hasMuon);
   fChain->SetBranchAddress("pip_isMuon", &pip_isMuon, &b_pip_isMuon);
   fChain->SetBranchAddress("pip_hasRich", &pip_hasRich, &b_pip_hasRich);
   fChain->SetBranchAddress("pip_UsedRichAerogel", &pip_UsedRichAerogel, &b_pip_UsedRichAerogel);
   fChain->SetBranchAddress("pip_UsedRich1Gas", &pip_UsedRich1Gas, &b_pip_UsedRich1Gas);
   fChain->SetBranchAddress("pip_UsedRich2Gas", &pip_UsedRich2Gas, &b_pip_UsedRich2Gas);
   fChain->SetBranchAddress("pip_RichAboveElThres", &pip_RichAboveElThres, &b_pip_RichAboveElThres);
   fChain->SetBranchAddress("pip_RichAboveMuThres", &pip_RichAboveMuThres, &b_pip_RichAboveMuThres);
   fChain->SetBranchAddress("pip_RichAbovePiThres", &pip_RichAbovePiThres, &b_pip_RichAbovePiThres);
   fChain->SetBranchAddress("pip_RichAboveKaThres", &pip_RichAboveKaThres, &b_pip_RichAboveKaThres);
   fChain->SetBranchAddress("pip_RichAbovePrThres", &pip_RichAbovePrThres, &b_pip_RichAbovePrThres);
   fChain->SetBranchAddress("pip_hasCalo", &pip_hasCalo, &b_pip_hasCalo);
   fChain->SetBranchAddress("pip_TRACK_Type", &pip_TRACK_Type, &b_pip_TRACK_Type);
   fChain->SetBranchAddress("pip_TRACK_Key", &pip_TRACK_Key, &b_pip_TRACK_Key);
   fChain->SetBranchAddress("pip_TRACK_CHI2NDOF", &pip_TRACK_CHI2NDOF, &b_pip_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("pip_TRACK_PCHI2", &pip_TRACK_PCHI2, &b_pip_TRACK_PCHI2);
   fChain->SetBranchAddress("pip_TRACK_MatchCHI2", &pip_TRACK_MatchCHI2, &b_pip_TRACK_MatchCHI2);
   fChain->SetBranchAddress("pip_TRACK_GhostProb", &pip_TRACK_GhostProb, &b_pip_TRACK_GhostProb);
   fChain->SetBranchAddress("pip_TRACK_CloneDist", &pip_TRACK_CloneDist, &b_pip_TRACK_CloneDist);
   fChain->SetBranchAddress("pip_TRACK_Likelihood", &pip_TRACK_Likelihood, &b_pip_TRACK_Likelihood);
   fChain->SetBranchAddress("pip_X", &pip_X, &b_pip_X);
   fChain->SetBranchAddress("pip_Y", &pip_Y, &b_pip_Y);
   fChain->SetBranchAddress("nCandidate", &nCandidate, &b_nCandidate);
   fChain->SetBranchAddress("totCandidates", &totCandidates, &b_totCandidates);
   fChain->SetBranchAddress("EventInSequence", &EventInSequence, &b_EventInSequence);
   fChain->SetBranchAddress("runNumber", &runNumber, &b_runNumber);
   fChain->SetBranchAddress("eventNumber", &eventNumber, &b_eventNumber);
   fChain->SetBranchAddress("BCID", &BCID, &b_BCID);
   fChain->SetBranchAddress("BCType", &BCType, &b_BCType);
   fChain->SetBranchAddress("OdinTCK", &OdinTCK, &b_OdinTCK);
   fChain->SetBranchAddress("L0DUTCK", &L0DUTCK, &b_L0DUTCK);
   fChain->SetBranchAddress("HLT1TCK", &HLT1TCK, &b_HLT1TCK);
   fChain->SetBranchAddress("HLT2TCK", &HLT2TCK, &b_HLT2TCK);
   fChain->SetBranchAddress("GpsTime", &GpsTime, &b_GpsTime);
   fChain->SetBranchAddress("Polarity", &Polarity, &b_Polarity);
   fChain->SetBranchAddress("PVX", PVX, &b_PVX);
   fChain->SetBranchAddress("PVY", PVY, &b_PVY);
   fChain->SetBranchAddress("PVZ", PVZ, &b_PVZ);
   fChain->SetBranchAddress("PVXERR", PVXERR, &b_PVXERR);
   fChain->SetBranchAddress("PVYERR", PVYERR, &b_PVYERR);
   fChain->SetBranchAddress("PVZERR", PVZERR, &b_PVZERR);
   fChain->SetBranchAddress("PVCHI2", PVCHI2, &b_PVCHI2);
   fChain->SetBranchAddress("PVNDOF", PVNDOF, &b_PVNDOF);
   fChain->SetBranchAddress("PVNTRACKS", PVNTRACKS, &b_PVNTRACKS);
   fChain->SetBranchAddress("nPVs", &nPVs, &b_nPVs);
   fChain->SetBranchAddress("nTracks", &nTracks, &b_nTracks);
   fChain->SetBranchAddress("nLongTracks", &nLongTracks, &b_nLongTracks);
   fChain->SetBranchAddress("nDownstreamTracks", &nDownstreamTracks, &b_nDownstreamTracks);
   fChain->SetBranchAddress("nUpstreamTracks", &nUpstreamTracks, &b_nUpstreamTracks);
   fChain->SetBranchAddress("nVeloTracks", &nVeloTracks, &b_nVeloTracks);
   fChain->SetBranchAddress("nTTracks", &nTTracks, &b_nTTracks);
   fChain->SetBranchAddress("nBackTracks", &nBackTracks, &b_nBackTracks);
   fChain->SetBranchAddress("nRich1Hits", &nRich1Hits, &b_nRich1Hits);
   fChain->SetBranchAddress("nRich2Hits", &nRich2Hits, &b_nRich2Hits);
   fChain->SetBranchAddress("nVeloClusters", &nVeloClusters, &b_nVeloClusters);
   fChain->SetBranchAddress("nITClusters", &nITClusters, &b_nITClusters);
   fChain->SetBranchAddress("nTTClusters", &nTTClusters, &b_nTTClusters);
   fChain->SetBranchAddress("nOTClusters", &nOTClusters, &b_nOTClusters);
   fChain->SetBranchAddress("nSPDHits", &nSPDHits, &b_nSPDHits);
   fChain->SetBranchAddress("nMuonCoordsS0", &nMuonCoordsS0, &b_nMuonCoordsS0);
   fChain->SetBranchAddress("nMuonCoordsS1", &nMuonCoordsS1, &b_nMuonCoordsS1);
   fChain->SetBranchAddress("nMuonCoordsS2", &nMuonCoordsS2, &b_nMuonCoordsS2);
   fChain->SetBranchAddress("nMuonCoordsS3", &nMuonCoordsS3, &b_nMuonCoordsS3);
   fChain->SetBranchAddress("nMuonCoordsS4", &nMuonCoordsS4, &b_nMuonCoordsS4);
   fChain->SetBranchAddress("nMuonTracks", &nMuonTracks, &b_nMuonTracks);
   fChain->SetBranchAddress("StrippingBs2K0stK0stNominalLineDecision", &StrippingBs2K0stK0stNominalLineDecision, &b_StrippingBs2K0stK0stNominalLineDecision);
   Notify();
}

Bool_t AnalyzerDBsKsKs::Notify(){
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void AnalyzerDBsKsKs::Show(Long64_t entry){
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}

Int_t AnalyzerDBsKsKs::Cut(Long64_t entry){
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif 
