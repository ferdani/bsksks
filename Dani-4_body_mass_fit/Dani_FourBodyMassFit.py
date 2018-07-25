import sys
import os
import numpy
from ROOT import *

gROOT.ProcessLine(".L RooIpatia2.cxx++")

#############################################################################################
#############################################################################################

#gROOT.ProcessLine(".L fit.C")

gSystem.Load("libRooFit.so")
gROOT.SetStyle("Plain")

mass = RooRealVar("Bs_M","M(K#pi K#pi) [MeV/c^2]",5000,5800)

mass_forPartReco = RooRealVar("Bs_M","M(K#pi K#pi) [MeV/c^2]",5000,5250)
mass_forCombinat = RooRealVar("Bs_M","M(K#pi K#pi) [MeV/c^2]",5600,5800)

## PARAMETERIZATION OF THE COMPONENTS

############################
## Bs2KstKst, Ipatia2
############################

bs2kstkst_l     = RooRealVar( "bs2kstkst_l"     , "bs2kstkst_l"     , -5., -20., -1. )
bs2kstkst_zeta  = RooRealVar( "bs2kstkst_zeta"  , "bs2kstkst_zeta"  , 0. )
bs2kstkst_fb    = RooRealVar( "bs2kstkst_fb"    , "bs2kstkst_fb"    , 0. )
bs2kstkst_sigma = RooRealVar( "bs2kstkst_sigma" , "bs2kstkst_sigma" , 17., 15., 25. )
bs2kstkst_mu    = RooRealVar( "bs2kstkst_mu"    , "bs2kstkst_mu"    , 5360., 5380. )
bs2kstkst_a     = RooRealVar( "bs2kstkst_a"     , "bs2kstkst_a"     , 2.5, 0., 10. )
bs2kstkst_n     = RooRealVar( "bs2kstkst_n"     , "bs2kstkst_n"     , 2.5, 0., 10. )
bs2kstkst_a2    = RooRealVar( "bs2kstkst_a2"    , "bs2kstkst_a2"    , 2.5, 0., 10. )
bs2kstkst_n2    = RooRealVar( "bs2kstkst_n2"    , "bs2kstkst_n2"    , 2.5, 0., 10. )
bs2kstkst_yield = RooRealVar( "bs2kstkst_yield" , "bs2kstkst_yield" , 2000., 0., 100000. )

bs2kstkst_l      .setConstant(kTRUE)
bs2kstkst_zeta   .setConstant(kTRUE)
bs2kstkst_fb     .setConstant(kTRUE)
#bs2kstkst_sigma  .setConstant(kTRUE)
#bs2kstkst_mu     .setConstant(kTRUE)
bs2kstkst_a      .setConstant(kTRUE)
bs2kstkst_n      .setConstant(kTRUE)
bs2kstkst_a2     .setConstant(kTRUE)
bs2kstkst_n2     .setConstant(kTRUE)


bs2kstkst = RooIpatia2("Bs2KstKst", "Bs2KstKst", mass, bs2kstkst_l,      \
                                                       bs2kstkst_zeta,   \
                                                       bs2kstkst_fb,     \
                                                       bs2kstkst_sigma,  \
                                                       bs2kstkst_mu,     \
                                                       bs2kstkst_a,      \
                                                       bs2kstkst_n,      \
                                                       bs2kstkst_a2,     \
                                                       bs2kstkst_n2      )

############################
## Bd2KstKst, Ipatia2
############################

bd2kstkst_l     = RooRealVar( "bd2kstkst_l"     , "bd2kstkst_l"     , -5., -20., -1. )
bd2kstkst_zeta  = RooRealVar( "bd2kstkst_zeta"  , "bd2kstkst_zeta"  , 0. )
bd2kstkst_fb    = RooRealVar( "bd2kstkst_fb"    , "bd2kstkst_fb"    , 0. )
bd2kstkst_sigma = RooRealVar( "bd2kstkst_sigma" , "bd2kstkst_sigma" , 21.2012, 15., 25. )
bd2kstkst_mu    = RooRealVar( "bd2kstkst_mu"    , "bd2kstkst_mu"    , 5285.2952, 5280., 5290. )
bd2kstkst_a     = RooRealVar( "bd2kstkst_a"     , "bd2kstkst_a"     , 2.5, 0., 10. )
bd2kstkst_n     = RooRealVar( "bd2kstkst_n"     , "bd2kstkst_n"     , 2.5, 0., 10. )
bd2kstkst_a2    = RooRealVar( "bd2kstkst_a2"    , "bd2kstkst_a2"    , 2.5, 0., 10. )
bd2kstkst_n2    = RooRealVar( "bd2kstkst_n2"    , "bd2kstkst_n2"    , 2.5, 0., 10. )
bd2kstkst_yield = RooRealVar( "bd2kstkst_yield" , "bd2kstkst_yield" , 500., 0., 100000. )

