# Pide el nombre del fichero
$fichero = Read-Host "Introduce el nombre del fichero (con extensión)"

# Comprueba que el fichero existe
if (-not (Test-Path $fichero)) {
    Write-Host "Error: el fichero '$fichero' no existe." -ForegroundColor Red
    exit 1
}

# Compila el fichero con g++
Write-Host "Compilando '$fichero'..."
g++ $fichero -o ejecutable

# Comprueba si la compilación fue exitosa
if ($LASTEXITCODE -eq 0) {
    Write-Host "Compilación exitosa. Ejecutable generado: ejecutable.exe" -ForegroundColor Blue
} else {
    Write-Host "Error durante la compilación." -ForegroundColor Red
}

# Ejecuta el fichero
./ejecutable.exe