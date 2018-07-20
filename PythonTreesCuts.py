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

TreeDataBranches = ['pip_PT', 'Km_PT', 'pim_PT', 'Kp_PT',
                       'pip_IPCHI2_OWNPV', 'Km_IPCHI2_OWNPV', 'pim_IPCHI2_OWNPV', 'Kp_IPCHI2_OWNPV',
                       'Km_PIDK', 'Kp_PIDK', 'pip_PIDK', 'pim_PIDK',
                       'pip_TRACK_CHI2NDOF', 'Km_TRACK_CHI2NDOF', 'pim_TRACK_CHI2NDOF', 'Kp_TRACK_CHI2NDOF',
                       'Km_PIDp', 'Km_PIDK', 'Kp_PIDp', 'Kp_PIDK', 'pim_PIDp', 'pip_PIDp',                                         
                       'Kstb_M', 'Kst_M', 'Kstb_PT', 'Kst_PT',                                                                     
                       'Kstb_ENDVERTEX_CHI2', 'Kst_ENDVERTEX_CHI2', 'Kstb_DIRA_OWNPV', 'Kst_DIRA_OWNPV',
                       'pip_isMuon', 'pim_isMuon', 'Kp_isMuon', 'Km_isMuon',                                                       
                       'Kp_PX', 'Kp_PY', 'Kp_PZ', 'Kp_PE',                                                                         
                       'Km_PX', 'Km_PY', 'Km_PZ', 'Km_PE',
                       'pim_PX', 'pim_PY', 'pim_PZ', 'pim_PE',                                                                     
                       'pip_PX', 'pip_PY', 'pip_PZ', 'pip_PE']                                                                     

'''                                                                                                                                   
TreeMCBranches = ['Piplus_IPCHI2_OWNPV', 'Kminus_IPCHI2_OWNPV', 'Piminus_IPCHI2_OWNPV', 'Kplus_IPCHI2_OWNPV',                      
                     'Kminus_PIDK', 'Kplus_PIDK', 'Piplus_PIDK', 'Piminus_PIDK',                                                   
                     'Piplus_TRACK_CHI2NDOF', 'Kminus_TRACK_CHI2NDOF', 'Piminus_TRACK_CHI2NDOF', 'Kplus_TRACK_CHI2NDOF',           
                     'Kminus_PIDp', 'Kminus_PIDK', 'Kplus_PIDp', 'Kplus_PIDK', 'Piminus_PIDp', 'Piplus_PIDp',                      
                     'Piplus_isMuon', 'Piminus_isMuon', 'Kplus_isMuon', 'Kminus_isMuon', 'B_s0_MM']                                
'''                                                                                                                                
                                                                                                                                   
PTCuts = 'pip_PT>500. && Km_PT>500. && pim_PT>500. && Kp_PT>500.'                                                                  
                                                                                                                                   
TreeDataSelection = PTCuts                                                                                                         
                                                                                                                                   
#============================================= Podao of Tree ===============================================================       
TreeOriginal = rn.root2array(PathToTrees + SampleName , SampleNameTree, branches=TreeDataBranches, selection=TreeDataSelection)    
                                                                                                                                   
TreeCuts = rn.array2root(TreeOriginal, 'Podao_' + SampleName, 'DecayTree')                                                         