bd2kstkst_l      .setConstant(kTRUE)
bd2kstkst_zeta   .setConstant(kTRUE)
bd2kstkst_fb     .setConstant(kTRUE)
#bd2kstkst_sigma  .setConstant(kTRUE)
#bd2kstkst_mu     .setConstant(kTRUE)
bd2kstkst_a      .setConstant(kTRUE)
bd2kstkst_n      .setConstant(kTRUE)
bd2kstkst_a2     .setConstant(kTRUE)
bd2kstkst_n2     .setConstant(kTRUE)


bd2kstkst = RooIpatia2("Bd2KstKst", "Bd2KstKst", mass, bd2kstkst_l,      \
                                                       bd2kstkst_zeta,   \
                                                       bd2kstkst_fb,     \
                                                       bd2kstkst_sigma,  \
                                                       bd2kstkst_mu,     \
                                                       bd2kstkst_a,      \
                                                       bd2kstkst_n,      \
                                                       bd2kstkst_a2,     \
                                                       bd2kstkst_n2      )

############################
## Bs2PhiKst, Ipatia2
############################

bs2phikst_l     = RooRealVar( "bs2phikst_l"     , "bs2phikst_l"     , -5., -20., -1. )
bs2phikst_zeta  = RooRealVar( "bs2phikst_zeta"  , "bs2phikst_zeta"  , 0. )
bs2phikst_fb    = RooRealVar( "bs2phikst_fb"    , "bs2phikst_fb"    , 0. )
bs2phikst_sigma = RooRealVar( "bs2phikst_sigma" , "bs2phikst_sigma" , 15., 10., 100. )
bs2phikst_mu    = RooRealVar( "bs2phikst_mu"    , "bs2phikst_mu"    , 5300., 5400. )
bs2phikst_a     = RooRealVar( "bs2phikst_a"     , "bs2phikst_a"     , 2.5, 0., 10. )
bs2phikst_n     = RooRealVar( "bs2phikst_n"     , "bs2phikst_n"     , 2.5, 0., 10. )
bs2phikst_a2    = RooRealVar( "bs2phikst_a2"    , "bs2phikst_a2"    , 2.5, 0., 10. )
bs2phikst_n2    = RooRealVar( "bs2phikst_n2"    , "bs2phikst_n2"    , 2.5, 0., 10. )
bs2phikst_yield = RooRealVar( "bs2phikst_yield" , "bs2phikst_yield" , 50., 0., 100000. )

bs2phikst_l      .setConstant(kTRUE)
bs2phikst_zeta   .setConstant(kTRUE)
bs2phikst_fb     .setConstant(kTRUE)
bs2phikst_sigma  .setConstant(kTRUE)
bs2phikst_mu     .setConstant(kTRUE)
bs2phikst_a      .setConstant(kTRUE)
bs2phikst_n      .setConstant(kTRUE)
bs2phikst_a2     .setConstant(kTRUE)
bs2phikst_n2     .setConstant(kTRUE)


bs2phikst = RooIpatia2("Bs2PhiKst", "Bs2PhiKst", mass, bs2phikst_l,      \
                                                       bs2phikst_zeta,   \
                                                       bs2phikst_fb,     \
                                                       bs2phikst_sigma,  \
                                                       bs2phikst_mu,     \
                                                       bs2phikst_a,      \
                                                       bs2phikst_n,      \
                                                       bs2phikst_a2,     \
                                                       bs2phikst_n2      )

############################
## Bd2PhiKst, Ipatia2
############################

