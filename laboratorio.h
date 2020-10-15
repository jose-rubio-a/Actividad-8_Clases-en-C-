#ifndef LABORATORIO_H
#define LABORATORIO_H

#include "computadora.h"

class Laboratorio{
    private:
    Computadora computadoras[5];
    size_t cont;
    
    public:
    Laboratorio();

    void agregarFinal(const Computadora &c);
    void mostrar();
    void respaldar_tabla();
    void respaldar();

    friend Laboratorio& operator << (Laboratorio &l, Computadora &c){
        l.agregarFinal(c);

        return l;
    }
};

#endif