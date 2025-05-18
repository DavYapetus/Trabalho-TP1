#include "../../include/dominios/Senha.h"
#include <unordered_set>

// Implementação do construtor
Senha::Senha(const std::string& valor) {
    setValor(valor);
}

// Implementação do setter
void Senha::setValor(const std::string& valor) {
    validar(valor);
    this->valor = valor;
}

// Implementação do getter
std::string Senha::getValor() const {
    return valor;
}

// Implementação da verificação de caracteres duplicados
bool Senha::temCaracterDuplicado(const std::string& str) const {
    std::unordered_set<char> chars;
    for (char c : str) {
        if (chars.count(c)) return true;
        chars.insert(c);
    }
    return false;
}

// Implementação da validação
void Senha::validar(const std::string& valor) {
    if (valor.length() != 6) {
        throw std::invalid_argument("Senha deve ter exatamente 6 caracteres");
    }
    
    bool temDigito = false;
    bool temMaiuscula = false;
    bool temMinuscula = false;
    bool temEspecial = false;
    std::unordered_set<char> especiais = {'#', '$', '%', '&'};
    
    for (char c : valor) {
        if (isdigit(c)) temDigito = true;
        else if (isupper(c)) temMaiuscula = true;
        else if (islower(c)) temMinuscula = true;
        else if (especiais.count(c)) temEspecial = true;
        else throw std::invalid_argument("Caracter inválido na senha");
    }
    
    if (!temDigito || !temMaiuscula || !temMinuscula || !temEspecial) {
        throw std::invalid_argument("Senha deve conter pelo menos um dígito, uma letra maiúscula, uma minúscula e um caracter especial");
    }
    
    if (temCaracterDuplicado(valor)) {
        throw std::invalid_argument("Senha não pode ter caracteres duplicados");
    }
}