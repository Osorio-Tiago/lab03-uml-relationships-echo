//
// Created by Angelo on 11/8/2020.
//

#include "PlanAlimentos.h"

PlanAlimentos::PlanAlimentos(string fechaInicio)
{
    this->alimentos = new LinkedList();
    this->fechaInicio = fechaInicio;
}

PlanAlimentos::~PlanAlimentos() { delete alimentos; }

string PlanAlimentos::getFechaInicio()  { return fechaInicio; }

void PlanAlimentos::setFechaInicio( string fechaInicio) { PlanAlimentos::fechaInicio = fechaInicio; }

string PlanAlimentos::toString() { return this->alimentos->toString(); }

void PlanAlimentos::ingresarAlimento(Alimento* alimento) { alimentos->insertarAlFinal(alimento); }

int PlanAlimentos::totalAzucarNat()
{
    Alimento* aux = nullptr;
    int totalSugar = 0;
    for (int i = 0; i < this->alimentos->cantidad(); i++) {
        aux = dynamic_cast<Alimento*>(this->alimentos->consultarPorPosicion(i));
        totalSugar += aux->getAzucarNatural();
    }
    return totalSugar;
}

int PlanAlimentos::totalAzucarAgg()
{
    Alimento* aux = nullptr;
    int totalSugarAgg = 0;
    for (int i = 0; i < this->alimentos->cantidad(); i++) {
        aux = dynamic_cast<Alimento*>(this->alimentos->consultarPorPosicion(i));
        totalSugarAgg += aux->getAzucarAgregado();
    }
    return totalSugarAgg;
}

