//
// Created by Angelo on 11/8/2020.
//

#ifndef BASIC_00_EXAMPLE_PACIENTESANO_H
#define BASIC_00_EXAMPLE_PACIENTESANO_H

#include "Paciente.h"

class PacienteSano: public Paciente{
private:
    string objetivo;
public:

    PacienteSano(string nombre, string genero, string objetivo, PlanAlimentos*);

    string getObjetivo();

    void setObjetivo(string);

    string toString();

    bool sobrePasaMaximoAzucarDiario();
};


#endif //BASIC_00_EXAMPLE_PACIENTESANO_H
