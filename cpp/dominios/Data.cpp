#include "../../include/dominios/Data.h"

// Aluno: Ricardo Siqueira Rubens - 232011430
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