#include <iostream>
#include "Paciente.h"
#include "Cola.h"
#include "HospitalImplementado.h"

using namespace std;

int main() {

    SistemaHospital* hospital = new HospitalImplementado();

    if (hospital->leerPacientes()) {
        cout << "Archivo cargado con exito." << endl;
    } else {
        cout << "Error al cargar el archivo." << endl;
    }

    cout << "\n" << hospital->listarPacientesEspera() << endl;
    cout << "\n" << hospital->listarDepartamentos() << endl;

    delete hospital;

    return 0;
}
