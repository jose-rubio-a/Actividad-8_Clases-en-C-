#include "laboratorio.h"

Laboratorio::Laboratorio(){
    cont = 0;
}

void Laboratorio::agregarFinal(const Computadora &c){
    if(cont < 5){
        computadoras[cont] = c;
        cont++;
    }
    else{
        cout << "Arreglo lleno" << endl;
    }
}

void Laboratorio::mostrar(){
    for(size_t i = 0; i < cont; i++){
        Computadora &c = computadoras[i]; 
        cout << "Nombre de Equipo: " << c.getNombreEquipo() << endl;
        cout << "Sistema Operativo: " << c.getSistemaOperativo() << endl;
        cout << "Tamano Ram: " << c.getTamanoRam() << endl;
        cout << "Procesador: " << c.getProcesador() << endl;
        cout << endl;
    }
}