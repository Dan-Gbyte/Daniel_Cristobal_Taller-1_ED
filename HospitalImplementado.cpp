//
// Created by danux on 17-09-2026.
//

#include "HospitalImplementado.h"

#include <iostream>
using namespace std;

HospitalImplementado::HospitalImplementado() {
}

HospitalImplementado::~HospitalImplementado() {
}



bool HospitalImplementado::leerPacientes() {
    // temporalmente para pruebas
    Paciente* p1 = new Paciente("001", "Juan Perez", 25, "Cardiologia");
    Paciente* p2 = new Paciente("002", "Maria Soto", 67, "Urgencias");

    colaEspera.encolar(p1);
    colaEspera.encolar(p2);

    return true;
}

string HospitalImplementado::listarPacientesEspera() {
    string salida = "";
    //salida = salida + "=== PACIENTES EN ESPERA ===\n" + colaEspera.mostrar(); //esta deberia ser la implementacion correcta
    return salida;
}

string HospitalImplementado::atenderPacientes(int cantidad) {
    string salida = "";

    return salida;
}

string HospitalImplementado::listarDepartamentos() {
    string salida = "";

    return salida;
}

string HospitalImplementado::verDepartamento(int id) {
    string salida = "";

    return salida;
}

string HospitalImplementado::verHistorial() {

    string salida = "";

    return salida;
}