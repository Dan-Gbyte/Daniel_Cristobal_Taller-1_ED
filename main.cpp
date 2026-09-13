#include <iostream>
#include "Paciente.h"
#include "Cola.h"

int main() {
    Cola colaEspera;

    // Crear dos pacientes de prueba
    Paciente* p1 = new Paciente("001", "Juan Perez", 25, "Cardiologia");
    Paciente* p2 = new Paciente("002", "Maria Soto", 67, "Urgencias");

    // Encolar
    colaEspera.encolar(p1);
    colaEspera.encolar(p2);

    std::cout << "=== PACIENTES EN ESPERA ===" << std::endl;
    colaEspera.mostrar();

    // Liberar memoria de los pacientes creados en main
    delete p1;
    delete p2;

    return 0;
}