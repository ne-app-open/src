$ThisPath = $PSCommandPath
$ThisDir = Split-Path -Parent $ThisPath
$FileList = Get-ChildItem -Path $ThisDir -Recurse -File |
    Where-Object { $_.Extension -match '\.(cpp|cc|c|h|inl)$' }

clang-format --verbose -i --style=file ($FileList.FullName)