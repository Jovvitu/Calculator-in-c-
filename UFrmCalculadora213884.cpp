//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UFrmCalculadora213884.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFrmCalculadora *FrmCalculadora;
//---------------------------------------------------------------------------
__fastcall TFrmCalculadora::TFrmCalculadora(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFrmCalculadora::_EvFecharFormularioOnClose(TObject *Sender, TCloseAction &Action)
{
 Action = caFree;
}
//---------------------------------------------------------------------------
void __fastcall TFrmCalculadora::EvCalcularOnClick(TObject *Sender)
{
   objCalculadora.SetOperandoUm(StrToFloatDef(edtOperandoUm->Text, 1));
   objCalculadora.SetOPerandoDois(StrToFloatDef(edtOperandoDois->Text, 1));

	switch(rdgOperacao->ItemIndex)
	{
		case 0 : pnlResultado->Caption = objCalculadora.Some();
				break;
		case 1 : pnlResultado->Caption = objCalculadora.Subtraia();
				break;
		case 2 : pnlResultado->Caption = objCalculadora.Multiplique();
				break;
		case 3 : pnlResultado->Caption = objCalculadora.Divida();
                break;

    }
}
//---------------------------------------------------------------------------
void __fastcall TFrmCalculadora::EvLimparOnClick(TObject *Sender)
{
   edtOperandoUm->Clear();
   edtOperandoDois->Clear();

   pnlResultado->Caption ="";

   rdgOperacao->ItemIndex = 0;

   objCalculadora.SetOperandoUm(1);
   objCalculadora.SetOPerandoDois(1);

}
//---------------------------------------------------------------------------
void __fastcall TFrmCalculadora::EvFecharFormularioOnClick(TObject *Sender)
{
   Close();
}
//---------------------------------------------------------------------------
