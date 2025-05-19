#include "../../include/dominios/Perfil.h"

// Aluno: William Alves Virissimo - 232031307

// Implementação do construtor
Perfil::Perfil(const std::string& valor) {
    setValor(valor);
}

// Implementação do setter
void Perfil::setValor(const std::string& valor) {
    validar(valor);
    this->valor = valor;
}

// Implementação do getter
std::string Perfil::getValor() const {
    return valor;
}