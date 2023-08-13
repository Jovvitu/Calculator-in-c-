//---------------------------------------------------------------------------

#ifndef UFrmCalculadora213884H
#define UFrmCalculadora213884H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ToolWin.hpp>
#include "UCalculadora.h"
//---------------------------------------------------------------------------
class TFrmCalculadora : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TEdit *edtOperandoUm;
	TLabel *Label2;
	TEdit *edtOperandoDois;
	TRadioGroup *rdgOperacao;
	TGroupBox *GroupBox1;
	TPanel *pnlResultado;
	TToolBar *ToolBar1;
	TToolButton *btnCalcular;
	TToolButton *btnLimpar;
	TToolButton *ToolButton3;
	TToolButton *btnSair;
	void __fastcall _EvFecharFormularioOnClose(TObject *Sender, TCloseAction &Action);
	void __fastcall EvCalcularOnClick(TObject *Sender);
	void __fastcall EvLimparOnClick(TObject *Sender);
	void __fastcall EvFecharFormularioOnClick(TObject *Sender);
private:	// User declarations
        Calculadora objCalculadora;
public:		// User declarations
	__fastcall TFrmCalculadora(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrmCalculadora *FrmCalculadora;
//---------------------------------------------------------------------------
#endif
