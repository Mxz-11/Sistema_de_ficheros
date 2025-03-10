#include "Consola.h"

Consola::Consola(string ruta)
{
    this->ruta = ruta;
}

bool Consola::crearArchivo(string nombreArchivo)
{
    ofstream archivo(nombreArchivo);

    if (archivo.is_open())
    {
        archivo.close(); // Cierra el archivo
        cout << "Archivo creado correctamente." << endl;
    }
    else
    {
        cerr << "No se pudo crear el archivo." << endl;
        return false;
    }

    return true;
}

void Consola::mostrarMetadato(Metadato met)
{
    if (met.getDisponible())
    {
        cout << "El Cluster esta disponible" << endl;
    }
    else
    {
        cout << "El Cluster no esta disponible" << endl;
    }
    if (met.getDanyado())
    {
        cout << "El Cluster esta dañaado" << endl;
    }
    else
    {
        cout << "El Cluster no esta dañado" << endl;
    }
    if (met.getReservado())
    {
        cout << "El Cluster esta reservado" << endl;
    }
    else
    {
        cout << "El Cluster no esta reservado" << endl;
    }
}

void Consola::moverArchivo(Archivo archivo)
{
}

void Consola::crearDir(Directorio r)
{
    r.createDir();
}

void Consola::eliminarDir()
{
}

void Consola::eliminarArchivo()
{
}

void Consola::mostrarDir()
{
}

void Consola::ejecutarProc()
{
}

void Consola::matarProc()
{
}

void Consola::analizarPath(string path)
{
}
