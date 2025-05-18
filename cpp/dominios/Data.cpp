#include "../../include/dominios/Data.h"

// Implementação do construtor
Data::Data(const std::string& valor) {
    setValor(valor);
}

// Implementação do setter
void Data::setValor(const std::string& valor) {
    validar(valor);
    this->valor = valor;
}

// Implementação do getter
std::string Data::getValor() const {
    return valor;
}