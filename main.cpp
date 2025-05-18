#include <iostream>
#include "TesteCodigo.h"
#include "TesteConta.h"
// Incluir outros testes aqui

int main() {
    std::cout << "Executando testes de domínio:" << std::endl;
    TesteCodigo::executar();
    // Executar outros testes de domínio
    
    std::cout << "\nExecutando testes de entidade:" << std::endl;
    TesteConta::executar();
    // Executar outros testes de entidade
    
    return 0;
}