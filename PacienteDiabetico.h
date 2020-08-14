//
// Created by Angelo on 11/8/2020.
//

#ifndef BASIC_00_EXAMPLE_PACIENTEDIABETICO_H
#define BASIC_00_EXAMPLE_PACIENTEDIABETICO_H

#include "Paciente.h"
#include <iostream>
#include<sstream>
using namespace std;

class PacienteDiabetico: public Paciente {
private:
    int tipoDiabetes;
    float dosisInsulina;
    float azucarDiarioMAX;
public:
    PacienteDiabetico(int tipoDiabetes , float dosisInsulina, float azucarMax, string nombre, string genero, PlanAlimentos*);
    void setTipoDiabetes(int);
    void setDosisInsulina(float);
    void setAzucarDiarioMAX(float);
    int getTipoDiabetes();
    float getDosisInsulina();
    float getAzucarDiarioMAX();
    string toString();
    bool sobrePasaMaximoAzucarDiario();

};


#endif //BASIC_00_EXAMPLE_PACIENTEDIABETICO_H
