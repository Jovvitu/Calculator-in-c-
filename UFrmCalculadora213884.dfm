object FrmCalculadora: TFrmCalculadora
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'FrmCalculadora'
  ClientHeight = 326
  ClientWidth = 385
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  FormStyle = fsMDIChild
  Position = poMainFormCenter
  Visible = True
  OnClose = _EvFecharFormularioOnClose
  TextHeight = 15
  object Label1: TLabel
    Left = 26
    Top = 8
    Width = 74
    Height = 15
    Caption = '&Primeiro valor'
    FocusControl = edtOperandoUm
  end
  object Label2: TLabel
    Left = 28
    Top = 72
    Width = 74
    Height = 15
    Caption = '&Segundo valor'
    FocusControl = edtOperandoDois
  end
  object edtOperandoUm: TEdit
    Left = 26
    Top = 29
    Width = 121
    Height = 23
    TabOrder = 0
  end
  object edtOperandoDois: TEdit
    Left = 26
    Top = 104
    Width = 121
    Height = 23
    TabOrder = 1
  end
  object rdgOperacao: TRadioGroup
    Left = 153
    Top = 8
    Width = 185
    Height = 119
    Caption = '&Opera'#231#227'o::.'
    ItemIndex = 0
    Items.Strings = (
      '+   Somar'
      '-    Subtrair'
      '*   Multiplicar'
      '/   Dividir')
    TabOrder = 2
  end
  object GroupBox1: TGroupBox
    Left = 26
    Top = 141
    Width = 327
    Height = 105
    Caption = 'Resusltado::.'
    TabOrder = 3
    object pnlResultado: TPanel
      Left = 2
      Top = 17
      Width = 323
      Height = 86
      Align = alClient
      TabOrder = 0
      ExplicitLeft = 104
      ExplicitTop = 32
      ExplicitWidth = 185
      ExplicitHeight = 41
    end
  end
  object ToolBar1: TToolBar
    Left = 0
    Top = 297
    Width = 385
    Height = 29
    Align = alBottom
    ButtonHeight = 23
    ButtonWidth = 46
    Caption = 'ToolBar1'
    ShowCaptions = True
    TabOrder = 4
    Wrapable = False
    object btnCalcular: TToolButton
      Left = 0
      Top = 0
      Caption = 'Calcule'
      ImageIndex = 0
      OnClick = EvCalcularOnClick
    end
    object btnLimpar: TToolButton
      Left = 46
      Top = 0
      Caption = 'Limpe'
      ImageIndex = 1
      OnClick = EvLimparOnClick
    end
    object ToolButton3: TToolButton
      Left = 92
      Top = 0
      Width = 213
      Caption = 'ToolButton3'
      ImageIndex = 2
      Style = tbsSeparator
    end
    object btnSair: TToolButton
      Left = 305
      Top = 0
      Caption = 'Sair'
      ImageIndex = 2
      OnClick = EvFecharFormularioOnClick
    end
  end
end
