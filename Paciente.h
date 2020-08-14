//
// Created by Angelo on 11/8/2020.
//

#ifndef BASIC_00_EXAMPLE_PACIENTE_H
#define BASIC_00_EXAMPLE_PACIENTE_H

#include"PlanAlimentos.h"
#include<iostream>
#include<sstream>
using namespace std;

class Paciente{
protected:
    string nombre;
    string genero;
    PlanAlimentos* plan;
public:
    Paciente(string,string,PlanAlimentos*);
    virtual ~Paciente();
    string getNombre();
    void setNombre(string);
    string getGenero();
    void setGenero(string);
    PlanAlimentos* getPlan();
    void setPlan(PlanAlimentos*);
    void agregaAlimento(Alimento*);
    virtual string toString();
    string planAlimentos();
    virtual bool sobrePasaMaximoAzucarDiario() = 0;
};

#endif //BASIC_00_EXAMPLE_PACIENTE_H
