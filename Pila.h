//
// Created by danux on 17-09-2026.
//

#ifndef DANIEL_CRISTOBAL_TALLER_1_ED_PILA_H
#define DANIEL_CRISTOBAL_TALLER_1_ED_PILA_H
#include "Nodo.h"

template <typename T>
class Pila {

public:
    Pila() {
        cima = nullptr;
    }
    ~Pila() {

    }

    void empujar(T* dato) { //insertar al final
        Nodo anterior = cima;
        Nodo<T>* nuevo = new Nodo<T>(dato);

        cima->setSiguiente(nuevo);
        cima = nuevo;
    }

    T* mirar() { // mirar el último
        return cima->getValor();
    }
    T* pop() { // Extraer el último, lo elimina
        T* salida = cima->getValor();

        return salida;
    }

    bool estaVacia() {
        return cima == nullptr;
    }

    std::string mostrar() {
        std::string salida = "";
        return salida;
    }
    int tamano() {
        if (cima == nullptr) {
            return 0;
        }

        int contador = 1;
        while (cima->getSiguiente() != nullptr) {
            contador++;
        }
        return contador;
    }


private:
    Nodo<T>* cima; // el final, pero me gusta cima

};


#endif //DANIEL_CRISTOBAL_TALLER_1_ED_PILA_H