bd2phikst_l     = RooRealVar( "bd2phikst_l"     , "bd2phikst_l"     , -5., -20., -1. )
bd2phikst_zeta  = RooRealVar( "bd2phikst_zeta"  , "bd2phikst_zeta"  , 0. )
bd2phikst_fb    = RooRealVar( "bd2phikst_fb"    , "bd2phikst_fb"    , 0. )
bd2phikst_sigma = RooRealVar( "bd2phikst_sigma" , "bd2phikst_sigma" , 18., 5., 25. )
bd2phikst_mu    = RooRealVar( "bd2phikst_mu"    , "bd2phikst_mu"    , 5200., 5270. )
bd2phikst_a     = RooRealVar( "bd2phikst_a"     , "bd2phikst_a"     , 2.5, 0., 10. )
bd2phikst_n     = RooRealVar( "bd2phikst_n"     , "bd2phikst_n"     , 2.5, 0., 10. )
bd2phikst_a2    = RooRealVar( "bd2phikst_a2"    , "bd2phikst_a2"    , 2.5, 0., 10. )
bd2phikst_n2    = RooRealVar( "bd2phikst_n2"    , "bd2phikst_n2"    , 2.5, 0., 10. )
bd2phikst_yield = RooRealVar( "bd2phikst_yield" , "bd2phikst_yield" , 50., 0., 100000. )

bd2phikst_l      .setConstant(kTRUE)
bd2phikst_zeta   .setConstant(kTRUE)
bd2phikst_fb     .setConstant(kTRUE)
#bd2phikst_sigma  .setConstant(kTRUE)
#bd2phikst_mu     .setConstant(kTRUE)
bd2phikst_a      .setConstant(kTRUE)
bd2phikst_n      .setConstant(kTRUE)
bd2phikst_a2     .setConstant(kTRUE)
bd2phikst_n2     .setConstant(kTRUE)


bd2phikst = RooIpatia2("Bd2PhiKst", "Bd2PhiKst", mass, bd2phikst_l,      \
                                                       bd2phikst_zeta,   \
                                                       bd2phikst_fb,     \
                                                       bd2phikst_sigma,  \
                                                       bd2phikst_mu,     \
                                                       bd2phikst_a,      \
                                                       bd2phikst_n,      \
                                                       bd2phikst_a2,     \
                                                       bd2phikst_n2      )

############################
## Bd2RhoKst, Ipatia2
############################

bd2rhokst_l     = RooRealVar( "bd2rhokst_l"     , "bd2rhokst_l"     , -5., -20., -1. )
bd2rhokst_zeta  = RooRealVar( "bd2rhokst_zeta"  , "bd2rhokst_zeta"  , 0. )
bd2rhokst_fb    = RooRealVar( "bd2rhokst_fb"    , "bd2rhokst_fb"    , 0. )
bd2rhokst_sigma = RooRealVar( "bd2rhokst_sigma" , "bd2rhokst_sigma" , 18., 5., 25. )
bd2rhokst_mu    = RooRealVar( "bd2rhokst_mu"    , "bd2rhokst_mu"    , 5200., 5270. )
bd2rhokst_a     = RooRealVar( "bd2rhokst_a"     , "bd2rhokst_a"     , 2.5, 0., 10. )
bd2rhokst_n     = RooRealVar( "bd2rhokst_n"     , "bd2rhokst_n"     , 2.5, 0., 10. )
bd2rhokst_a2    = RooRealVar( "bd2rhokst_a2"    , "bd2rhokst_a2"    , 2.5, 0., 10. )
bd2rhokst_n2    = RooRealVar( "bd2rhokst_n2"    , "bd2rhokst_n2"    , 2.5, 0., 10. )
bd2rhokst_yield = RooRealVar( "bd2rhokst_yield" , "bd2rhokst_yield" , 50., 0., 100000. )

bd2rhokst_l      .setConstant(kTRUE)
bd2rhokst_zeta   .setConstant(kTRUE)
bd2rhokst_fb     .setConstant(kTRUE)
bd2rhokst_sigma  .setConstant(kTRUE)
bd2rhokst_mu     .setConstant(kTRUE)
bd2rhokst_a      .setConstant(kTRUE)
bd2rhokst_n      .setConstant(kTRUE)
bd2rhokst_a2     .setConstant(kTRUE)
bd2rhokst_n2     .setConstant(kTRUE)


