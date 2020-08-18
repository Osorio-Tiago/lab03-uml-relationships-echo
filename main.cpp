//
// Created by Angelo on 14/8/2020.
//
#include "PacienteSano.h"
#include "PacienteDiabetico.h"
#include "Paciente.h"
#include <iostream>

int main() {


    cout<<"Informacion de los pacientes"<<endl;
    cout<<"--------------------------------------------"<<endl;
    Paciente* pacienteSano = new PacienteSano("Tiago","Masculino","Mejorar niveles de azucar", new PlanAlimentos("06/11/2019"));
    Paciente* pacienteEnfermo = new PacienteDiabetico(2, 2, 4, "Angelo", "Masculino", new PlanAlimentos("14/8/18"));
    Paciente* pacienteEnfermo2 = new PacienteDiabetico(1,1,3,"Ariadna", "Femenino", new PlanAlimentos("17/6/20"));

   pacienteSano->agregaAlimento(new Alimento("Sandia", 5, 3));
   pacienteEnfermo->agregaAlimento(new Alimento("Ensalada", 3, 0));
    pacienteEnfermo2->agregaAlimento(new Alimento("Manzana", 2, 1));
    cout<<"Paciente #1"<<endl;
    cout << "Paciente sano:\n" << pacienteSano->toString()<<endl;
    cout << pacienteSano->planAlimentos()<<endl;
    cout<<"Paciente #2"<<endl;
    cout << "Paciente diabetico:\n" << pacienteEnfermo->toString()<<endl;
    cout << pacienteEnfermo->planAlimentos()<<endl;
    cout<<"Paciente #3"<<endl;
    cout << "\nPaciente diabetico 2:\n" << pacienteEnfermo2->toString();
    cout << pacienteEnfermo2->planAlimentos()<<endl;
    cout << pacienteEnfermo2->planAlimentos()<<endl;



    delete pacienteSano;
    delete pacienteEnfermo;
    delete pacienteEnfermo2;

    return 0;
}