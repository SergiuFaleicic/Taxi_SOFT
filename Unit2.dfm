object DataModule2: TDataModule2
  Height = 648
  Width = 1166
  PixelsPerInch = 144
  object FDConnection1: TFDConnection
    Params.Strings = (
      'DataSource=BDTAXI'
      'DriverID=ODBC')
    Connected = True
    LoginPrompt = False
    Left = 48
    Top = 16
  end
  object FDQuery1: TFDQuery
    Connection = FDConnection1
    SQL.Strings = (
      '  select * FROM OPERATOR')
    Left = 152
    Top = 16
  end
  object DataSource1: TDataSource
    DataSet = FDQuery1
    Left = 216
    Top = 16
  end
  object FDQuery2: TFDQuery
    Connection = FDConnection1
    SQL.Strings = (
      'SELECT * FROM STRADA')
    Left = 144
    Top = 104
  end
  object DataSource2: TDataSource
    DataSet = FDQuery2
    Left = 216
    Top = 104
  end
end
