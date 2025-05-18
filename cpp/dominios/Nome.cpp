#include "../../include/dominios/Nome.h"

// Implementação do construtor
Nome::Nome(const std::string& valor) {
    setValor(valor);
}

// Implementação do setter
void Nome::setValor(const std::string& valor) {
    validar(valor);
    this->valor = valor;
}

// Implementação do getter
std::string Nome::getValor() const {
    return valor;
}