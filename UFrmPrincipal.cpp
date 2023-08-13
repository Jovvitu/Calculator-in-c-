//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UFrmPrincipal.h"
#include "UFrmCalculadora213884.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFrmPrincipal *FrmPrincipal;
//---------------------------------------------------------------------------
__fastcall TFrmPrincipal::TFrmPrincipal(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFrmPrincipal::EvEncerrarAplicacao(TObject *Sender)
{
  Close();
}
//---------------------------------------------------------------------------


void __fastcall TFrmPrincipal::EvAtivarCalculadoraOnClick(TObject *Sender)
{
	new TFrmCalculadora(this);

}
//---------------------------------------------------------------------------

