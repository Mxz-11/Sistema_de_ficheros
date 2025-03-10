# Sistema de Gestión de Archivos y Procesos en C++

## Descripción
Este proyecto implementa diversas operaciones sobre el sistema de archivos y la gestión de procesos en C++. Incluye la creación, manipulación y eliminación de archivos y directorios, así como el control de procesos en ejecución.

## Funcionalidades

1. **Gestión de archivos y directorios**
   - Mostrar metadatos del sistema de ficheros.
   - Crear un directorio `películasNoVistas` en la raíz y un archivo dentro llamado `exmachina`.
   - Mostrar nuevamente los metadatos del sistema de archivos.
   - Crear otro directorio `peliculasVistas`.
   - Mover el archivo `exmachina` de `películasNoVistas` a `peliculasVistas` y volver a mostrar los metadatos.
   - Eliminar el directorio `peliculasVistas` y volver a mostrar los metadatos.

2. **Gestión de procesos**
   - Listar los procesos en ejecución.
   - Crear los archivos `Gattaca` y `Memento` en el directorio `tmp`, esperar un minuto y mostrar su contenido.
   - Iniciar un proceso `BorraTMPcada5Segundos`, volver a listar los procesos en ejecución, esperar 5 segundos y mostrar el contenido de `tmp`.
   - Matar el proceso `BorraTMPcada5Segundos` y volver a listar procesos.
   - Crear el archivo `EternalSunshineOfTheSpotlessMind` en `tmp`, esperar un minuto y mostrar el contenido de `tmp`.
   - Matar el proceso `Consola`.

3. **Implementaciones en C++**
   - Implementación de `BorrarDirectorio`.
   - Implementación de `matar proceso`.

## Requisitos
- Compilador de C++ (g++ recomendado)
- Sistema operativo basado en UNIX (Linux/macOS) o Windows con compatibilidad POSIX

## Compilación y Ejecución
Para compilar el programa, usa el siguiente comando en la terminal:

```bash
 g++ -o sistema_ficheros main.cpp
```

Para ejecutarlo:

```bash
 ./sistema_ficheros
```

## Notas
- El programa **no se ejecuta en Eclipse**, sino directamente desde la terminal.
- Se recomienda ejecutarlo con permisos adecuados si se manipulan directorios protegidos del sistema.
