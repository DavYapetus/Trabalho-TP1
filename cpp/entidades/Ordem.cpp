#include "../../include/entidades/Ordem.h"

// Implementação do construtor
Ordem::Ordem(const Codigo& codigo, const CodigoNegociacao& codigoNegociacao,
             const Data& data, const Dinheiro& preco, const Quantidade& quantidade)
    : codigo(codigo), codigoNegociacao(codigoNegociacao), 
      data(data), preco(preco), quantidade(quantidade) {}

// Implementação da vinculação com carteira
void Ordem::vincularCarteira(std::shared_ptr<Carteira> carteira) {
    if (this->carteira.lock()) {
        throw std::runtime_error("Ordem já vinculada a uma carteira");
    }
    this->carteira = carteira;
}