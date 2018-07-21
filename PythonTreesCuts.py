#!/usr/bin/env python3
# -*- coding: utf-8 -*-
'''
Created on Fri Jul 20 16:00:47 2018

@author: macbookpro
'''
import time
import root_numpy as rn
import numpy as np

t0 = time.time()

PathToTrees = '/home3/daniel.fernandez/Arboles/'
SampleName1 = 'DTT_2016_Reco16Strip28_Down_BHADRON.root'
SampleName2 = 'DTT_2016_Reco16Strip28_Up_BHADRON.root'
SampleNameTree ='Bs2KpiKpi/DecayTree'

#----creamos las siguientes branches para emplearlas en el TMVA-BDT ----
TreeDataBranches = ['Kst_PT','Kstb_PT','Kp_PT','Km_PT','pip_PT','pim_PT','Bs_DIRA_OWNPV','Bs_ENDVERTEX_CHI2','Bs_LOKI_ETA','Kst_LOKI_ETA','Kstb_LOKI_ETA','Kp_LOKI_ETA','Km_LOKI_ETA','pip_LOKI_ETA','pim_LOKI_ETA','Bs_M']

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

print('=================================')            
print('Analyzing the first Data Tree ...')
TreeOriginal1 = rn.root2array(PathToTrees + SampleName1 , SampleNameTree, branches = TreeDataBranches, selection = TreeDataSelection)
print('Complete!')
print('=================================')
print('Analyzing the second Data Tree ...')
TreeOriginal2 = rn.root2array(PathToTrees + SampleName2 , SampleNameTree, branches = TreeDataBranches, selection = TreeDataSelection)
print('Complete!')
print('Making the merged ...')
TreeConcatenate = np.concatenate((TreeOriginal1,TreeOriginal2), axis=0)

TreeCuts = rn.array2root(TreeConcatenate, 'Podao_DTT_2016_Reco16Strip2_Up+Down_BHADRON.root', 'DecayTree', 'recreate')

t1 = time.time()

print('Total CPU time:', t1-t0 , 's')
