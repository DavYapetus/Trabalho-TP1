#ifndef ORDEM_H
#define ORDEM_H

#include "Codigo.h"
#include "CodigoNegociacao.h"
#include "Data.h"
#include "Dinheiro.h"
#include "Quantidade.h"
// Aluno: Juliano dos Santos da Costa - 232003590

class Ordem {
private:
    Codigo codigo;
    CodigoNegociacao codigoNegociacao;
    Data data;
    Dinheiro preco;
    Quantidade quantidade;
    
public:
    void setCodigo(const std::string& codigoStr) { codigo.setValor(codigoStr); }
    std::string getCodigo() const { return codigo.getValor(); }
    
    void setCodigoNegociacao(const std::string& codigoStr) { codigoNegociacao.setValor(codigoStr); }
    std::string getCodigoNegociacao() const { return codigoNegociacao.getValor(); }
    
    void setData(const std::string& dataStr) { data.setValor(dataStr); }
    std::string getData() const { return data.getValor(); }
    
    void setPreco(double valor) { preco.setValor(valor); }
    double getPreco() const { return preco.getValor(); }
    
    void setQuantidade(int qtd) { quantidade.setValor(qtd); }
    int getQuantidade() const { return quantidade.getValor(); }
};

#endif