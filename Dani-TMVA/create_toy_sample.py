from ROOT import *

fin_signal = TFile("/afs/cern.ch/work/j/jugarcia/public/FastNTuples/Bd2Dptaunu/Bd2Dptaunu_MC_2015.root")
tin_signal = fin_signal.Get("DecayTree")

fin_bkg = TFile("/afs/cern.ch/work/j/jugarcia/public/FastNTuples/Bd2Dptaunu/Bd2Dpmu_RealData_2015_PID.root")
tin_bkg = fin_bkg.Get("DecayTree")

fout = TFile("/afs/cern.ch/work/j/jugarcia/public/FastNTuples/Bd2Dptaunu/Bd2Dptaunu_ToyForBDT.root","RECREATE")

tout_signal = tin_signal.CloneTree(0)
tout_bkg = tin_bkg.CloneTree(0)

gROOT.ProcessLine(\
	"struct MyStruct{\
	Float_t afloat;\
	};")
from ROOT import MyStruct

evtype = MyStruct()
weight = MyStruct()
mass = MyStruct()

br_evtype_signal = tout_signal.Branch('signal', AddressOf(evtype,'afloat'), 'signal/F')
br_weight_signal = tout_signal.Branch('weight', AddressOf(weight,'afloat'), 'weight/F')
br_mass_signal = tout_signal.Branch('Dplus_MM_toy', AddressOf(mass,'afloat'), 'Dplus_MM_toy/F')
br_evtype_bkg = tout_bkg.Branch('signal', AddressOf(evtype,'afloat'), 'signal/F')
br_weight_bkg = tout_bkg.Branch('weight', AddressOf(weight,'afloat'), 'weight/F')
br_mass_bkg = tout_bkg.Branch('Dplus_MM_toy', AddressOf(mass,'afloat'), 'Dplus_MM_toy/F')

bkg_pdf = TF1("bkg_pdf","1.-4.3835e-04*x",1840,1900)

sig_weight = 1.3516e+06/26651.
bkg_weight = 2.7154e+05/111230.

print 'Processing data ...'
print '- Signal -'
for ev in tin_signal:
	if ev.Dplus_BKGCAT==0 and ev.Dplus_MM>=1840. and ev.Dplus_MM<1900.:
		evtype.afloat = 1.
		weight.afloat = sig_weight
		mass.afloat = ev.Dplus_MM
		tout_signal.Fill()
print '- Background -'
for ev in tin_bkg:
	if ((ev.Dplus_MM>=1830 and ev.Dplus_MM<1840) or (ev.Dplus_MM>=1900 and ev.Dplus_MM<1910)) and ev.pi1_ProbNNpik>=0.14 and ev.pi2_ProbNNpik>=0.14 and ev.K_ProbNNkpi>=0.12:
		evtype.afloat = 0.
		weight.afloat = bkg_weight
		mass.afloat = bkg_pdf.GetRandom()
		tout_bkg.Fill()
print 'Data processed.'

tout_list = TList()
tout_list.Add(tout_signal)
tout_list.Add(tout_bkg)
tout = TTree.MergeTrees(tout_list)
tout.Write()
fout.Close()
