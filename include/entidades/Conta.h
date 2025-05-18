#ifndef CONTA_H
#define CONTA_H

#include "CPF.h"
#include "Nome.h"
#include "Senha.h"
#include "Dinheiro.h"

class Conta {
private:
    CPF cpf;
    Nome nome;
    Senha senha;
    Dinheiro saldo;
    
public:
    void setCPF(const std::string& cpfStr) { cpf.setValor(cpfStr); }
    std::string getCPF() const { return cpf.getValor(); }
    
    void setNome(const std::string& nomeStr) { nome.setValor(nomeStr); }
    std::string getNome() const { return nome.getValor(); }
    
    void setSenha(const std::string& senhaStr) { senha.setValor(senhaStr); }
    std::string getSenha() const { return senha.getValor(); }
    
    void setSaldo(double valor) { saldo.setValor(valor); }
    double getSaldo() const { return saldo.getValor(); }
};

#endif