bd2rhokst = RooIpatia2("Bd2RhoKst", "Bd2RhoKst", mass, bd2rhokst_l,      \
                                                       bd2rhokst_zeta,   \
                                                       bd2rhokst_fb,     \
                                                       bd2rhokst_sigma,  \
                                                       bd2rhokst_mu,     \
                                                       bd2rhokst_a,      \
                                                       bd2rhokst_n,      \
                                                       bd2rhokst_a2,     \
                                                       bd2rhokst_n2      )

############################
## Lb2ppiKpi, CB
############################




############################
## PartRecon, Argus
############################

#part_reco_p     = RooRealVar( "part_reco_p"     , "part_reco_p"     ,   0.4,   0.0,  1.0  )
#part_reco_c     = RooRealVar( "part_reco_c"     , "part_reco_c"     , -10.0, -50.0, -0.05 )

#part_reco_m0    = RooRealVar( "part_reco_m0"    , "part_reco_m0"    ,   5250.,   5000,  5500.  )
#part_reco_p     = RooRealVar( "part_reco_p"     , "part_reco_p"     ,   5.22,   5.20,  5.30  )

part_reco_p     = RooRealVar( "part_reco_p"     , "part_reco_p"     ,   5220.,   5200.,  5300. )
part_reco_c     = RooRealVar( "part_reco_c"     , "part_reco_c"     , -10.0, -100.0, -0.05 )

#part_reco_p.setConstant(kTRUE)

partrecon_yield = RooRealVar( "partrecon_yield" , "partrecon_yield" , 50., 0., 100000. )

partrecon = RooArgusBG("PartRecon", "PartRecon", mass, part_reco_p, part_reco_c )


############################
## CombBackg, Exponential
############################

bkg_exp_p       = RooRealVar( "bkg_exp_p"       , "bkg_exp_p"       , -0.001, -0.010, 0. )
combbackg_yield = RooRealVar( "combbackg_yield" , "combbackg_yield" , 50., 0., 100000. )

combbackg = RooExponential("CombBackg", "CombBackg", mass, bkg_exp_p )


############################
## Full model
############################

#model = RooAddPdf( "model", "model", RooArgList(bs2kstkst, bd2kstkst, bd2phikst, bs2phikst, bd2rhokst, partrecon, combbackg ), \
#RooArgList(bs2kstkst_yield, bd2kstkst_yield, bd2phikst_yield, bs2phikst_yield, bd2rhokst_yield, partrecon_yield, combbackg_yield ) )

#model = RooAddPdf( "model", "model", RooArgList(bs2kstkst, bd2kstkst), \
#RooArgList(bs2kstkst_yield, bd2kstkst_yield ) )

#model = RooAddPdf( "model", "model", RooArgList(bs2kstkst, bd2kstkst, combbackg), \
#RooArgList(bs2kstkst_yield, bd2kstkst_yield, combbackg_yield ) )

#model = RooAddPdf( "model", "model", RooArgList(bs2kstkst, bd2kstkst, combbackg, partrecon), \
#RooArgList(bs2kstkst_yield, bd2kstkst_yield, combbackg_yield, partrecon_yield ) )

model = RooAddPdf( "model", "model", RooArgList(bs2kstkst, bd2kstkst, bd2phikst, combbackg, partrecon), \
RooArgList(bs2kstkst_yield, bd2kstkst_yield, bd2phikst_yield, combbackg_yield, partrecon_yield ) )

#model = RooAddPdf( "model", "model", RooArgList(bs2kstkst, bd2kstkst, bd2phikst, bd2rhokst, combbackg, partrecon), \
#RooArgList(bs2kstkst_yield, bd2kstkst_yield, bd2phikst_yield, bd2rhokst_yield, combbackg_yield, partrecon_yield ) )

#model = RooAddPdf( "model", "model", RooArgList(bs2kstkst, bd2kstkst, bd2phikst, bd2rhokst, bs2phikst, combbackg, partrecon), \
#RooArgList(bs2kstkst_yield, bd2kstkst_yield, bd2phikst_yield, bd2rhokst_yield, bs2phikst_yield, combbackg_yield, partrecon_yield ) )

#############################################################################################
#############################################################################################

