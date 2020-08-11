//
// Created by santi on 11/8/2020.
//
#ifndef BASIC_00_EXAMPLE_LINKEDLIST_H
#define BASIC_00_EXAMPLE_LINKEDLIST_H
#include "Nodo.h"
#include<iostream>
#include<sstream>

using namespace std;

class LinkedList
{
private:
    Nodo* primero;

public:
    LinkedList();

    void clearData();
    bool contiene(ObjetoBase* elemento);

    ObjetoBase* consultarPorPosicion(int n);
    string toString();

    int cantidad();

    void insertarAlFinal(ObjetoBase* dato);

    void eliminarPrimero();

    void eliminarPorPosicion(int n);

    void eliminarUltimo();

    ~LinkedList();
};

#endif //BASIC_00_EXAMPLE_LINKEDLIST_H
