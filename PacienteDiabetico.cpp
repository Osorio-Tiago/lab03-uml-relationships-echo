//
// Created by Angelo on 11/8/2020.
//

#include "PacienteDiabetico.h"

PacienteDiabetico:: PacienteDiabetico(int tipoDiabetes, float dosisInsulina, float azucarDiarioMAX, string nombre, string genero, PlanAlimentos* planAlimento) : Paciente(nombre, genero, planAlimento)
{
    this->tipoDiabetes = tipoDiabetes;
    this->azucarDiarioMAX = azucarDiarioMAX;
    this->dosisInsulina = dosisInsulina;
}

void PacienteDiabetico:: setTipoDiabetes(int tipoDiabetes) {
    this->tipoDiabetes = tipoDiabetes;
}
int PacienteDiabetico::getTipoDiabetes() {
    return this->tipoDiabetes;
}

void PacienteDiabetico:: setDosisInsulina(float dosisInsulina) {
    this->dosisInsulina = dosisInsulina;
}
float PacienteDiabetico:: getDosisInsulina() {
    return this->dosisInsulina;
}

void PacienteDiabetico:: setAzucarDiarioMAX(float azucarDia) {
    this->azucarDiarioMAX = azucarDia;
}
float PacienteDiabetico:: getAzucarDiarioMAX() {
    return this->azucarDiarioMAX;
}

string PacienteDiabetico:: toString()
{
    stringstream s;
    s << Paciente::toString() << endl;
    s << planAlimento->toString();
    s <<  this->getTipoDiabetes()<<endl;
    s <<  this->getDosisInsulina() << endl;
    s << this->getAzucarDiarioMAX() << endl;

    return s.str();
}

bool PacienteDiabetico:: sobrepasaMaximoAzucarDiario()
{
    if (this->planAlimento->totalAzucarAgg() > 0 || this->planAlimento->totalAzucarNatural() > this->getAzucarDiarioMAX())
        return true;
    return false;
}

