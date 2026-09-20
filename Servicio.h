#ifndef SERVICIO_H
#define SERVICIO_H

#include <string>
#include "Paciente.h"
#include "Nodo.h"

// departamento o servicio del hospital
class Servicio {
private:
    std::string nombreServicio;
    Nodo<Paciente*>* listaPacientes; // una linked list con los pacientes asignados a este servicio
    Servicio* siguienteServicio;     // el puntero al siguiente departamento o servicio

public:
    Servicio(std::string nombre);
    ~Servicio();

    std::string getNombre() const;
    Servicio* getSiguiente() const;
    void setSiguiente(Servicio* sig);

    void agregarPaciente(Paciente* p);
    void mostrarPacientes() const;
    int getCantidadPacientes() const;
};

#endif