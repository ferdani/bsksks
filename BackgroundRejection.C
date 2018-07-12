#include <TH1F.h>

//Instrucciones:
//Correr root dentro de la carpeta de LevelX como:
//.X /home3/daniel.fernandez/bsksks/BackgroundRejection.C 

void BackgroundRejection();

void BackgroundRejection(){
        TFile *data1 = new TFile("Histos_DTT_2016_Reco16Strip28_Down_BHADRON.root");
        //f->ls();
        TH1F * h1 = (TH1F*)data1->Get("H_InvMass_Data");
        //h1->Draw();
        //Long64_t entries1 = h1->GetEntries();

        TFile *data2 = new TFile("Histos_DTT_2016_Reco16Strip28_Up_BHADRON.root");
        TH1F * h2 = (TH1F*)data2->Get("H_InvMass_Data");
        //h2->Draw();
        TFile* f = new TFile ("dummy.root", "recreate");

        TH1F *H1 = (TH1F*) h1->Clone();
        H1->SetName("H1");
        H1->Add(h2);
        H1->Draw();

        int n = 0;
        for (auto i = 0; i < H1->GetNbinsX(); ++i ){

                auto d = H1->GetBinCenter(i + 1);

                if ( d > 5200 && d < 5500 )
                        continue;

                n += H1->GetBinContent(i + 1);
        }

	cout << "Backgroud counts in the window 5200 > Mkpikpi > 5500 : " << n << endl;
};
