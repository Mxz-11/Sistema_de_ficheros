#ifndef SISTEMA_ARCHIVOS_H
#define SISTEMA_ARCHIVOS_H
#include "Metadato.h"
#include <unordered_map>

class SistemaArchivos
{
private:
    int cod_inicio = 0x55AA;
    unordered_map<string, Metadato> metadatos;

public:
    SistemaArchivos(int cod_inicio = 0x55AA)
    {
        this->cod_inicio = cod_inicio;
        this->metadatos = unordered_map<string, Metadato>();
    }
};
#endif