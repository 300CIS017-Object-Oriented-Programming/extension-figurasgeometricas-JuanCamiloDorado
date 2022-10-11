//
// Created by dorad on 11/10/2022.
//

#ifndef TAREA_HEXAGONO_H
#define TAREA_HEXAGONO_H

#include "FiguraGeometrica.h"
#include <iostream>
#include <cmath>
using std::cout;
using std::cin;




class Hexagono: public FiguraGeometrica {
private:
    float lado;
    float apotema;

public:
    Hexagono();
    Hexagono(int lado, float apotema);
    virtual ~Hexagono() = default;
    void dibujarFigura() override;
    float calcularArea() override;
    float calcularPerimetro() override;
};


#endif //TAREA_HEXAGONO_H
