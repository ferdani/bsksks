#!/usr/bin/env python3                                                                                                             
# -*- coding: utf-8 -*-                                                                                                            
'''                                                                                                                                
Created on Fri Jul 20 16:00:47 2018                                                                                                
                                                                                                                                   
@author: macbookpro                                                                                                                
'''

import root_numpy as rn
import numpy as np

PathToTrees = '/home3/daniel.fernandez/Arboles/'
SampleName = 'DTT_2016_Reco16Strip28_Down_BHADRON.root'
SampleNameTree ='Bs2KpiKpi/DecayTree'

TreeDataBranches = ['pip_PT', 'Km_PT', 'pim_PT', 'Kp_PT', 'pip_IPCHI2_OWNPV', 'Km_IPCHI2_OWNPV', 'pim_IPCHI2_OWNPV', 'Kp_IPCHI2_OWNPV', 'Km_PIDK', '\
Kp_PIDK', 'pip_PIDK', 'pim_PIDK', 'pip_TRACK_CHI2NDOF', 'Km_TRACK_CHI2NDOF', 'pim_TRACK_CHI2NDOF', 'Kp_TRACK_CHI2NDOF', 'Km_PIDp', 'Km_PIDK', 'Kp_PI\
Dp', 'Kp_PIDK', 'pim_PIDp', 'pip_PIDp', 'Kstb_M', 'Kst_M', 'Kstb_PT', 'Kst_PT', 'Kstb_ENDVERTEX_CHI2', 'Kst_ENDVERTEX_CHI2', 'Kstb_DIRA_OWNPV', 'Kst\
_DIRA_OWNPV', 'pip_isMuon', 'pim_isMuon', 'Kp_isMuon', 'Km_isMuon', 'Kp_PX', 'Kp_PY', 'Kp_PZ', 'Kp_PE', 'Km_PX', 'Km_PY', 'Km_PZ', 'Km_PE', 'pim_PX'\
, 'pim_PY', 'pim_PZ', 'pim_PE', 'pip_PX', 'pip_PY', 'pip_PZ', 'pip_PE']

PTCuts = 'pip_PT>500. & Km_PT>500. & pim_PT>500. & Kp_PT>500.'
Track_chi2 = 'pip_IPCHI2_OWNPV>36. & Km_IPCHI2_OWNPV>36. & pim_IPCHI2_OWNPV>36. & Kp_IPCHI2_OWNPV>36.'
Pid_kaons = 'Km_PIDK>2. & Kp_PIDK>2.'
Pid_pions = 'pip_PIDK<0. & pim_PIDK<0.'
Trchi2ndof = 'pip_TRACK_CHI2NDOF<5 & Km_TRACK_CHI2NDOF<5 & pim_TRACK_CHI2NDOF<5 & Kp_TRACK_CHI2NDOF<5'
VetoProtons = '(Km_PIDp-Km_PIDK)<0. & (Kp_PIDp-Kp_PIDK)<0. & pim_PIDp<0. & pip_PIDp<0.'
KsMass = 'Kstb_M<1600. & Kst_M<1600.'
KsPT = 'Kstb_PT>900. & Kst_PT>900.'
Ks_Vchi2ndof = 'Kstb_ENDVERTEX_CHI2<9. & Kst_ENDVERTEX_CHI2<9.'
Ks_DIRA = 'Kstb_DIRA_OWNPV>0. & Kst_DIRA_OWNPV>0.'
VetoMuons = 'pip_isMuon==0 & pim_isMuon==0 & Kp_isMuon==0 & Km_isMuon == 0'

TreeDataSelection = [PTCuts, Track_chi2, Pid_kaons, Pid_pions, Trchi2ndof, KsMass, KsPT, Ks_Vchi2ndof, Ks_DIRA, VetoMuons]
TreeDataSelection = ' & '.join(TreeDataSelection)
#============================================= Podao of Tree ===============================================================                         

TreeOriginal = rn.root2array(PathToTrees + SampleName , SampleNameTree, branches = ['Bs_MM'], selection = TreeDataSelection)

TreeCuts = rn.array2root(TreeOriginal, 'Podao_' + SampleName, 'DecayTree')                                                    
