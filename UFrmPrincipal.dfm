object FrmPrincipal: TFrmPrincipal
  Left = 0
  Top = 0
  Caption = 'FrmPrincipal'
  ClientHeight = 440
  ClientWidth = 620
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  FormStyle = fsMDIForm
  Menu = mnmPrincipal
  WindowState = wsMaximized
  TextHeight = 15
  object mnmPrincipal: TMainMenu
    Left = 280
    Top = 176
    object Ferramentas1: TMenuItem
      Caption = 'Ferramentas'
      object Calculadora1: TMenuItem
        Caption = 'Calculadora...'
        OnClick = EvAtivarCalculadoraOnClick
      end
      object N1: TMenuItem
        Caption = '-'
      end
      object Sair1: TMenuItem
        Caption = 'Sair'
        OnClick = EvEncerrarAplicacao
      end
    end
  end
end
