**Hola!**

Acero Cantor Gabriela ; 
Buitrago Forero Daniel Andres

Pensamiento algorítimico, 26/08/2025

Guía de Compilación Rápida 
**Requisitos Previos**
-Tener instalado Git
-Tener instalado un compilador C++:
        Linux/macOS: g++
        Windows: MinGW o usar g++ desde WSL o MSYS2.
        Tener un archivo fuente, por ejemplo: main.cpp

Linux: 
# Clonar el repositorio
git clone https://github.com/buitraaa/taller-buitrago-acero.git
cd taller-buitrago-acero/src
# Compilar
g++ -std=c++17 -o "programa" main.cpp
# Ejecutar
./"programa"

MacOS:
# Clonar el repositorio
git clone https://github.com/buitraaa/taller-buitrago-acero.git
cd taller-buitrago-acero/src
# Compilar
g++ -std=c++17 -o "programa" main.cpp
# Ejecutar
./"programa"

Windows:
**Abrir terminal de MinGW**
git clone https://github.com/buitraaa/taller-buitrago-acero.git
cd taller-buitrago-acero/src
**Compilar**
g++ -std=c++17 -o "programa".exe main.cpp
**Ejecutar**
programa.exe


**Estructura**

```taller-buitrago-acero/
│
├── README.md
├── docs/
│ ├── punto1_cajareg.pdf
│ ├── punto2_descuentocumple.pdf
│ ├── punto3_caos_descuentos.pdf
│ ├── punto4_atm.pdf
│ ├── punto5_app.pdf
│ └── punto6_horarios.pdf
│
└── src/
├── punto1_cajareg.cpp
├── punto2_descuentocumple.cpp
├── punto3_caos_descuentos.cpp
├── punto4_atm.cpp
├── punto5_app.cpp
└── punto6_horarios.cpp

