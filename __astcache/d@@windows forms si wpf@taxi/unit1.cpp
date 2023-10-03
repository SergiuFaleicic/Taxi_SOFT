//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::SpeedButton1Click(TObject *Sender)
{
	if( (Edit1->Text == "1" ) && ( Edit2->Text == "1" ) )
	{

	   DataModule2->FDQuery1->Close();
	   DataModule2->FDQuery1->Open();

	   DataModule2->FDQuery2->Close();
	   DataModule2->FDQuery2->Open();

	   TabSheet1->TabVisible = false; // autentificare
       TabSheet10->TabVisible = true;

	}
	else
	{
		Edit2->Clear();
		ShowMessage(" Autentificare esuata !!! ");
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormShow(TObject *Sender)
{
	  TabSheet2->TabVisible = false;
	  TabSheet3->TabVisible = false;
	  TabSheet4->TabVisible = false;
	  TabSheet5->TabVisible = false;
	  TabSheet6->TabVisible = false;
	  TabSheet7->TabVisible = false;
	  TabSheet8->TabVisible = false;
	  TabSheet9->TabVisible = false;
	  TabSheet10->TabVisible = false;
	  TabSheet11->TabVisible = false;
	  TabSheet12->TabVisible = false;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Panel6Resize(TObject *Sender)
{
	 int w = Panel6->Width;
	 int a = DBGrid1->Columns->Items[0]->Width +
			 DBGrid1->Columns->Items[1]->Width +
			 DBGrid1->Columns->Items[2]->Width;

	  DBGrid1->Columns->Items[3]->Width = w-a-40;

	 int w1 = Panel8->Width;
	 int a1 = DBGrid2->Columns->Items[0]->Width +
			 DBGrid2->Columns->Items[1]->Width;

	 DBGrid2->Columns->Items[2]->Width = w1-a1-40;


}
//---------------------------------------------------------------------------
void __fastcall TForm1::SpeedButton4Click(TObject *Sender)
{
       DataModule2->FDQuery1->Close();
	   DataModule2->FDQuery1->Open();
}
//---------------------------------------------------------------------------
