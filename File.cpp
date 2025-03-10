#include "File.h"
File::File()
{
    this->ruta = "";
}
File::File(const string &rutaArchivo)
{
    this->ruta = rutaArchivo;
}

File::~File()
{
}

string File::getRuta() const
{
    return this->ruta;
}

/*
string File::setRuta(const string& nuevaRuta) {
    ruta = nuevaRuta;
}
*/
string File::obtenerNombreArchivo() const
{
    size_t posUltimaBarra = ruta.find_last_of("/\\");
    if (posUltimaBarra == string::npos)
    {
        return this->ruta;
    }
    return this->ruta.substr(posUltimaBarra + 1);
}