//
// Created by santi on 11/8/2020.
//

#include "Nodo.h"

Nodo::Nodo(ObjetoBase *dato, Nodo *siguiente)
{
    this->dato = dato;
    this->siguiente = siguiente;
}

ObjetoBase *Nodo::getDato(){ return this->dato; }

void Nodo::setDato(ObjetoBase *dato) {this->dato = dato; }

Nodo *Nodo::getSiguiente() {return this->siguiente;}

void Nodo::setSiguiente(Nodo *siguiente) { this->siguiente = siguiente; }