#ifndef METADATO_H
#define METADATO_H

#include <bitset>
#include <iostream>

using namespace std;

class Cluster;

class Metadato
{
private:
    bitset<4> ddrf; // Disponible Dañado Reservado Fin

public:
    Metadato(bool disponible = true, bool danyado = false, bool reservado = false, bool fin = true) // Constructor por defecto
    {
        if (disponible)
            this->ddrf.set(0);
        if (danyado)
            this->ddrf.set(1);
        if (reservado)
            this->ddrf.set(2);
        if (fin)
            this->ddrf.set(3);
    }

    bool getDisponible() { return this->ddrf[0]; } // Get disponible
    bool getDanyado() { return this->ddrf[1]; }    // Get dañado
    bool getReservado() { return this->ddrf[2]; }  // Get reservado
    bool getFin() { return this->ddrf[3]; }        // Get fin
    string getMetadatos()                          // Get metadatos
    {
        string aux = (this->ddrf[0]) ? "1" : "0";
        aux += (this->ddrf[1]) ? "1" : "0";
        aux += (this->ddrf[2]) ? "1" : "0";
        aux += (this->ddrf[3]) ? "1" : "0";
        return aux;
    }

    void setDisponible(bool disponible) // Set disponible
    {
        if ((this->ddrf[0] && !disponible) || (!this->ddrf[0] && disponible))
        {
            this->ddrf.flip(0);
        }
    }

    void setDanyado(bool danyado) // Set dañado
    {
        if ((this->ddrf[1] && !danyado) || (!this->ddrf[1] && danyado))
        {
            this->ddrf.flip(1);
        }
    }

    void setReservado(bool reservado) // Set reservado
    {
        if ((this->ddrf[2] && !reservado) || (!this->ddrf[2] && reservado))
        {
            this->ddrf.flip(2);
        }
    }

    void setFin(bool fin) // Set fin
    {
        if ((this->ddrf[3] && !fin) || (!this->ddrf[3] && fin))
        {
            this->ddrf.flip(3);
        }
    }

    friend ostream &operator<<(ostream &os, const Metadato &metadato) // Sobrecarga del operador de salida
    {
        os << metadato.ddrf << endl;
        return os;
    }
};
#endif