#ifndef _FILE_H
#define _FILE_H

#include <bitset>
#include <iostream>

using namespace std;

class File
{
private: 
string ruta;
public:
 File();

    File(const string& rutaArchivo);
    ~File();

    string getRuta() const;
    string setRuta()const;
    string obtenerNombreArchivo() const;

  
};
#endif 