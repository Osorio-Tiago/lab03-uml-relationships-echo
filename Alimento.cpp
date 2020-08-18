//
// Created by Angelo on 11/8/2020.
//

#include "Alimento.h"

Alimento::Alimento(string nombre, int azuNatu, int azuAgg)
{
this->nombre = nombre;
this->azucarNatural = azuNatu;
this->azucarAgregado = azuAgg;
}

string Alimento::getNombre() {
    return this->nombre;
}

int Alimento:: getAzucarNatural() {
    return this->azucarNatural;
}

int Alimento:: getAzucarAgregado() {
    return this->azucarAgregado;
}

void Alimento::setNombre(string nombre) {
    this->nombre = nombre;
}


void Alimento::setAzucarNatural(int azuNatu) {
    this->azucarNatural = azuNatu;
}
void Alimento::setAzucarAgregado(int azuAgg) {
    this->azucarAgregado = azuAgg;
}

string Alimento::toString()
{
    stringstream s;

    s << "El nombre del alimento es: " << this->getNombre()<<endl;
    s << "La cantidad de azucar natural es: " << this->getAzucarNatural()<<endl;
    s << "La cantidad de azucar agregado es: " << this->getAzucarAgregado() << endl;
    return s.str();
}
