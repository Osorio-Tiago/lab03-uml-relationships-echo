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

    PacienteSano(const string &string, const string &string1, PlanAlimentos *alimentos);

    const string &getObjetivo() const;

    void setObjetivo(const string &objetivo);

    string toString();

    bool sobrepasaMaximoAzucarDiario();
};


#endif //BASIC_00_EXAMPLE_PACIENTESANO_H
