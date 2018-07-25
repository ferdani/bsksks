#from ROOT import *
from ROOT import TMVA, TFile, TCut

TMVA.Tools.Instance()

##############################################
# Use data sidebands for the background sample
##############################################

fdata = TFile("/home3/daniel.fernandez/bsksks/BkgWindow_Podao_DTT_2016_Reco16Strip2_Up+Down_BHADRON.root")
tdata = fdata.Get("DecayTree")

##############################################
# Use 2012 MC for the signal sample
##############################################

fmc = TFile("/scratch03/saborido/bskstkst/MC/Short_Renamed_Bs2Kst0Kst0_wide_MC2012_magDown_Bs2Kst0Kst0_13104001_Job1555.root" )
tmc = fmc.Get("DecayTree")

##############################################
# Load data
##############################################


fout = TFile("Dani_BDT_training_result.root","RECREATE")
factory = TMVA.Factory( "TMVAClassification", fout, "!V:!Silent:Color:DrawProgressBar:Transformations=I;D;P;G,D:AnalysisType=Classification" )

print ' '
print 'Copying data DecayTree to TreeB ...'
TreeB = tdata.CopyTree("")
print 'Data DecayTree copied to TreeB'
print ' '

print ' '
print 'Copying MC DecayTree to TreeS ...'
TreeS = tmc.CopyTree("")
print 'MC DecayTree copied to TreeS'
print ' '

dataloader = TMVA.DataLoader("dataset1") # xml weights in dataset1/weights/TMVAClassification_BDT.weights.xml

dataloader.AddVariable( "Bs_PT"             , "D" ) ; 
dataloader.AddVariable( "Kst_PT"            , "D" ) ;
dataloader.AddVariable( "Kstb_PT"           , "D" ) ;
dataloader.AddVariable( "max_Kp_Km_PT   := max(Kp_PT,Km_PT)", "D" ) ;
dataloader.AddVariable( "min_Kp_Km_PT   := min(Kp_PT,Km_PT)", "D" ) ;
dataloader.AddVariable( "max_pip_pim_PT := max(pip_PT,pim_PT)", "D" ) ;
dataloader.AddVariable( "min_pip_pim_PT := min(pip_PT,pim_PT)", "D" ) ;
dataloader.AddVariable( "Bs_DIRA_OWNPV"     , "D" ) ;
dataloader.AddVariable( "Bs_ENDVERTEX_CHI2" , "D" ) ;
dataloader.AddVariable( "Bs_LOKI_ETA"       , "D" ) ;
dataloader.AddVariable( "Kst_LOKI_ETA"      , "D" ) ;
dataloader.AddVariable( "Kstb_LOKI_ETA"     , "D" ) ;
dataloader.AddVariable( "max_Kp_Km_ETA    := max(Kp_LOKI_ETA,Km_LOKI_ETA)", "D" ) ;
dataloader.AddVariable( "min_Kp_Km_ETA    := min(Kp_LOKI_ETA,Km_LOKI_ETA)", "D" ) ;
dataloader.AddVariable( "max_pip_pim_ETA  := max(pip_LOKI_ETA,pim_LOKI_ETA)", "D" ) ;
dataloader.AddVariable( "min_pip_pim_ETA  := min(pip_LOKI_ETA,pim_LOKI_ETA)", "D" ) ;

dataloader.AddSpectator( "Bs_M"             , "D" ) ;

# cuts defining the signal and background sample
sigCuts = TCut("")
#bkgCuts = TCut("((4950.<Bs_M)&&(Bs_M<5100.)) || ((5500.<Bs_M)&&(Bs_M<5800.))")
bkgCuts = TCut("")

sgnWeight = 1.0
bkgWeight = 1.0
dataloader.AddSignalTree(     TreeS, sgnWeight )
dataloader.AddBackgroundTree( TreeB, bkgWeight )

#dataloader.SetWeightExpression("weight")

dataloader.PrepareTrainingAndTestTree( sigCuts, bkgCuts, ":".join([ "SplitMode=Random", "NormMode=None", "!V" ]))

method = factory.BookMethod(dataloader, TMVA.Types.kBDT,"BDT","!H:!V:VarTransform=D,G:NTrees=300:BoostType=AdaBoost:UseBaggedBoost:nCuts=-1:MinNodeSize=5:MaxDepth=3")

#method = factory.BookMethod(dataloader, TMVA.Types.kBDT,"BDTG","!H:!V:NTrees=1000:MinNodeSize=2.5%:BoostType=Grad:Shrinkage=0.10:UseBaggedBoost:BaggedSampleFraction=0.5:nCuts=20:MaxDepth=2" )

factory.TrainAllMethods()
factory.TestAllMethods()
factory.EvaluateAllMethods()


