#ifndef DIRECTORIO_H
#define DIRECTORIO_H

#include <iostream>
#include <cstdio>
#include <filesystem>

using namespace std;

class Directorio
{
private:
    string path;      // Ruta
    string *contents; // Contenidos del Dir, Vector contenedor de paths.

public:
    Directorio(string path = "");
    string getPath() { return this->path; }      // Funcion sencilla que devuelve el path en sistema de este directorio
    string *getContents();                       // Devuelve vector conteniendo los path de contenidos
    void anyadirArchivo(string P);               // Anyade un archivo al vector de contenidos, para tenerlo dentro como tal
    void quitarArchivo(string P);                // Elimina un archivo si es contenido dentro del directorio, si no, error
    bool contieneArchivo(string P);              // Devuelve si el path es contenido o no dentro del directorio
    bool contieneArchivoPorNombre(string name);  // Idem; pero en base al nombre del archivo en si
    string getPathArchivoPorNumero(int n);       // Devuelve un path de archivo en base a buscarlo por numero del indice dentro de el vector
    string getPathArchivoPorNombre(string name); // Devuelve un path de archivo en base a el nombre de este archivo
    
    bool createDir()
    {
        if (filesystem::exists(this->path))
        {
            cerr << "El directorio raíz ya existe" << endl;
            return false;
        }
        else
        {
            try
            {
                filesystem::create_directory(this->path);
                cout << "Directorio raíz creado correctamente" << endl;
            }
            catch (const exception &e)
            {
                cerr << "Error: " << e.what() << endl;
                return false;
            }
            return true;
        }
        return false;
    }
};
#endif