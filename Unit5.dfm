object Form5: TForm5
  Left = 0
  Top = 0
  Caption = 'Form5'
  ClientHeight = 442
  ClientWidth = 628
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Edit1: TEdit
    Left = 72
    Top = 56
    Width = 121
    Height = 23
    TabOrder = 0
    Text = 'Edit1'
  end
  object Button1: TButton
    Left = 456
    Top = 55
    Width = 75
    Height = 25
    Caption = 'Button1'
    TabOrder = 1
    OnClick = Button1Click
  end
  object Edit2: TEdit
    Left = 240
    Top = 56
    Width = 121
    Height = 23
    TabOrder = 2
    Text = 'Edit2'
  end
  object OpenTextFileDialog1: TOpenTextFileDialog
    Left = 304
    Top = 224
  end
end
