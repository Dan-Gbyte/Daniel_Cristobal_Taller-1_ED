#include "Servicio.h"
#include <iostream>

// asigna el departamento y asigna una sub lista vacía
Servicio::Servicio(std::string nombre)
    : nombreServicio(nombre), listaPacientes(nullptr), siguienteServicio(nullptr) {}

// libera la memoria dinámica de los pacientes y los nodos de este departamento, basicamente un destructor
Servicio::~Servicio() {
    Nodo<Paciente*>* actual = listaPacientes;
    while (actual != nullptr) {
        Nodo<Paciente*>* aux = actual;
        actual = actual->siguiente;
        delete aux->dato;
        delete aux;
    }
}

std::string Servicio::getNombre() const { return nombreServicio; }
Servicio* Servicio::getSiguiente() const { return siguienteServicio; }
void Servicio::setSiguiente(Servicio* sig) { siguienteServicio = sig; }

// inserta un paciente al final de la sub lista enlazada del depto

void Servicio::agregarPaciente(Paciente* p) {
    Nodo<Paciente*>* nuevo = new Nodo<Paciente*>(p);
    if (listaPacientes == nullptr) {
        listaPacientes = nuevo;
    } else {
        Nodo<Paciente*>* aux = listaPacientes;
        while (aux->siguiente != nullptr) {
            aux = aux->siguiente;
        }
        aux->siguiente = nuevo;
    }
}

// cuenta la cantidad de pacientes que están actualmente en el depto

int Servicio::getCantidadPacientes() const {
    int cont = 0;
    Nodo<Paciente*>* aux = listaPacientes;
    while (aux != nullptr) {
        cont++;
        aux = aux->siguiente;
    }
    return cont;
}

// imprime en consola los pacientes asignados a este servicio

void Servicio::mostrarPacientes() const {
    if (listaPacientes == nullptr) {
        std::cout << "No hay pacientes en este servicio." << std::endl;
        return;
    }
    Nodo<Paciente*>* aux = listaPacientes;
    while (aux != nullptr) {
        std::cout << aux->dato->getNombre() << " (" << aux->dato->getEdad() << ")" << std::endl;
        aux = aux->siguiente;
    }
}