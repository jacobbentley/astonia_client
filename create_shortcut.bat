powershell "$s=(New-Object -COM WScript.Shell).CreateShortcut('%userprofile%\Desktop\Alpha Client.lnk');$s.TargetPath='%~dp0\bin\moac.exe';$s.WorkingDirectory='%~dp0\';$s.Save()"