#include "Cola.h"
#include <iostream>

Cola::Cola() : frente(nullptr), fin(nullptr) {}

// Destructor: libera los nodos de la memoria dinámica al destruir la cola
Cola::~Cola() {
    while (!estaVacia()) {
        desencolar();
    }
}

bool Cola::estaVacia() const {
    return frente == nullptr;
}

// Agregar un paciente al final de la cola
void Cola::encolar(Paciente* p) {
    NodoPaciente* nuevo = new NodoPaciente(p);
    if (estaVacia()) {
        frente = nuevo;
        fin = nuevo;
    } else {
        fin->siguiente = nuevo;
        fin = nuevo;
    }
}

// Retirar al primer paciente que llegó (FIFO)
Paciente* Cola::desencolar() {
    if (estaVacia()) {
        return nullptr;
    }
    NodoPaciente* aux = frente;
    Paciente* pacienteAtendido = aux->paciente;

    frente = frente->siguiente;
    if (frente == nullptr) {
        fin = nullptr;
    }

    delete aux; // Liberar memoria del nodo contenedor
    return pacienteAtendido;
}

// Mostrar los pacientes en espera por consola
void Cola::mostrar() const {
    if (estaVacia()) {
        std::cout << "No hay pacientes en espera." << std::endl;
        return;
    }

    NodoPaciente* actual = frente;
    int i = 1;
    while (actual != nullptr) {
        std::cout << i << ". " << actual->paciente->getId() << " "
                  << actual->paciente->getNombre() << std::endl;
        actual = actual->siguiente;
        i++;
    }
}