#fname = sys.argv[1]
#Here you choose the tree with the wdt variable:
fname = "/home3/daniel.fernandez/bsksks/Podao_DTT_2016_Reco16Strip2_Up+Down_BHADRON_wBDT.root"
tree_name = "DecayTree"

f = TFile(fname)
t = f.Get(tree_name)

ftemp = TFile("ftemp.root","recreate")

cutbdt = "BDT>=0.03"
tc = t.CopyTree( cutbdt )
#tc = t.CopyTree( )

# data samples
data = RooDataSet("data", "data", tc, RooArgSet(mass) )
data_forPartReco = RooDataSet("data_forPartReco", "data_forPartReco", tc, RooArgSet(mass_forPartReco) )
data_forCombinat = RooDataSet("data_forCombinat", "data_forCombinat", tc, RooArgSet(mass_forCombinat) )

# Perform the fit

fitres = model.fitTo(data,RooFit.Extended(),RooFit.Save())

#ffitres = TFile("fitresults.root")
#fitres = ffitres.Get("SomeName")
#ffitres.Close()

frm = mass.frame(RooFit.Title("K^{+}#pi^{-}K^{-}#pi^{+} sample"),RooFit.Bins(50))

data.plotOn(frm)

#BreitVect.plotOn(frm)
#BreitScal.plotOn(frm)

model.plotOn(frm,RooFit.Name("model"))

model.plotOn(frm,RooFit.Components("Bs2KstKst"),RooFit.Name("Bs2KstKst"),RooFit.LineColor(kRed))
model.plotOn(frm,RooFit.Components("Bd2KstKst"),RooFit.Name("Bd2KstKst"),RooFit.LineColor(kMagenta))
model.plotOn(frm,RooFit.Components("Bd2PhiKst"),RooFit.Name("Bd2PhiKst"),RooFit.LineColor(kMagenta+2))
#model.plotOn(frm,RooFit.Components("Bd2RhoKst"),RooFit.Name("Bd2RhoKst"),RooFit.LineColor(kBlue+2))
#model.plotOn(frm,RooFit.Components("Bs2PhiKst"),RooFit.Name("Bs2PhiKst"),RooFit.LineColor(kGreen+2))
model.plotOn(frm,RooFit.Components("CombBackg"),RooFit.Name("CombBackg"),RooFit.LineColor(kYellow))
model.plotOn(frm,RooFit.Components("PartRecon"),RooFit.Name("PartRecon"),RooFit.LineColor(kGreen))

#
#leg = TLegend(0.6,0.5,0.9,0.9)
leg = TLegend(0.65,0.6,0.9,0.9)

leg.AddEntry(frm.findObject("data"),"Data","ep")
leg.AddEntry(frm.findObject("model"),"Full model","l")
leg.AddEntry(frm.findObject("Bs2KstKst"),"B_{s} #rightarrow K^{+}#pi^{-}K^{-}#pi^{+}","l")
leg.AddEntry(frm.findObject("Bd2KstKst"),"B_{d} #rightarrow K^{+}#pi^{-}K^{-}#pi^{+}","l")
leg.AddEntry(frm.findObject("Bd2PhiKst"),"B_{d} #rightarrow #phi K^{+}#pi^{-}","l")
#leg.AddEntry(frm.findObject("Bd2RhoKst"),"B_{d} #rightarrow #rho K^{+}#pi^{-}","l")
#leg.AddEntry(frm.findObject("Bs2PhiKst"),"B_{s} #rightarrow #phi K^{+}#pi^{-}","l")
leg.AddEntry(frm.findObject("CombBackg"),"CombBackg","l")
leg.AddEntry(frm.findObject("PartRecon"),"PartRecon","l")

ca = TCanvas("ca","ca",900,1200)
ca.Divide(1,2)

pad1 = ca.cd(1)
frm.Draw()
leg.Draw()

pad2 = ca.cd(2)
pad2.SetLogy()
frm.Draw()
leg.Draw()

ca.Print("/home3/daniel.fernandez/bsksks/Plots/FinalPlotsTFM/4_body_mass_fit.pdf", "pdf")
ca.Print("/home3/daniel.fernandez/bsksks/Plots/FinalPlotsTFM/4_body_mass_fit.png", "png")
