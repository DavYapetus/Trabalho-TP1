#ifndef DATA_H
#define DATA_H

#include <stdexcept>
#include <string>

class Data {
private:
    std::string valor;
    
    bool isBissexto(int ano) {
        return (ano % 400 == 0) || (ano % 100 != 0 && ano % 4 == 0);
    }
    
    bool validar(const std::string& data) {
        if (data.length() != 8) return false;
        
        int dia = stoi(data.substr(6, 2));
        int mes = stoi(data.substr(4, 2));
        int ano = stoi(data.substr(0, 4));
        
        if (mes < 1 || mes > 12) return false;
        if (dia < 1) return false;
        
        if (mes == 2) {
            if (isBissexto(ano)) {
                if (dia > 29) return false;
            } else {
                if (dia > 28) return false;
            }
        } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
            if (dia > 30) return false;
        } else {
            if (dia > 31) return false;
        }
        
        return true;
    }
    
public:
    void setValor(const std::string& novoValor) {
        if (!validar(novoValor)) {
            throw std::invalid_argument("Data inválida");
        }
        valor = novoValor;
    }
    
    std::string getValor() const { return valor; }
};

#endif