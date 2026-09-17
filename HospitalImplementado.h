//
// Created by danux on 17-09-2026.
//

#pragma once

#include "Cola.h"
#include "Pila.h"
#include "SistemaHospital.h"

class HospitalImplementado : public SistemaHospital {
public:

    HospitalImplementado();
    virtual ~HospitalImplementado();

    //los metodos del sistema
    bool leerPacientes() override;

    std::string listarPacientesEspera() override;
    std::string atenderPacientes(int cantidad) override;
    std::string listarDepartamentos() override;
    std::string verDepartamento(int id) override;
    std::string verHistorial() override;

private:

    Cola colaEspera;
    //Pila historial;  //pendiente de hacer

    //no estoy seguro de cuales metodos hacer aún
    // quiza podrian ser de control de errores o algo asi, ahi veremos que necesitamos
};
