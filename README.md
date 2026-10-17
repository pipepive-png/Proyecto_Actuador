# Proyecto Actuador

## Descripción
Programa básico en C++ para gestionar actuadores. Permite encenderlos, apagarlos y ajustar su potencia entre 0 y 100.

## Requisitos
- CMake.
- Un compilador de C++ compatible con C++11.
- Doxygen para generar la documentación.

## Estructura del proyecto
- `include/Actuador.h`: declaración de la clase Actuador.
- `src/Actuador.cpp`: implementación de los métodos.
- `src/main.cpp`: programa principal.
- `CMakeLists.txt`: configuración de compilación.
- `Doxyfile`: configuración de Doxygen.
- `docs/html/`: documentación HTML generada.

## Compilación
Desde la carpeta principal del proyecto, ejecutar:

```powershell
cmake -S . -B build
cmake --build build
```

## Ejecución en Windows
Con el generador de Visual Studio:

```powershell
.\build\Debug\Proyecto_Actuador.exe
```

El programa solicita el nombre y la potencia de dos actuadores y muestra sus estados.

## Documentación
Con Doxygen instalado, ejecutar:

```powershell
doxygen Doxyfile
```

La documentación HTML se genera en `docs/html/`. Para consultarla, abrir `docs/html/index.html` en un navegador.