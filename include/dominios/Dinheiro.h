#ifndef DINHEIRO_H
#define DINHEIRO_H

#include <stdexcept>
#include <string>
// Aluno: Ricardo Siqueira Rubens - 232011430

class Dinheiro {
private:
    double valor;
    
    bool validar(double valor) {
        return valor >= 0.01 && valor <= 1000000.00;
    }
    
public:
    void setValor(double novoValor) {
        if (!validar(novoValor)) {
            throw std::invalid_argument("Valor monetário inválido");
        }
        valor = novoValor;
    }
    
    double getValor() const { return valor; }
};

#endif