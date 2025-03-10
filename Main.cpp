#include "Consola.h"

int main()
{
    Metadato m = Metadato();
    cout << m;
    cout << m.getMetadatos();
    Directorio r = Directorio("Data");
    r.createDir();
    Consola c = Consola("Data");
    return 0;
}