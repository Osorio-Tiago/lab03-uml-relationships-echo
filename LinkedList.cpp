//
// Created by santi on 11/8/2020.
//

#include "LinkedList.h"

LinkedList::LinkedList() { this->primero = nullptr;}

void LinkedList::clearData()
{
    Nodo* actual = this->primero;

    while (actual != nullptr)
    {
        delete actual->getDato();
        actual = actual->getSiguiente();
    }
}

bool LinkedList::contiene(ObjetoBase* elemento)
{
    Nodo* actual = this->primero;
    while (actual != nullptr)
    {
        if (actual->getDato() == elemento)
            return true;
        actual = actual->getSiguiente();
    }
    return false;
}

ObjetoBase* LinkedList::consultarPorPosicion(int n)
{
    if (primero == nullptr)
    {
        return nullptr;
    }
    else
    {
        Nodo* actual = this->primero;
        int i = 0;
        while (actual != nullptr && i < n)
        {
            actual = actual->getSiguiente();
            i++;
        }

        if (actual != nullptr)
        {
            return actual->getDato();
        }

        return nullptr;
    }
}

string LinkedList::toString()
{
    stringstream s;
    Nodo* actual = this->primero;

    while (actual != nullptr)
    {
        s << actual->getDato()->toString() << endl;
        actual = actual->getSiguiente();
    }

    return s.str();
}

int LinkedList::cantidad()
{
    int total = 0;
    Nodo* actual = this->primero;

    while (actual != nullptr)
    {
        actual = actual->getSiguiente();
        total++;
    }
    return total;
}

void LinkedList::insertarAlFinal(ObjetoBase* dato)
{
    Nodo* nuevo = new Nodo(dato, nullptr);

    if (this->primero == nullptr)
    {
        this->primero = nuevo;
    }
    else
    {
        Nodo* actual = this->primero;
        while (actual->getSiguiente() != nullptr)
        {
            actual = actual->getSiguiente();
        }
        actual->setSiguiente(nuevo);
    }
}

void LinkedList::eliminarPrimero()
{
    if (primero == nullptr)
    {
        return;
    }
    else
    {
        Nodo* eliminar = primero;
        primero = primero->getSiguiente();
        delete eliminar;
    }
}

void LinkedList::eliminarPorPosicion(int n)
{
    if (this->primero == nullptr) // La lista está vacía
    {
        return;
    }
    else
    {
        Nodo* temp; // elemento a eliminar
        if (n == 0)
        {
            temp = this->primero;
            this->primero = this->primero->getSiguiente();
            delete temp;
        }
        else
        {
            // Caso genérico
            Nodo* actual = this->primero;
            int i = 0;
            while (actual->getSiguiente() != nullptr && i < n - 1)
            {
                actual = actual->getSiguiente();
                i++;
            }
            if (actual->getSiguiente() != nullptr)
            {
                temp = actual->getSiguiente();
                actual->setSiguiente(temp->getSiguiente());
                delete temp;
            }
        }
    }
}

void LinkedList::eliminarUltimo()
{
    if (this->primero == nullptr)
    {
        return;
    }
    else
    {
        Nodo* eliminar;

        if (this->primero->getSiguiente() == nullptr)
        {
            eliminar = this->primero;
            this->primero = this->primero->getSiguiente();
            delete eliminar;
        }
        else
        {
            Nodo* actual = this->primero;
            while (actual->getSiguiente()->getSiguiente() != nullptr)
            {
                actual = actual->getSiguiente();
            }

            if (actual->getSiguiente() != nullptr) {
                eliminar = actual->getSiguiente();
                actual->setSiguiente(eliminar->getSiguiente());
                delete eliminar;
            }
        }
    }
}

LinkedList::~LinkedList()
{
    while (primero != nullptr)
    {
        eliminarPrimero();
    }
}