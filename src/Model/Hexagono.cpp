//
// Created by dorad on 11/10/2022.
//

#include "Hexagono.h"

Hexagono::Hexagono() {
    lado = 0;
    apotema = 0;

    nombreFigura = "Hexagono";
}

Hexagono::Hexagono(int lado, float apotema): Hexagono(){
    this->lado = lado;
    this->apotema = apotema;
}

void Hexagono::dibujarFigura() {
    cout<< nombreFigura;

    cout<< "\n";
    cout<< ",-<_>-.\n";
    cout<< ">-<_>-<\n";
    cout<< "`-<_>-'\n";

}

float Hexagono::calcularPerimetro() {
    perimetro = lado * 6;
    return perimetro;
}


float Hexagono::calcularArea() {
    area = (perimetro * apotema);
    return area;
}

