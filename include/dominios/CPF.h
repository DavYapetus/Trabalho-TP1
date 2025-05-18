#ifndef CPF_H
#define CPF_H

#include <string>
#include <stdexcept>
#include <algorithm>

class CPF {
private:
    std::string valor;
    
    void validar(const std::string& valor) {
        std::string cpf = valor;
        cpf.erase(std::remove(cpf.begin(), cpf.end(), '.'), cpf.end();
        cpf.erase(std::remove(cpf.begin(), cpf.end(), '-'), cpf.end();
        
        if (cpf.length() != 11 || 
            cpf == "00000000000" || 
            cpf == "11111111111" ||
            cpf == "22222222222" ||
            cpf == "33333333333" ||
            cpf == "44444444444" ||
            cpf == "55555555555" ||
            cpf == "66666666666" ||
            cpf == "77777777777" ||
            cpf == "88888888888" ||
            cpf == "99999999999") {
            throw std::invalid_argument("CPF inválido");
        }
        
        int temp, digito1 = 0, digito2 = 0;
        for (int i = 0; i < 9; i++) {
            temp = cpf[i] - '0';
            digito1 += temp * (10 - i);
            digito2 += temp * (11 - i);
        }
        
        digito1 = (digito1 * 10) % 11;
        digito1 = (digito1 == 10) ? 0 : digito1;
        
        digito2 += digito1 * 2;
        digito2 = (digito2 * 10) % 11;
        digito2 = (digito2 == 10) ? 0 : digito2;
        
        if (digito1 != (cpf[9] - '0') || digito2 != (cpf[10] - '0')) {
            throw std::invalid_argument("CPF inválido: dígitos verificadores incorretos");
        }
    }

public:
    CPF(const std::string& valor) {
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

#endif // CPF_H