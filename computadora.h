#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iostream>

using namespace std;

class Computadora{
    private:
        string sistemaOperativo;
        int tamanoRam;
        string procesador;
        string nombreEquipo;
    public:
        Computadora();
        Computadora(const string &sistemaOperativo,int tamanoRam,const string &procesador,const string &nombreEquipo);

        void setSistemaOperativo(const string &v);
        void setTamanoRam(int v);
        void setProcesador(const string &v);
        void setNombreEquipo(const string &v);

        string getSistemaOperativo();
        int getTamanoRam();
        string getProcesador();
        string getNombreEquipo();
};

#endif