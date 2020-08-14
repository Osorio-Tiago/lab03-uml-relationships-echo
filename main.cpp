//
// Created by Angelo on 14/8/2020.
//
#include "PacienteSano.h"
#include "PacienteDiabetico.h"
#include "Paciente.h"
#include <iostream>

int main() {
    Paciente *pacienteSano = new PacienteSano("Mejorar nivel de insulina", "Santiago", "Hombre",
                                              new PlanAlimentos("6/6/20"));
    Paciente *pacienteEnfermo = new PacienteDiabetico(2, 3, 5, "Jorge", "Hombre", new PlanAlimentos("6/6/20"));


    Alimento *sandia = new Alimento("Sandia", 6, 6);

    Alimento *melon = new Alimento("melon", 10, 7);

    Alimento *ceviche = new Alimento("Ceviche", 25, 40);

    Alimento *arrozConPollo = new Alimento("Arroz con pollo", 38, 20);

    Alimento *caldosa = new Alimento("Caldosa ", 40, 40);


    pacienteEnfermo->agregaAlimento(caldosa);
    pacienteEnfermo->agregaAlimento(sandia);
    pacienteEnfermo->agregaAlimento(melon);

    pacienteSano->agregaAlimento(arrozConPollo);
    pacienteSano->agregaAlimento(ceviche);
    pacienteSano->agregaAlimento(sandia);

    cout << pacienteEnfermo->toString() << endl;
    cout << pacienteEnfermo->planAlimentos() << endl;

    cout << "A continuacion vera si el paciente sobrepasa el maximo de azucar diario o no : ";
    if (pacienteEnfermo->sobrePasaMaximoAzucarDiario()) {
        cout << "Si lo sobrepasa\n\n";
    } else {
        cout << "No lo sobrepasa\n\n";
    }

    cout << pacienteSano->toString() << endl;
    cout << pacienteSano->planAlimentos() << endl;

    cout << "A continuacion vera si el paciente sobrepasa el maximo de azucar diario o no : ";
    if (pacienteSano->sobrePasaMaximoAzucarDiario()) {
        cout << "Si lo sobrepasa\n\n";
    } else {
        cout << "No lo sobrepasa\n\n";
    }


    delete pacienteEnfermo;
    delete pacienteSano;

    delete sandia;
    delete melon;
    delete ceviche;
    delete arrozConPollo;
    delete caldosa;

    return 0;
}