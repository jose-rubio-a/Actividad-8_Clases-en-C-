#include <iostream>
#include "laboratorio.h"

using namespace std;

int main(){
    Computadora c01 = Computadora("Windows",8,"AMD","Equipo 1");
    Computadora c02 = Computadora("Linux",16,"Intel","Equipo 2");
    Computadora c03, c04;
    c03.setSistemaOperativo("Linux");
    c03.setTamanoRam(4);
    c03.setProcesador("AMD");
    c03.setNombreEquipo("Equipo 3");
    c04.setSistemaOperativo("Windows");
    c04.setTamanoRam(8);
    c04.setProcesador("Intel");
    c04.setNombreEquipo("Equipo 4");
    
    Laboratorio l;

    l.agregarFinal(c01);
    l.agregarFinal(c02);
    l.agregarFinal(c03);
    l.agregarFinal(c04);

    l.mostrar();

    return 0;
}