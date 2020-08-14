//
// Created by Angelo on 14/8/2020.
//
#include "PacienteSano.h"
#include "PacienteDiabetico.h"
#include "Paciente.h"
#include <iostream>

int main() {

    cout<<" Hola mundo\n";

    cout << "\tCOMO ES POSIBLE QUE ESO SI LO IMPRIMAAAAAA :C\n";

    Paciente* pacienteSano = new PacienteSano("Tiago","Masculino","Mejorar niveles de azucar", new PlanAlimentos("06/11/2019"));

    // Paciente* pacienteEnfermo = new PacienteDiabetico(2, 2.3, 4, "Angelo", "Masculino", new PlanAlimentos("14/8/18"));

    cout << pacienteSano->toString();

   // cout<<pacienteEnfermo->toString()<<endl;


    delete pacienteSano;
    //delete pacienteEnfermo;
    return 0;
}