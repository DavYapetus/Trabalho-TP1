#ifndef TESTECONTA_H
#define TESTECONTA_H

#include "Conta.h"
#include <iostream>

class TesteConta {
public:
    static void executar() {
        testarCenarioValido();
        testarMetodosAcesso();
    }
    
private:
    static void testarCenarioValido() {
        Conta conta;
        try {
            conta.setCPF("123.456.789-09");
            conta.setNome("Joao Silva");
            conta.setSenha("A1b$Cd");
            conta.setSaldo(1000.00);
            std::cout << "Teste Conta (Criação): OK" << std::endl;
        } catch (...) {
            std::cerr << "Teste Conta (Criação): FALHOU" << std::endl;
        }
    }
    
    static void testarMetodosAcesso() {
        Conta conta;
        conta.setCPF("987.654.321-00");
        if (conta.getCPF() == "987.654.321-00") {
            std::cout << "Teste Conta (Métodos Acesso): OK" << std::endl;
        } else {
            std::cerr << "Teste Conta (Métodos Acesso): FALHOU" << std::endl;
        }
    }
};

#endif