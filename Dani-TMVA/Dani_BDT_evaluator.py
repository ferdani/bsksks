from ROOT import *
from math import *
from array import array
import os, sys

filename = "/home3/daniel.fernandez/bsksks/Podao_DTT_2016_Reco16Strip2_Up+Down_BHADRON"

fin = TFile(filename+".root")
tin = fin.Get("DecayTree")
fout = TFile(filename+"_wBDT.root","RECREATE")
print 'Loading data ...'
tout = tin.CopyTree("")
print 'Data loaded.'

reader = TMVA.Reader()

var_Bs_PT              = array('f',[0])
var_Kst_PT             = array('f',[0])
var_Kstb_PT            = array('f',[0])
var_max_Kp_Km_PT       = array('f',[0])
var_min_Kp_Km_PT       = array('f',[0])
var_max_pip_pim_PT     = array('f',[0])
var_min_pip_pim_PT     = array('f',[0])
var_Bs_DIRA_OWNPV      = array('f',[0])
var_Bs_ENDVERTEX_CHI2  = array('f',[0])
var_Bs_LOKI_ETA        = array('f',[0])
var_Kst_LOKI_ETA       = array('f',[0])
var_Kstb_LOKI_ETA      = array('f',[0])
var_max_Kp_Km_ETA      = array('f',[0])
var_min_Kp_Km_ETA      = array('f',[0])
var_max_pip_pim_ETA    = array('f',[0])
var_min_pip_pim_ETA    = array('f',[0])

reader.AddVariable( "Bs_PT"                                               , var_Bs_PT             )
reader.AddVariable( "Kst_PT"                                              , var_Kst_PT            )
reader.AddVariable( "Kstb_PT"                                             , var_Kstb_PT           )
reader.AddVariable( "max_Kp_Km_PT   := max(Kp_PT,Km_PT)"                  , var_max_Kp_Km_PT      )
reader.AddVariable( "min_Kp_Km_PT   := min(Kp_PT,Km_PT)"                  , var_min_Kp_Km_PT      )
reader.AddVariable( "max_pip_pim_PT := max(pip_PT,pim_PT)"                , var_max_pip_pim_PT    )
reader.AddVariable( "min_pip_pim_PT := min(pip_PT,pim_PT)"                , var_min_pip_pim_PT    )
reader.AddVariable( "Bs_DIRA_OWNPV"                                       , var_Bs_DIRA_OWNPV     )
reader.AddVariable( "Bs_ENDVERTEX_CHI2"                                   , var_Bs_ENDVERTEX_CHI2 )
reader.AddVariable( "Bs_LOKI_ETA"                                         , var_Bs_LOKI_ETA       )
reader.AddVariable( "Kst_LOKI_ETA"                                        , var_Kst_LOKI_ETA      )
reader.AddVariable( "Kstb_LOKI_ETA"                                       , var_Kstb_LOKI_ETA     )
reader.AddVariable( "max_Kp_Km_ETA   := max(Kp_LOKI_ETA,Km_LOKI_ETA)"     , var_max_Kp_Km_ETA     )
reader.AddVariable( "min_Kp_Km_ETA   := min(Kp_LOKI_ETA,Km_LOKI_ETA)"     , var_min_Kp_Km_ETA     )
reader.AddVariable( "max_pip_pim_ETA := max(pip_LOKI_ETA,pim_LOKI_ETA)"   , var_max_pip_pim_ETA   )
reader.AddVariable( "min_pip_pim_ETA := min(pip_LOKI_ETA,pim_LOKI_ETA)"   , var_min_pip_pim_ETA   )

var_Bs_M = array('f',[0])
reader.AddSpectator("Bs_M", var_Bs_M)

reader.BookMVA("BDT","dataset1/weights/TMVAClassification_BDT.weights.xml")
#reader.BookMVA("BDTG","dataset1/weights/TMVAClassification_BDTG.weights.xml")

gROOT.ProcessLine("struct MyStruct{ Float_t afloat; };")
from ROOT import MyStruct


bdt_output  = MyStruct()
#bdtg_output = MyStruct()
br_bdt  = tout.Branch('BDT',  AddressOf(bdt_output, 'afloat'), 'BDT/F')
#br_bdtg = tout.Branch('BDTG', AddressOf(bdtg_output,'afloat'), 'BDTG/F')

print "Processing events ..."
for ev in tout:

    var_Bs_PT            [0] = ev.Bs_PT            
    var_Kst_PT           [0] = ev.Kst_PT           
    var_Kstb_PT          [0] = ev.Kstb_PT          
    var_max_Kp_Km_PT     [0] = max(ev.Kp_PT,ev.Km_PT)
    var_min_Kp_Km_PT     [0] = min(ev.Kp_PT,ev.Km_PT)
    var_max_pip_pim_PT   [0] = max(ev.pip_PT,ev.pim_PT)
    var_min_pip_pim_PT   [0] = min(ev.pip_PT,ev.pim_PT)
    var_Bs_DIRA_OWNPV    [0] = ev.Bs_DIRA_OWNPV    
    var_Bs_ENDVERTEX_CHI2[0] = ev.Bs_ENDVERTEX_CHI2
    var_Bs_LOKI_ETA      [0] = ev.Bs_LOKI_ETA      
    var_Kst_LOKI_ETA     [0] = ev.Kst_LOKI_ETA     
    var_Kstb_LOKI_ETA    [0] = ev.Kstb_LOKI_ETA    
    var_max_Kp_Km_ETA    [0] = max(ev.Kp_LOKI_ETA,ev.Km_LOKI_ETA)
    var_min_Kp_Km_ETA    [0] = min(ev.Kp_LOKI_ETA,ev.Km_LOKI_ETA)
    var_max_pip_pim_ETA  [0] = max(ev.pip_LOKI_ETA,ev.pim_LOKI_ETA)
    var_min_pip_pim_ETA  [0] = min(ev.pip_LOKI_ETA,ev.pim_LOKI_ETA)


    bdt_output.afloat  = reader.EvaluateMVA("BDT")
#   bdtg_output.afloat = reader.EvaluateMVA("BDTG")
    br_bdt.Fill()
#   br_bdtg.Fill()

print "Events processed."

tout.Write()
fout.Close()

