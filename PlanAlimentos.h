//
// Created by Angelo on 11/8/2020.
//

#ifndef BASIC_00_EXAMPLE_PLANALIMENTOS_H
#define BASIC_00_EXAMPLE_PLANALIMENTOS_H
#include"Alimento.h"
#include "LinkedList.h"


class PlanAlimentos {
private:
    LinkedList* alimentos;
    string fechaInicio;
public:

    PlanAlimentos( string fechaInicio);

    ~PlanAlimentos();

    string getFechaInicio();

    void setFechaInicio(string fechaInicio);

    void ingresarAlimento(Alimento* alimento);

    int totalAzucarNat();

    int totalAzucarAgg();

    string toString();

};


#endif //BASIC_00_EXAMPLE_PLANALIMENTOS_H
