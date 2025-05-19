#ifndef NOME_H
#define NOME_H

#include <stdexcept>
#include <string>
#include <cctype>

// Aluno: William Alves Virissimo - 232031307

class Nome {
private:
    std::string valor;
    
    bool validar(const std::string& nome) {
        if (nome.empty() || nome.length() > 20) return false;
        if (nome.find("  ") != std::string::npos) return false;
        
        for (char c : nome) {
            if (!isalnum(c) && c != ' ') return false;
        }
        return true;
    }
    
public:
    void setValor(const std::string& novoValor) {
        if (!validar(novoValor)) {
            throw std::invalid_argument("Nome inválido");
        }
        valor = novoValor;
    }
    
    std::string getValor() const { return valor; }
};

#endif