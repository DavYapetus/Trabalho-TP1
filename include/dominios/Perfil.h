#ifndef PERFIL_H
#define PERFIL_H

#include <stdexcept>
#include <string>

class Perfil {
private:
    std::string valor;
    
    bool validar(const std::string& perfil) {
        return perfil == "Conservador" || perfil == "Moderado" || perfil == "Agressivo";
    }
    
public:
    void setValor(const std::string& novoValor) {
        if (!validar(novoValor)) {
            throw std::invalid_argument("Perfil inválido");
        }
        valor = novoValor;
    }
    
    std::string getValor() const { return valor; }
};

#endif