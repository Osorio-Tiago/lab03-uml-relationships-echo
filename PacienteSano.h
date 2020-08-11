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

    PacienteSano(const string &objetivo);

};


#endif //BASIC_00_EXAMPLE_PACIENTESANO_H
