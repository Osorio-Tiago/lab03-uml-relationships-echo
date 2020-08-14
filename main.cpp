//
// Created by Angelo on 14/8/2020.
//
#include "PacienteSano.h"
#include "PacienteDiabetico.h"
#include "Paciente.h"
#include <iostream>

int main() {

    Paciente* pacienteSano = new PacienteSano("Tiago","Masculino","Mejorar niveles de azucar", new PlanAlimentos("06/11/2019"));

    Paciente* pacienteEnfermo = new PacienteDiabetico(2, 2, 4, "Angelo", "Masculino", new PlanAlimentos("14/8/18"));

   //pacienteSano->agregaAlimento(new Alimento("Sandia", 5, 3));


    cout << pacienteSano->toString()<<endl;
    cout << pacienteEnfermo->toString()<<endl;
    cout << pacienteSano->planAlimentos()<<endl;


    delete pacienteSano;
    delete pacienteEnfermo;

    return 0;
}