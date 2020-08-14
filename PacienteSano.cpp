//
// Created by Angelo on 11/8/2020.
//

#include "PacienteSano.h"


PacienteSano::PacienteSano(const string &objetivo) : objetivo(objetivo) {}

PacienteSano::PacienteSano(const string &string, const string &string1, PlanAlimentos *alimentos) : Paciente(string,
                                                                                                             string1,
                                                                                                             alimentos) {}

const string &PacienteSano::getObjetivo() const {return objetivo;}

void PacienteSano::setObjetivo(const string &objetivo) {PacienteSano::objetivo = objetivo;}

string PacienteSano::toString() {
    stringstream s;

    s << Paciente::toString();
    s << "El objetivo del paciente es: " << this->getObjetivo()<<endl;
    s << planAlimentos();
    return s.str();


}

bool PacienteSano::sobrepasaMaximoAzucarDiario() {
    if (this->getGenero() == "Hombre" && planAlimento->totalAzucarAgg() > 37.5) {
        return true;
    }
    else {
        if (this->getGenero() == "Mujer" && planAlimento->totalAzucarAgg() > 25)
            return true;
    }
    return false;
}