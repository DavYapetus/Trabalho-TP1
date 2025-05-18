#include "../../include/dominios/Dinheiro.h"

// Implementação do construtor
Dinheiro::Dinheiro(double valor) {
    setValor(valor);
}

// Implementação do setter
void Dinheiro::setValor(double valor) {
    validar(valor);
    this->valor = valor;
}

// Implementação do getter
double Dinheiro::getValor() const {
    return valor;
}

// Implementação da validação
void Dinheiro::validar(double valor) {
    if (valor < 0.01 || valor > 1000000.00) {
        throw std::invalid_argument("Valor monetário deve estar entre 0,01 e 1.000.000,00");
    }
}