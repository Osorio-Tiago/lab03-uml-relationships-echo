//
// Created by Angelo on 11/8/2020.
//

#ifndef BASIC_00_EXAMPLE_PACIENTEDIABETICO_H
#define BASIC_00_EXAMPLE_PACIENTEDIABETICO_H

#include "Paciente.h"

class PacienteDiabetico: public Paciente {
private:
    int tipoDiabetes;
    float dosisInsulina;
    float azucarDiarioMAX;
public:
    PacienteDiabetico(int , float, float, string, string , PlanAlimentos*);
    void setTipoDiabetes(int);
    void setDosisInsulina(float);
    void setAzucarDiarioMAX(float);
    int getTipoDiabetes();
    float getDosisInsulina();
    float getAzucarDiarioMAX();
    string toString();
    bool sobrepasaMaximoAzucarDiario();


};


#endif //BASIC_00_EXAMPLE_PACIENTEDIABETICO_H
