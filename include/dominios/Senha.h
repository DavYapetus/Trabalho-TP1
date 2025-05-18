#ifndef SENHA_H
#define SENHA_H

#include <stdexcept>
#include <string>
#include <cctype>

class Senha {
private:
    std::string valor;
    
    bool validar(const std::string& senha) {
        if (senha.length() != 6) return false;
        
        bool temDigito = false;
        bool temMaiuscula = false;
        bool temMinuscula = false;
        bool temEspecial = false;
        
        for (char c : senha) {
            if (isdigit(c)) temDigito = true;
            else if (isupper(c)) temMaiuscula = true;
            else if (islower(c)) temMinuscula = true;
            else if (c == '#' || c == '$' || c == '%' || c == '&') temEspecial = true;
            else return false;
            
            if (senha.find(c) != senha.rfind(c)) return false; // Verifica duplicados
        }
        
        return temDigito && temMaiuscula && temMinuscula && temEspecial;
    }
    
public:
    void setValor(const std::string& novoValor) {
        if (!validar(novoValor)) {
            throw std::invalid_argument("Senha inválida");
        }
        valor = novoValor;
    }
    
    std::string getValor() const { return valor; }
};

#endif