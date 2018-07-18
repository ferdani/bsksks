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
   Double_t        B_s0_MM; //variable del MC
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
   Double_t        Kplus_PT; //variable del MC
   Double_t        Kplus_IPCHI2_OWNPV; //variable del MC
   Double_t        Kplus_PIDK; //variable del MC
   Double_t        Kplus_TRACK_CHI2NDOF; //variable del MC
   Double_t        Kplus_PIDp; //variable del MC
   Bool_t          Kplus_isMuon; //variable del MC
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
   Double_t        Piminus_PT; //variable del MC
   Double_t        Piminus_IPCHI2_OWNPV; //variable del MC
   Double_t        Piminus_PIDK; //variable del MC
   Double_t        Piminus_TRACK_CHI2NDOF; //variable del MC
   Double_t        Piminus_PIDp; //variable del MC
   Bool_t          Piminus_isMuon; //variable del MC
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
   Double_t        Kminus_PT;  //variable del MC
   Double_t        Kminus_IPCHI2_OWNPV; //variable del MC
   Double_t        Kminus_PIDK; //variable del MC
   Double_t        Kminus_TRACK_CHI2NDOF; //variable del MC
   Double_t        Kminus_PIDp; //variable del MC
   Bool_t          Kminus_isMuon ; //variable del MC
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
   Double_t        Piplus_PT; //variable del MC
   Double_t        Piplus_IPCHI2_OWNPV; //variable del MC
   Double_t        Piplus_PIDK; //variable del MC
   Double_t        Piplus_TRACK_CHI2NDOF; //variable del MC
   Double_t        Piplus_PIDp; //variable del MC
   Bool_t          Piplus_isMuon; //variable del MC
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
   
   AnalyzerDBsKsKs(TString sampleNameRoot, TString sampleName, TString Type);
   virtual ~AnalyzerDBsKsKs();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
   virtual void     printProgBar(Long64_t percent);
   void WriteHistos();

   TString sampleNameRoot;
   TString sampleName;
   TString Type;
   TFile* out = NULL;
};

