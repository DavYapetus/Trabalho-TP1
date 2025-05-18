#include "../../include/dominios/Quantidade.h"

// Implementação do construtor
Quantidade::Quantidade(int valor) {
    setValor(valor);
}

// Implementação do setter
void Quantidade::setValor(int valor) {
    validar(valor);
    this->valor = valor;
}

// Implementação do getter
int Quantidade::getValor() const {
    return valor;
}

// Implementação da validação
void Quantidade::validar(int valor) {
    if (valor < 1 || valor > 1000000) {
        throw std::invalid_argument("Quantidade deve estar entre 1 e 1.000.000");
    }
}