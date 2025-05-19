#include "../../include/entidades/Carteira.h"
#include "../../include/entidades/Ordem.h"

// Aluno: Davy Viana Guimarães - 211055559
// Implementação do construtor
Carteira::Carteira(const Codigo& codigo, const Nome& nome, const Perfil& perfil)
    : codigo(codigo), nome(nome), perfil(perfil), saldo(0.0) {}

// Implementação do cálculo de saldo
void Carteira::calcularSaldo() {
    double total = 0.0;
    for (const auto& ordem : ordens) {
        total += ordem->getPreco().getValor() * ordem->getQuantidade().getValor();
    }
    saldo = Dinheiro(total);
}

// Implementação da adição de ordem
void Carteira::adicionarOrdem(std::shared_ptr<Ordem> ordem) {
    ordens.push_back(ordem);
    ordem->vincularCarteira(shared_from_this());
    calcularSaldo();
}

// Implementação da remoção de ordem
void Carteira::removerOrdem(const Codigo& codigoOrdem) {
    auto it = std::find_if(ordens.begin(), ordens.end(),
        [&codigoOrdem](const std::shared_ptr<Ordem>& o) {
            return o->getCodigo().getValor() == codigoOrdem.getValor();
        });
    
    if (it != ordens.end()) {
        ordens.erase(it);
        calcularSaldo();
    }
}