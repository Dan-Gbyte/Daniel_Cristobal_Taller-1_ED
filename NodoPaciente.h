#ifndef NODOPACIENTE_H
#define NODOPACIENTE_H

#include "Paciente.h"

struct NodoPaciente {
    Paciente* paciente;      // el puntero al objeto Paciente (datos)
    NodoPaciente* siguiente; // el puntero al siguiente nodo

    // constructor que inicia el nodo con un paciente y deja el siguiente en nullptr
    NodoPaciente(Paciente* p) : paciente(p), siguiente(nullptr) {}
};

#endif