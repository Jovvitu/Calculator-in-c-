//---------------------------------------------------------------------------

#ifndef UFrmPrincipalH
#define UFrmPrincipalH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TFrmPrincipal : public TForm
{
__published:	// IDE-managed Components
	TMainMenu *mnmPrincipal;
	TMenuItem *Ferramentas1;
	TMenuItem *Calculadora1;
	TMenuItem *N1;
	TMenuItem *Sair1;
	void __fastcall EvEncerrarAplicacao(TObject *Sender);
	void __fastcall EvAtivarCalculadoraOnClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFrmPrincipal(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrmPrincipal *FrmPrincipal;
//---------------------------------------------------------------------------
#endif
