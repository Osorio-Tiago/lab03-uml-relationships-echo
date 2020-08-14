//
// Created by Angelo on 11/8/2020.
//

#include "PacienteSano.h"



PacienteSano::PacienteSano(string n, string g, string o, PlanAlimentos *alimentos)
: Paciente(n,g,alimentos) {objetivo = o; }

string PacienteSano::getObjetivo() { return objetivo;}

void PacienteSano::setObjetivo(string o) { objetivo = o;}

string PacienteSano::toString() {
    stringstream s;
    s << Paciente::toString();
    s << "El objetivo del paciente es: " << getObjetivo() << endl;
    return s.str();
}

bool PacienteSano::sobrePasaMaximoAzucarDiario() {
    if (this->getGenero() == "Hombre" && plan->totalAzucarAgg() > 37.5) {
        return true;
    }
    else {
        if (this->getGenero() == "Mujer" && plan->totalAzucarAgg() > 25)
            return true;
    }
    return false;
}

//Prueba commits