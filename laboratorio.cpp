#include "laboratorio.h"
#include <fstream>

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
    cout << left;
    cout << setw(16) << "Nombre Equipo";
    cout << setw(20) << "Sistema Operativo";
    cout << setw(6) << "RAM";
    cout << setw(16) << "Microprocesador";
    cout << endl;
        for(size_t i = 0; i < cont; i++){
        Computadora &c = computadoras[i]; 
        cout << c;
        //cout << "Nombre de Equipo: " << c.getNombreEquipo() << endl;
        //cout << "Sistema Operativo: " << c.getSistemaOperativo() << endl;
        //cout << "Tamano Ram: " << c.getTamanoRam() << endl;
        //cout << "Procesador: " << c.getProcesador() << endl;
        //cout << endl;
    }
}
void Laboratorio::respaldar_tabla(){
        int i;
        ofstream archivo("computadoras_tabla.txt");
        if(archivo.is_open()){
            archivo << left;
            archivo << setw(16) << "Nombre Equipo";
            archivo << setw(20) << "Sistema Operativo";
            archivo << setw(6) << "RAM";
            archivo << setw(16) << "Microprocesador";
            archivo << endl;
            for(size_t i = 0; i < cont; i++){
                Computadora &c = computadoras[i]; 
                archivo << c;
            }
        }
        archivo.close();
    }

void Laboratorio::respaldar(){
        int i;
        ofstream archivo("computadoras.txt");
        if(archivo.is_open()){
            for(size_t i = 0; i < cont; i++){
                Computadora &c = computadoras[i]; 
                archivo << c.getNombreEquipo() << endl;
                archivo << c.getSistemaOperativo() << endl;
                archivo << c.getTamanoRam() << endl;
                archivo << c.getProcesador() << endl;
            }
        }
        archivo.close();
    }