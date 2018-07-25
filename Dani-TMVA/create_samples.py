from ROOT import *

#fin_sgn = TFile("/scratch03/saborido/bskstkst/MC/Bs2Kst0Kst0_wide_MC2012_magDown_Bs2Kst0Kst0_13104001_Job1555.root")
#tin_sgn = fin_sgn.Get("Bs2Kst0Kst0/DecayTree")

fin_bkg = TFile("/home3/juan.saborido/bskstkst/run2/Reduced_DTT_2016_Reco16Strip28_Down_BHADRON.root")
tin_bkg = fin_bkg.Get("DecayTree")

fout = TFile("bskstkst_tmva_samples.root","RECREATE")

#tout_sgn = tin_sgn.CloneTree(-1)

bkgcuts = "((5500.<Bs_M) && (Bs_M<5800.)) || ((4950.<Bs_M) && (Bs_M<5100.))"
tout_bkg = tin_bkg.CopyTree(bkgcuts)

gROOT.ProcessLine( "struct MyStruct{ Float_t afloat; };" )

evtype = MyStruct()
weight = MyStruct()

#br_evtype_sgn = tout_sgn.Branch('sgn', AddressOf(evtype,'afloat'), 'sgn/F')
#br_weight_sgn = tout_sgn.Branch('weight', AddressOf(weight,'afloat'), 'weight/F')
br_evtype_bkg = tout_bkg.Branch('sgn', AddressOf(evtype,'afloat'), 'sgn/F')
br_weight_bkg = tout_bkg.Branch('weight', AddressOf(weight,'afloat'), 'weight/F')

sig_weight = 1.
bkg_weight = 1.

print 'Processing data ...'

#print '- sgn -'
#for ev in tin_sgn:
#    evtype.afloat = 1.
#    weight.afloat = sig_weight
#    tout_sgn.Fill()

print '- Background -'
ipr = 1
iev = 1
for ev in tin_bkg:
    iev = iev + 1
    evtype.afloat = 0.
    weight.afloat = bkg_weight
    tout_bkg.Fill()
    if ( iev/1000 == ipr ):
      print iev, " events scanned"
      ipr = ipr + 1


print 'Data processed.'

#tout_list = TList()
#tout_list.Add(tout_sgn)
#tout_list.Add(tout_bkg)
#tout = TTree.MergeTrees(tout_list)
#tout.Write("",TObject.kOverwrite)
#fout.Close()

tout_bkg.Write("",TObject.kOverwrite)
fout.Close()



