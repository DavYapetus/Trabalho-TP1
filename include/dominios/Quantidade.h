#ifndef QUANTIDADE_H
#define QUANTIDADE_H

#include <stdexcept>
// Aluno: Juliano dos Santos da Costa - 232003590

class Quantidade {
private:
    int valor;
    
    bool validar(int valor) {
        return valor >= 1 && valor <= 1000000;
    }
    
public:
    void setValor(int novoValor) {
        if (!validar(novoValor)) {
            throw std::invalid_argument("Quantidade inválida");
        }
        valor = novoValor;
    }
    
    int getValor() const { return valor; }
};

#endif