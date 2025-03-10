#ifndef CONSOLA_H
#define CONSOLA_H

#include "SistemaArchivos.h"
#include "Archivo.h"
#include "Directorio.h"
#include <iostream>
#include <fstream> 

class Consola
{
private: 
    string ruta;
public:
    Consola(string ruta);
    bool crearArchivo(string nombreArchivo);
    void mostrarMetadato(Metadato met);
    void moverArchivo(Archivo archivo);
    void crearDir(Directorio r);
    void eliminarDir();
    void eliminarArchivo();
    void mostrarDir();
    void ejecutarProc();
    void matarProc();
    void analizarPath(string path);
};
#endif