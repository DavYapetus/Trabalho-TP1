#ifndef CARTEIRA_H
#define CARTEIRA_H

#include "Codigo.h"
#include "Nome.h"
#include "Perfil.h"
#include "Dinheiro.h"

class Carteira {
private:
    Codigo codigo;
    Nome nome;
    Perfil perfil;
    Dinheiro saldo;
    
public:
    void setCodigo(const std::string& codigoStr) { codigo.setValor(codigoStr); }
    std::string getCodigo() const { return codigo.getValor(); }
    
    void setNome(const std::string& nomeStr) { nome.setValor(nomeStr); }
    std::string getNome() const { return nome.getValor(); }
    
    void setPerfil(const std::string& perfilStr) { perfil.setValor(perfilStr); }
    std::string getPerfil() const { return perfil.getValor(); }
    
    void setSaldo(double valor) { saldo.setValor(valor); }
    double getSaldo() const { return saldo.getValor(); }
};

#endif