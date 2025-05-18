#include "../../include/entidades/Conta.h"
#include "../../include/entidades/Carteira.h"

// Implementação do construtor
Conta::Conta(const CPF& cpf, const Nome& nome, const Senha& senha) 
    : cpf(cpf), nome(nome), senha(senha), saldo(0.0) {}

// Implementação do cálculo de saldo
void Conta::calcularSaldo() {
    double total = 0.0;
    for (const auto& carteira : carteiras) {
        total += carteira->getSaldo().getValor();
    }
    saldo = Dinheiro(total);
}

// Implementação da adição de carteira
void Conta::adicionarCarteira(std::shared_ptr<Carteira> carteira) {
    carteiras.push_back(carteira);
    calcularSaldo();
}

// Implementação da remoção de carteira
void Conta::removerCarteira(const Codigo& codigoCarteira) {
    auto it = std::find_if(carteiras.begin(), carteiras.end(),
        [&codigoCarteira](const std::shared_ptr<Carteira>& c) {
            return c->getCodigo().getValor() == codigoCarteira.getValor();
        });
    
    if (it != carteiras.end()) {
        if (!(*it)->getOrdens().empty()) {
            throw std::runtime_error("Não é possível remover carteira com ordens associadas");
        }
        carteiras.erase(it);
        calcularSaldo();
    }
}