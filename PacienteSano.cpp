//
// Created by Angelo on 11/8/2020.
//

#include "PacienteSano.h"



PacienteSano::PacienteSano(string n, string g, string o, PlanAlimentos *alimentos)
: Paciente(n,g,alimentos){
    this->objetivo = o;
}

string PacienteSano::getObjetivo() { return objetivo;}

void PacienteSano::setObjetivo(string o) { this->objetivo = objetivo;}

string PacienteSano::toString() {
    stringstream s;

    s << Paciente::toString();
    s << "El objetivo del paciente es: " << this->getObjetivo()<<endl;
    s << planAlimentos();
    return s.str();


}

bool PacienteSano::sobrepasaMaximoAzucarDiario() {
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