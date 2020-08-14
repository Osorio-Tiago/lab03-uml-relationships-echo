//
// Created by Angelo on 11/8/2020.
//

#ifndef BASIC_00_EXAMPLE_ALIMENTO_H
#define BASIC_00_EXAMPLE_ALIMENTO_H

#include <sstream>
#include <iostream>
#include "ObjetoBase.h"

using namespace std;

class Alimento : public ObjetoBase
{
private:

    string nombre;
    int azucarNatural;
    int azucarAgregado;

public:
    Alimento(string nombre, int azucarNatural , int azugarAgregado);
    string getNombre();
    int getAzucarNatural();
    int getAzucarAgregado();
    void setNombre(string);
    void setAzucarNatural(int);
    void setAzucarAgregado(int azuAgg);
    string toString();





};


#endif //BASIC_00_EXAMPLE_ALIMENTO_H
