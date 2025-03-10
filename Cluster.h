#ifndef CLUSTER_H
#define CLUSTER_H

#include "Metadato.h"

class Metadato;

class Cluster
{
private:
    Metadato metadatos; // Metadatos
    string path;        // Ruta
    Cluster *siguiente; // Siguiente

public:
    Cluster(Metadato metadatos = Metadato(), string path = "");
    
    friend ostream &operator>>(ostream &os, const Cluster &cluster);
};
#endif