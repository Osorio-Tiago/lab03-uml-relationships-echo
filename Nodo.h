//
// Created by santi on 11/8/2020.
//
#include"ObjetoBase.h"
#ifndef BASIC_00_EXAMPLE_NODO_H
#define BASIC_00_EXAMPLE_NODO_H


class Nodo {

private:
    ObjetoBase* dato;
    Nodo* siguiente;

public:

    Nodo(ObjetoBase* dato, Nodo* siguiente);
    ObjetoBase* getDato();
    void setDato(ObjetoBase* dato);
    Nodo* getSiguiente();
    void setSiguiente(Nodo *siguiente);
};


#endif //BASIC_00_EXAMPLE_NODO_H
