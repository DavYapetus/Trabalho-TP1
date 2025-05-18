#ifndef CODIGO_H
#define CODIGO_H

#include <string>
#include <stdexcept>

class Codigo {
private:
    std::string valor;
    
    void validar(const std::string& valor) {
        if (valor.length() != 5) {
            throw std::invalid_argument("Código deve ter exatamente 5 dígitos");
        }
        for (char c : valor) {
            if (!isdigit(c)) {
                throw std::invalid_argument("Código deve conter apenas dígitos (0-9)");
            }
        }
    }

public:
    Codigo(const std::string& valor) {
        setValor(valor);
    }
    
    void setValor(const std::string& valor) {
        validar(valor);
        this->valor = valor;
    }
    
    std::string getValor() const {
        return valor;
    }
};

#endif // CODIGO_H