AnalyzerDBsKsKs::AnalyzerDBsKsKs(TString sample1, TString sample2, TString sample3) : fChain(0) {
  TTree *tree; sampleNameRoot = sample1; sampleName = sample2; Type = sample3;
  TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/home3/daniel.fernandez/Arboles/" + sampleNameRoot  + ".root");
  if (!f || !f->IsOpen()) {
    f = new TFile("/home3/daniel.fernandez/Arboles/" + sampleNameRoot + ".root");
  }
  f->GetObject(sampleName ,tree);

  Init(tree);
}

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
   fChain->SetBranchStatus("*", 0);
   
   const int nBranch = 77;
   const TString BranchActivated[nBranch] = {"pip_PT", "Km_PT", "pim_PT", "Kp_PT",
	   "pip_IPCHI2_OWNPV", "Km_IPCHI2_OWNPV", "pim_IPCHI2_OWNPV", "Kp_IPCHI2_OWNPV",
	   "Km_PIDK", "Kp_PIDK", "pip_PIDK", "pim_PIDK", 
	   "pip_TRACK_CHI2NDOF", "Km_TRACK_CHI2NDOF", "pim_TRACK_CHI2NDOF", "Kp_TRACK_CHI2NDOF",
	   "Km_PIDp", "Km_PIDK", "Kp_PIDp", "Kp_PIDK", "pim_PIDp", "pip_PIDp",
	   "Kstb_M", "Kst_M", "Kstb_PT", "Kst_PT", 
	   "Kstb_ENDVERTEX_CHI2", "Kst_ENDVERTEX_CHI2", "Kstb_DIRA_OWNPV", "Kst_DIRA_OWNPV", 
	   "pip_isMuon", "pim_isMuon", "Kp_isMuon", "Km_isMuon",  
	   "Kp_PX", "Kp_PY", "Kp_PZ", "Kp_PE", 
	   "Km_PX", "Km_PY", "Km_PZ", "Km_PE", 
	   "pim_PX", "pim_PY", "pim_PZ", "pim_PE", 
	   "pip_PX", "pip_PY", "pip_PZ", "pip_PE", 
	   "Piplus_PT", "Kminus_PT", "Piminus_PT", "Kplus_PT",
	   "Piplus_IPCHI2_OWNPV", "Kminus_IPCHI2_OWNPV", "Piminus_IPCHI2_OWNPV", "Kplus_IPCHI2_OWNPV",
	   "Kminus_PIDK", "Kplus_PIDK", "Piplus_PIDK", "Piminus_PIDK",
	   "Piplus_TRACK_CHI2NDOF", "Kminus_TRACK_CHI2NDOF", "Piminus_TRACK_CHI2NDOF", "Kplus_TRACK_CHI2NDOF",
	   "Kminus_PIDp", "Kminus_PIDK", "Kplus_PIDp", "Kplus_PIDK", "Piminus_PIDp", "Piplus_PIDp",
	   "Piplus_isMuon", "Piminus_isMuon", "Kplus_isMuon", "Kminus_isMuon", "B_s0_MM"};
   
   for (auto i = 0; i < nBranch; ++i){
		fChain->SetBranchStatus(BranchActivated[i], 1);
   };
   
   fChain->SetBranchAddress("pip_PT", &pip_PT);
   fChain->SetBranchAddress("Km_PT", &Km_PT);
   fChain->SetBranchAddress("pim_PT", &pim_PT);
   fChain->SetBranchAddress("Kp_PT", &Kp_PT);
   fChain->SetBranchAddress("pip_IPCHI2_OWNPV", &pip_IPCHI2_OWNPV);
   fChain->SetBranchAddress("Km_IPCHI2_OWNPV", &Km_IPCHI2_OWNPV);
   fChain->SetBranchAddress("pim_IPCHI2_OWNPV", &pim_IPCHI2_OWNPV);
   fChain->SetBranchAddress("Kp_IPCHI2_OWNPV", &Kp_IPCHI2_OWNPV);
   fChain->SetBranchAddress("Km_PIDK", &Km_PIDK);
   fChain->SetBranchAddress("Kp_PIDK", &Kp_PIDK);
   fChain->SetBranchAddress("pip_PIDK", &pip_PIDK);
   fChain->SetBranchAddress("pim_PIDK", &pim_PIDK);
   fChain->SetBranchAddress("pip_TRACK_CHI2NDOF", &pip_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("Km_TRACK_CHI2NDOF", &Km_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("pim_TRACK_CHI2NDOF", &pim_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("Kp_TRACK_CHI2NDOF", &Kp_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("Km_PIDp", &Km_PIDp);
   fChain->SetBranchAddress("Km_PIDK", &Km_PIDK);
   fChain->SetBranchAddress("Kp_PIDp", &Kp_PIDp);
   fChain->SetBranchAddress("pim_PIDp", &pim_PIDp);
   fChain->SetBranchAddress("pip_PIDp", &pip_PIDp);
   fChain->SetBranchAddress("Kstb_M", &Kstb_M);
   fChain->SetBranchAddress("Kst_M", &Kst_M);
   fChain->SetBranchAddress("Kstb_PT", &Kstb_PT);
   fChain->SetBranchAddress("Kst_PT", &Kst_PT);
   fChain->SetBranchAddress("Kstb_ENDVERTEX_CHI2", &Kstb_ENDVERTEX_CHI2);
   fChain->SetBranchAddress("Kst_ENDVERTEX_CHI2", &Kst_ENDVERTEX_CHI2);
   fChain->SetBranchAddress("Kstb_DIRA_OWNPV", &Kstb_DIRA_OWNPV);
   fChain->SetBranchAddress("Kst_DIRA_OWNPV", &Kst_DIRA_OWNPV);
   fChain->SetBranchAddress("pip_isMuon", &pip_isMuon);
   fChain->SetBranchAddress("pim_isMuon", &pim_isMuon);
   fChain->SetBranchAddress("Kp_isMuon", &Kp_isMuon);
   fChain->SetBranchAddress("Km_isMuon", &Km_isMuon);
   fChain->SetBranchAddress("Kp_PX", &Kp_PX);
   fChain->SetBranchAddress("Kp_PY", &Kp_PY);
   fChain->SetBranchAddress("Kp_PZ", &Kp_PZ);
   fChain->SetBranchAddress("Kp_PE", &Kp_PE);
   fChain->SetBranchAddress("Km_PX", &Km_PX);
   fChain->SetBranchAddress("Km_PX", &Km_PY);
   fChain->SetBranchAddress("Km_PZ", &Km_PZ);
   fChain->SetBranchAddress("Km_PE", &Km_PE);
   fChain->SetBranchAddress("pim_PX", &pim_PX);
   fChain->SetBranchAddress("pim_PY", &pim_PY);
   fChain->SetBranchAddress("pim_PZ", &pim_PZ);
   fChain->SetBranchAddress("pim_PE", &pim_PE);
   fChain->SetBranchAddress("pip_PX", &pip_PX);
   fChain->SetBranchAddress("pip_PY", &pip_PY);
   fChain->SetBranchAddress("pip_PZ", &pip_PZ);
   fChain->SetBranchAddress("pip_PE", &pip_PE);
   fChain->SetBranchAddress("Piplus_PT", &Piplus_PT);
   fChain->SetBranchAddress("Kminus_PT", &Kminus_PT);
   fChain->SetBranchAddress("Piminus_PT", &Piminus_PT);
   fChain->SetBranchAddress("Kplus_PT", &Kplus_PT);
   fChain->SetBranchAddress("Piplus_IPCHI2_OWNPV", &Piplus_IPCHI2_OWNPV);
   fChain->SetBranchAddress("Kminus_IPCHI2_OWNPV", &Kminus_IPCHI2_OWNPV);
   fChain->SetBranchAddress("Piminus_IPCHI2_OWNPV", &Piminus_IPCHI2_OWNPV);
   fChain->SetBranchAddress("Kplus_IPCHI2_OWNPV", &Kplus_IPCHI2_OWNPV);
   fChain->SetBranchAddress("Kminus_PIDK", &Kminus_PIDK);
   fChain->SetBranchAddress("Kplus_PIDK", &Kplus_PIDK);
   fChain->SetBranchAddress("Piplus_PIDK", &Piplus_PIDK);
   fChain->SetBranchAddress("Piminus_PIDK", &Piminus_PIDK);
   fChain->SetBranchAddress("Piplus_TRACK_CHI2NDOF", &Piplus_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("Kminus_TRACK_CHI2NDOF", &Kminus_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("Piminus_TRACK_CHI2NDOF", &Piminus_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("Kplus_TRACK_CHI2NDOF", &Kplus_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("Kminus_PIDp", &Kminus_PIDp);
   fChain->SetBranchAddress("Kminus_PIDK", &Kminus_PIDK);
   fChain->SetBranchAddress("Kplus_PIDp", &Kplus_PIDp);
   fChain->SetBranchAddress("Kplus_PIDK", &Kplus_PIDK);
   fChain->SetBranchAddress("Piminus_PIDp", &Piminus_PIDp);
   fChain->SetBranchAddress("Piplus_PIDp", &Piplus_PIDp);
   fChain->SetBranchAddress("Piplus_isMuon", &Piplus_isMuon);
   fChain->SetBranchAddress("Piminus_isMuon", &Piminus_isMuon);
   fChain->SetBranchAddress("Kplus_isMuon", &Kplus_isMuon);
   fChain->SetBranchAddress("Kminus_isMuon", &Kminus_isMuon);
   fChain->SetBranchAddress("B_s0_MM", &B_s0_MM);
   
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

void AnalyzerDBsKsKs::printProgBar(Long64_t percent ){
  std::string bar;

  for(int i = 0; i < 50; i++){
    if( i < (percent/2)){
      bar.replace(i,1,"=");
    }else if( i == (percent/2)){
      bar.replace(i,1,">");
    }else{
      bar.replace(i,1," ");
    }
  }

  std::cout<< "\r" "[" << bar << "] ";
  std::cout.width( 3 );
  std::cout<< percent << "%     " << std::flush;
}

#endif 
