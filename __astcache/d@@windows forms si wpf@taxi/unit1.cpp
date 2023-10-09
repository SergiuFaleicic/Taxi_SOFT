//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int MARCA_ID, MODEL_ID, TIP_ID, CULOAREA_ID, CAROSERIE_ID, AUTOMOBIL_ID, OPERATOR_ID, STRADA_ID;
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

	   DataModule2->FDQuery7->Close();
	   DataModule2->FDQuery7->Open();

	   TabSheet1->TabVisible = false; // autentificare
       TabSheet2->TabVisible = true;

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

	 int w2 = Panel10->Width;
	 int a2 = DBGrid3->Columns->Items[0]->Width +
			 DBGrid3->Columns->Items[1]->Width;

	 DBGrid3->Columns->Items[2]->Width = w2-a2-40;
	 DBGrid4->Columns->Items[2]->Width = w2-a2-40;
	 DBGrid5->Columns->Items[2]->Width = w2-a2-40;

}
//---------------------------------------------------------------------------
void __fastcall TForm1::SpeedButton4Click(TObject *Sender)
{
    TabSheet11->TabVisible=false;
	TabSheet2->TabVisible=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::SpeedButton20Click(TObject *Sender)
{
	 DataModule2->FDQuery5->Close();
	 DataModule2->FDQuery5->Open();

	 TabSheet5->TabVisible=true;
	 TabSheet3->TabVisible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton11Click(TObject *Sender)
{
	Edit3->Text = DataModule2->FDQuery5->FieldByName("DENUMIRE")->AsString;
	Edit9->Text = DataModule2->FDQuery5->FieldByName("DENUMIRE")->AsString;

	MARCA_ID = DataModule2->FDQuery5->FieldByName("MARCA_ID")->AsInteger;


	Edit4->Clear();
    Edit10->Clear();

	 TabSheet5->TabVisible=false;
	 TabSheet3->TabVisible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton21Click(TObject *Sender)
{
	 DataModule2->FDQuery6->Close();
	 DataModule2->FDQuery6->ParamByName("MARCA_ID")->AsInteger = MARCA_ID;
	 DataModule2->FDQuery6->Open();

	 TabSheet4->TabVisible=true;
	 TabSheet3->TabVisible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton13Click(TObject *Sender)
{
	Edit4->Text = DataModule2->FDQuery6->FieldByName("DENUMIRE")->AsString;
	Edit10->Text = DataModule2->FDQuery6->FieldByName("DENUMIRE")->AsString;

	MODEL_ID = DataModule2->FDQuery6->FieldByName("MODEL_ID")->AsInteger;

	 TabSheet4->TabVisible=false;
	 TabSheet3->TabVisible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton14Click(TObject *Sender)
{
	 TabSheet4->TabVisible=false;
	 TabSheet3->TabVisible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton22Click(TObject *Sender)
{
	 DataModule2->FDQuery3->Close();

	 DataModule2->FDQuery3->Open();

	 TabSheet7->TabVisible=true;
	 TabSheet3->TabVisible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton7Click(TObject *Sender)
{
	Edit5->Text = DataModule2->FDQuery3->FieldByName("TIP_CAROSERIE")->AsString;
	Edit11->Text = DataModule2->FDQuery3->FieldByName("TIP_CAROSERIE")->AsString;

	CAROSERIE_ID = DataModule2->FDQuery3->FieldByName("CAROSERIE_ID")->AsInteger;

	 TabSheet7->TabVisible=false;
	 TabSheet3->TabVisible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton8Click(TObject *Sender)
{
	 TabSheet7->TabVisible=false;
	 TabSheet3->TabVisible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton23Click(TObject *Sender)
{
	 DataModule2->FDQuery4->Close();

	 DataModule2->FDQuery4->Open();

	 TabSheet6->TabVisible=true;
	 TabSheet3->TabVisible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton9Click(TObject *Sender)
{
	Edit6->Text = DataModule2->FDQuery4->FieldByName("NUME_CULOARE")->AsString;
	Edit12->Text = DataModule2->FDQuery4->FieldByName("NUME_CULOARE")->AsString;

	CULOAREA_ID = DataModule2->FDQuery4->FieldByName("CULOARE_ID")->AsInteger;

	 TabSheet6->TabVisible=false;
	 TabSheet3->TabVisible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton10Click(TObject *Sender)
{
	 TabSheet6->TabVisible=false;
	 TabSheet3->TabVisible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton24Click(TObject *Sender)
{
	if ((Edit3->Text!="")&&(Edit4->Text!="")&&(Edit5->Text!="")&&(Edit6->Text!="")&&(Edit7->Text!="")&&(Edit8->Text!="")) {

	   DataModule2->INSAUTO->Close();
		 DataModule2->INSAUTO->ParamByName("MODEL_ID")->AsInteger=  MODEL_ID;
		  DataModule2->INSAUTO->ParamByName("CULOARE_ID")->AsInteger=   CULOAREA_ID ;
		   DataModule2->INSAUTO->ParamByName("CAROSERIE_ID")->AsInteger=  CAROSERIE_ID;
			DataModule2->INSAUTO->ParamByName("TIP_ID")->AsInteger=  1; //  TIP_ID;
			 DataModule2->INSAUTO->ParamByName("NR_AUTO")->AsString=  Edit8->Text;
			  DataModule2->INSAUTO->ParamByName("MOTOR")->AsString=   Edit7->Text;
			   DataModule2->INSAUTO->ParamByName("COMBUSTIBIL")->AsString=  ComboBox1->Text;

			 DataModule2->INSAUTO->ExecSQL();

			  DataModule2->FDQuery7->Close();
			  DataModule2->FDQuery7->Open();

	  Edit3->Text="";
	  Edit4->Text="";
	  Edit5->Text="";
	  Edit6->Text="";
	  Edit7->Text="";
	  Edit8->Text="";
	  ComboBox1->Text="";

	  TabSheet14->TabVisible=false;
	  TabSheet13->TabVisible=true;

			MessageDlg("Inserare cu succes", mtInformation, TMsgDlgButtons()<< mbOK, 0);


	}
	else
	{
		ShowMessage("Nu sunt introduse toate cimpurile !");
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton16Click(TObject *Sender)
{
	if (!DataModule2->FDQuery7->IsEmpty()) {

	Edit9->Text = DataModule2->FDQuery7->FieldByName("denumire_1")->AsString;
	Edit10->Text = DataModule2->FDQuery7->FieldByName("denumire")->AsString;
	Edit11->Text = DataModule2->FDQuery7->FieldByName("tip_caroserie")->AsString;
	Edit12->Text = DataModule2->FDQuery7->FieldByName("nume_culoare")->AsString;
	Edit13->Text = DataModule2->FDQuery7->FieldByName("motor")->AsString;
	ComboBox2->Text = DataModule2->FDQuery7->FieldByName("combustibil")->AsString;
	Edit14->Text = DataModule2->FDQuery7->FieldByName("nr_auto")->AsString;

	MARCA_ID =  DataModule2->FDQuery7->FieldByName("MARCA_ID")->AsInteger;
	MODEL_ID =  DataModule2->FDQuery7->FieldByName("MODEL_ID")->AsInteger;
	CULOAREA_ID =  DataModule2->FDQuery7->FieldByName("CULOARE_ID")->AsInteger;
	CAROSERIE_ID =  DataModule2->FDQuery7->FieldByName("CAROSERIE_ID")->AsInteger;



	  TabSheet15->TabVisible=true;
	  TabSheet13->TabVisible=false;
	  TabSheet14->TabVisible=false;
	}
	else
	{
		MessageDlg("Nu sunt date de editat", mtError, TMsgDlgButtons()<< mbYes, 0);
    }


}
//---------------------------------------------------------------------------


void __fastcall TForm1::Edit3KeyPress(TObject *Sender, System::WideChar &Key)
{
      Key = 0;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton30Click(TObject *Sender)
{
if ((Edit9->Text!="")&&(Edit10->Text!="")&&(Edit11->Text!="")&&(Edit12->Text!="")&&(Edit13->Text!="")&&(Edit14->Text!="")) {

	   DataModule2->UPDAUTO->Close();
		 DataModule2->UPDAUTO->ParamByName("MODEL_ID")->AsInteger=  MODEL_ID;
		  DataModule2->UPDAUTO->ParamByName("CULOARE_ID")->AsInteger=   CULOAREA_ID ;
		   DataModule2->UPDAUTO->ParamByName("CAROSERIE_ID")->AsInteger=  CAROSERIE_ID;
			DataModule2->UPDAUTO->ParamByName("AUTOMOBIL_ID")->AsInteger = DataModule2->FDQuery7->FieldByName("AUTOMOBIL_ID")->AsInteger;
			 DataModule2->UPDAUTO->ParamByName("NR_AUTO")->AsString=  Edit14->Text;
			  DataModule2->UPDAUTO->ParamByName("MOTOR")->AsString=   Edit13->Text;
			   DataModule2->UPDAUTO->ParamByName("COMBUSTIBIL")->AsString=  ComboBox2->Text;

			 DataModule2->UPDAUTO->ExecSQL();

			  DataModule2->FDQuery7->Close();
			  DataModule2->FDQuery7->Open();

	  Edit9->Text="";
	  Edit10->Text="";
	  Edit11->Text="";
	  Edit12->Text="";
	  Edit13->Text="";
	  Edit14->Text="";
	  ComboBox2->Text="";

	  TabSheet15->TabVisible=false;    //inserare
	  TabSheet13->TabVisible=true;     //main

			MessageDlg("Editare cu succes", mtInformation, TMsgDlgButtons()<< mbOK, 0);


	}
	else
	{
		ShowMessage("Nu sunt introduse toate cimpurile !");
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton31Click(TObject *Sender)
{
	 TabSheet15->TabVisible=false;  //EDITARE
	  TabSheet13->TabVisible=true;     //MAIN
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton25Click(TObject *Sender)
{
	  Edit3->Text="";
	  Edit4->Text="";
	  Edit5->Text="";
	  Edit6->Text="";
	  Edit7->Text="";
	  Edit8->Text="";
	  ComboBox1->Text="";

	  TabSheet14->TabVisible=false;  //inserare
	  TabSheet13->TabVisible=true;    // main

}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton15Click(TObject *Sender)
{

	  TabSheet15->TabVisible=false;
	  TabSheet13->TabVisible=false;
	  TabSheet14->TabVisible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton17Click(TObject *Sender)
{
	try
	{
	   if (!DataModule2->FDQuery7->IsEmpty()) {

		  if (MessageDlg(" Eliminati informatia ? ", mtConfirmation, TMsgDlgButtons() << mbYes << mbNo,0) == mrYes)
		  {
				DataModule2->DELAUTO->Close();
				DataModule2->DELAUTO->ParamByName("AUTOMOBIL_ID")->AsInteger= DataModule2->FDQuery7->FieldByName("AUTOMOBIL_ID")->AsInteger;
				DataModule2->DELAUTO->ExecSQL();

				DataModule2->FDQuery7->Close();
				DataModule2->FDQuery7->Open();

				MessageDlg(" Eliminare cu succes ", mtConfirmation, TMsgDlgButtons() << mbYes,0);
		  }

	   }
	   else
	   {
		   ShowMessage("Nu sunt data de eliminat");
       }
	}
	catch(...)
	{
	   ShowMessage(" Ceva nu a mers bine. Va rugam apelati adminul !  ");
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TabSheet3Show(TObject *Sender)
{
	   //	TabSheet15->TabVisible=false;
	 // TabSheet14->TabVisible=false;

	//  PageControl2->ActivePageIndex=0;
}
//---------------------------------------------------------------------------




// LA LOCALITATE : INREGISTRARE , EDITARE , DELETE

void __fastcall TForm1::SpeedButton39Click(TObject *Sender)
{

			  DataModule2->FDQuery7->Close();
			  DataModule2->FDQuery7->Open();

		TabSheet2->TabVisible=false;
		TabSheet3->TabVisible=true;



}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton18Click(TObject *Sender)
{
	AUTOMOBIL_ID =  DataModule2->FDQuery7->FieldByName("AUTOMOBIL_ID")->AsInteger;

	Memo1->Lines->Add( DataModule2->FDQuery7->FieldByName("DENUMIRE_1")->AsString);
	Memo1->Lines->Add( DataModule2->FDQuery7->FieldByName("DENUMIRE")->AsString);
	Memo1->Lines->Add( DataModule2->FDQuery7->FieldByName("NR_AUTO")->AsString);

	Memo2->Lines->Add( DataModule2->FDQuery7->FieldByName("DENUMIRE_1")->AsString);
	Memo2->Lines->Add( DataModule2->FDQuery7->FieldByName("DENUMIRE")->AsString);
	Memo2->Lines->Add( DataModule2->FDQuery7->FieldByName("NR_AUTO")->AsString);

	TabSheet3->TabVisible=false;
		TabSheet2->TabVisible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton19Click(TObject *Sender)
{
		TabSheet3->TabVisible=false;
		TabSheet2->TabVisible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton40Click(TObject *Sender)
{
   DataModule2->FDQuery1->Close();
   DataModule2->FDQuery1->Open();

	TabSheet2->TabVisible=false;
	TabSheet11->TabVisible=true;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton3Click(TObject *Sender)
{
	OPERATOR_ID =  DataModule2->FDQuery1->FieldByName("OPERATOR_ID")->AsInteger;

		Edit16->Text= DataModule2->FDQuery1->FieldByName("NUME")->AsString+" "+DataModule2->FDQuery1->FieldByName("PRENUME")->AsString;
		 Edit25->Text= DataModule2->FDQuery1->FieldByName("NUME")->AsString+" "+DataModule2->FDQuery1->FieldByName("PRENUME")->AsString;

	TabSheet11->TabVisible=false;
	TabSheet2->TabVisible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit15Change(TObject *Sender)
{

	if (Edit15->Text.Length()>2) {



	DataModule2->FDQuery2->Close();

	DataModule2->FDQuery2->SQL->Clear();
	DataModule2->FDQuery2->SQL->Add(" SELECT * FROM RAION R INNER JOIN LOCALITATEA L ON R.RAION_ID=L.RAION_ID ");
	DataModule2->FDQuery2->SQL->Add(" INNER JOIN STRADA S ON S.LOCALITATE_ID=L.LOCALITATE_ID ");


	if( RadioButton1->Checked)DataModule2->FDQuery2->SQL->Add (" where raion like '%"+Edit15->Text+"%'");
	if( RadioButton2->Checked)DataModule2->FDQuery2->SQL->Add (" where L.denumire like '%"+Edit15->Text+"%'");
	if( RadioButton3->Checked)DataModule2->FDQuery2->SQL->Add (" where S.denumire like '%"+Edit15->Text+"%'");

		DataModule2->FDQuery2->Open();
		}
		else
		{
			DataModule2->FDQuery2->Close();
        }

}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton5Click(TObject *Sender)
{

	try {
	if( ( DataModule2->FDQuery2->Active==true ) && ( !DataModule2->FDQuery2->IsEmpty() ) )
	{

	Edit17->Text= DataModule2->FDQuery2->FieldByName("raion")->AsString;
	Edit18->Text= DataModule2->FDQuery2->FieldByName("denumire")->AsString;
	Edit19->Text= DataModule2->FDQuery2->FieldByName("denumire_1")->AsString;

	Edit26->Text= DataModule2->FDQuery2->FieldByName("raion")->AsString;
	Edit27->Text= DataModule2->FDQuery2->FieldByName("denumire")->AsString;
	Edit28->Text= DataModule2->FDQuery2->FieldByName("denumire_1")->AsString;

	STRADA_ID = DataModule2->FDQuery2->FieldByName("STRADA_ID")->AsInteger;

	TabSheet10->TabVisible=false;
	TabSheet2->TabVisible=true;
	 }
	 else
	 {
		 ShowMessage(" Nu aveti datele de selectat ");
     }
	} catch (...) {

	ShowMessage(" Ups... Ceva nu a mers bine !!! ");
	}

}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton6Click(TObject *Sender)
{
TabSheet10->TabVisible=false;
	TabSheet2->TabVisible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton37Click(TObject *Sender)
{

	DataModule2->FDQuery2->Close();

	RadioButton3->Checked=true;

	Edit15->Clear();

	TabSheet10->TabVisible=true;
	TabSheet2->TabVisible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioButton1Click(TObject *Sender)
{
if(RadioButton1->Checked==true)
{
	  Edit15->Clear();
	  Edit15->SetFocus();

}

}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioButton2Click(TObject *Sender)
{
if(RadioButton2->Checked==true)
{
	  Edit15->Clear();
	  Edit15->SetFocus();

}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioButton3Click(TObject *Sender)
{
if(RadioButton3->Checked==true)
{
	  Edit15->Clear();
	  Edit15->SetFocus();

}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton43Click(TObject *Sender)
{
	  DataModule2->INSCOMANDA->Close();
		 DataModule2->INSCOMANDA->ParamByName("AUTOMOBIL_ID")->AsInteger=  AUTOMOBIL_ID;
		  DataModule2->INSCOMANDA->ParamByName("LOCALITATE_ID")->AsInteger=   STRADA_ID ;
		   DataModule2->INSCOMANDA->ParamByName("OPERATOR_ID")->AsInteger=  OPERATOR_ID;
			DataModule2->INSCOMANDA->ParamByName("NOTA")->AsString = Edit23->Text;
			 DataModule2->INSCOMANDA->ParamByName("ADRESA_DESTINATIE")->AsString=  Edit17->Text+" "+Edit18->Text+" "+Edit19->Text;
			  DataModule2->INSCOMANDA->ParamByName("PRET")->AsFloat= StrToFloat(  Edit21->Text);
			   DataModule2->INSCOMANDA->ParamByName("KM")->AsFloat= StrToFloat(  Edit20->Text);
				 DataModule2->INSCOMANDA->ParamByName("COST_KM")->AsFloat= StrToFloat(  Edit22->Text);

                    DataModule2->INSCOMANDA->ExecSQL();
}
//---------------------------------------------------------------------------

