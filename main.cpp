#include <iostream>
#include "dominios/TesteCodigo.h"
#include "dominios/TesteCodigoNegociacao.h"
#include "dominios/TesteCPF.h"
#include "dominios/TesteData.h"
#include "dominios/TesteDinheiro.h"
#include "dominios/TesteNome.h"
#include "dominios/TestePerfil.h"
#include "dominios/TesteQuantidade.h"
#include "dominios/TesteSenha.h"
#include "entidades/TesteCarteira.h"
#include "entidades/TesteConta.h"
#include "entidades/TesteOrdem.h"

int main() {
    std::cout << "=== INÍCIO DOS TESTES DE DOMÍNIOS ===" << std::endl;
    
    // Executando testes de domínio
    TesteCodigo::executar();
    TesteCodigoNegociacao::executar();
    TesteCPF::executar();
    TesteData::executar();
    TesteDinheiro::executar();
    TesteNome::executar();
    TestePerfil::executar();
    TesteQuantidade::executar();
    TesteSenha::executar();
    
    std::cout << "\n=== INÍCIO DOS TESTES DE ENTIDADES ===" << std::endl;
    
    // Executando testes de entidades
    TesteCarteira::executar();
    TesteConta::executar();
    TesteOrdem::executar();
    
    std::cout << "\n=== TODOS OS TESTES FORAM CONCLUÍDOS ===" << std::endl;
    
    return 0;
}