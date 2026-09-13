#ifndef COLA_H
#define COLA_H

#include "NodoPaciente.h"

class Cola {
private:
    NodoPaciente* frente;
    NodoPaciente* fin;

public:
    Cola();
    ~Cola(); // Destructor para liberar memoria

    void encolar(Paciente* p);  // Insertar al final
    Paciente* desencolar();     // Extraer del frente (FIFO)
    bool estaVacia() const;
    void mostrar() const;
};

#endif