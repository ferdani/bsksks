#include <TH1F.h>


void BackgroundRejection();

void BackgroundRejection(){
	TFile *data1 = new TFile(“Histos_DTT_2016_Reco16Strip28_Down_BHADRON.root”);
	#f->ls();

	TH1F * h1 = (TH1F*)data1->Get(“H_InvMass_Data”);
	#h1->Draw();

	TFile *data2 = new TFile(“Histos_DTT_2016_Reco16Strip28_Up_BHADRON.root”);
	TH1F * h2 = (TH1F*)data2->Get(“H_InvMass_Data”);

	TH1F *h3 = (TH1F*)h1->Add(h2);	
	h3->Draw();
	Long64_t entries = h3->GetEntries("Mkpikpi >> 5500.0 && Mkpikpi << 5200.00")
	cout<< entries << endl;
}
