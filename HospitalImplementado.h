#ifndef HOSPITALIMPLEMENTADO_H
#define HOSPITALIMPLEMENTADO_H

#include "SistemaHospital.h"
#include "Cola.h"
#include "Pila.h"
#include "Servicio.h"

class HospitalImplementado : public SistemaHospital {
private:
    Cola<Paciente*> colaEspera;          
    Pila<Paciente*> historialAtenciones; 
    Servicio* listaServicios;           

    void inicializarServicios();
    Servicio* buscarServicio(const std::string& nombre);

public:
    HospitalImplementado();
    ~HospitalImplementado() override;

    bool leerPacientes() override;
    std::string listarPacientesEspera() override;
    std::string atenderPacientes(int cantidad) override;
    std::string listarDepartamentos() override;
    std::string verDepartamento(int id) override;
    std::string verHistorial() override;
};

#endif