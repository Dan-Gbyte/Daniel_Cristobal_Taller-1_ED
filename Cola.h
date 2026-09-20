#ifndef COLA_H
#define COLA_H

#include "Nodo.h"

// estructura de la cola
template <typename T>
class Cola {
private:
    Nodo<T>* frente; // Puntero al primer elemento de la cola
    Nodo<T>* fin;    // Puntero al último elemento de la cola

public:
    // inicia la cola vacia
    Cola() : frente(nullptr), fin(nullptr) {}

    // el destructor libera memoria de todos los nodos
    ~Cola() {
        while (!estaVacia()) {
            desencolar();
        }
    }

    // comprueba si la cola no tiene elementos
    bool estaVacia() const { return frente == nullptr; }

    // agrega un nuevo elemento al final de la cola
    void encolar(T dato) {
        Nodo<T>* nuevo = new Nodo<T>(dato);
        if (estaVacia()) {
            frente = nuevo;
            fin = nuevo;
        } else {
            fin->siguiente = nuevo;
            fin = nuevo;
        }
    }

    // extrae y retorna el elemento que esta al frente de la cola
    T desencolar() {
        if (estaVacia()) return nullptr;
        Nodo<T>* aux = frente;
        T dato = aux->dato;
        frente = frente->siguiente;
        if (frente == nullptr) fin = nullptr;
        delete aux; // libera el nodo sacado
        return dato;
    }

    // retorna el nodo del frente para poder recorrer la cola sin modificar nada
    Nodo<T>* getFrente() const { return frente; }
};

#endif