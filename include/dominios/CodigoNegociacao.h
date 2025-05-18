#ifndef CODIGONEGOCIACAO_H
#define CODIGONEGOCIACAO_H

#include <stdexcept>
#include <string>
#include <cctype>

class CodigoNegociacao {
private:
    std::string valor;
    
    bool validar(const std::string& codigo) {
        if (codigo.empty() || codigo.length() > 12) return false;
        for (char c : codigo) {
            if (!isalnum(c) && c != ' ') return false;
        }
        return true;
    }
    
public:
    void setValor(const std::string& novoValor) {
        if (!validar(novoValor)) {
            throw std::invalid_argument("Código de negociação inválido");
        }
        valor = novoValor;
    }
    
    std::string getValor() const { return valor; }
};

#endif