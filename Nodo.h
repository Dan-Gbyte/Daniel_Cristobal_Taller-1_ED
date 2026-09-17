//
// Created by danux on 17-09-2026.
//

#ifndef DANIEL_CRISTOBAL_TALLER_1_ED_NODO_H
#define DANIEL_CRISTOBAL_TALLER_1_ED_NODO_H


template <typename T>
class Nodo {
private:
    T valor;
    Nodo<T>* siguiente;

public:
    // Constructor
    Nodo(T valor) {
        this->valor = valor;
        this->siguiente = nullptr;
    }
    ~Nodo() {}

    T getValor() {
        return this->valor;
    }

    Nodo<T>* getSiguiente() {
        return this->siguiente;
    }

    void setSiguiente(Nodo<T>* siguiente) {
        this->siguiente = siguiente;
    }

};


#endif //DANIEL_CRISTOBAL_TALLER_1_ED_NODO_H
