# Dibuja una pregunta dentro de un marco y devuelve lo que escribe el usuario
function Pedir-Dato {
    param([string]$texto)

    $linea = "+" + ("-" * ($texto.Length + 2)) + "+"
    Write-Host ""
    Write-Host $linea -ForegroundColor Cyan
    Write-Host "| $texto |" -ForegroundColor Cyan
    Write-Host $linea -ForegroundColor Cyan
    return Read-Host "  >>"
}

# Dibuja un titulo con marco
function Mostrar-Titulo {
    param([string]$texto)

    $linea = "=" * ($texto.Length + 4)
    Write-Host $linea -ForegroundColor Yellow
    Write-Host "  $texto" -ForegroundColor Yellow
    Write-Host $linea -ForegroundColor Yellow
}

Mostrar-Titulo "COMPILADOR RAPIDO C++"

# Pide el nombre del fichero principal
$fichero = Pedir-Dato "Introduce el nombre del fichero principal (con extension)"

# Comprueba que el fichero existe
if (-not (Test-Path $fichero)) {
    Write-Host "Error: el fichero '$fichero' no existe." -ForegroundColor Red
    exit 1
}

# Pregunta si hay ficheros .cpp que convertir a .o
$objetos = @()
$respuesta = Pedir-Dato "Hay ficheros .cpp que convertir a .o? (s/n)"

if ($respuesta -match '^(s|si|y|yes)$') {
    $entrada = Pedir-Dato "Introduce los .cpp separados por espacios o comas (ej: utils.cpp, math.cpp)"

    # Separa por comas o espacios, ignorando entradas vacias
    $lista = $entrada -split '[,\s]+' | Where-Object { $_ -ne "" }

    foreach ($cpp in $lista) {
        if (-not (Test-Path $cpp)) {
            Write-Host "Error: el fichero '$cpp' no existe." -ForegroundColor Red
            exit 1
        }

        # Nombre del .o: mismo nombre que el .cpp pero con extension .o
        $objeto = [System.IO.Path]::ChangeExtension($cpp, ".o")

        Write-Host "Generando '$objeto' a partir de '$cpp'..." -ForegroundColor Gray
        g++ -c $cpp -o $objeto

        if ($LASTEXITCODE -ne 0) {
            Write-Host "Error al compilar '$cpp' a .o." -ForegroundColor Red
            exit 1
        }

        $objetos += $objeto
    }
}

# Compila el fichero principal con g++ (incluyendo los .o generados)
Write-Host ""
if ($objetos.Count -gt 0) {
    Write-Host "Compilando '$fichero' con: $($objetos -join ', ')..." -ForegroundColor Gray
} else {
    Write-Host "Compilando '$fichero'..." -ForegroundColor Gray
}
g++ $fichero @objetos -o ejecutable

# Comprueba si la compilacion fue exitosa
if ($LASTEXITCODE -eq 0) {
    Write-Host "Compilacion exitosa. Ejecutable generado: ejecutable.exe" -ForegroundColor Blue
    Write-Host ""
    Mostrar-Titulo "EJECUTANDO PROGRAMA"

    # Ejecuta el fichero solo si se ha compilado bien
    ./ejecutable.exe
} else {
    Write-Host "Error durante la compilacion." -ForegroundColor Red
    exit 1
}