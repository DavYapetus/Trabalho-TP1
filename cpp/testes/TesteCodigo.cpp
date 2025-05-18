#ifndef TESTECODIGO_H
#define TESTECODIGO_H

#include "Codigo.h"
#include <iostream>

class TesteCodigo {
public:
    static void executar() {
        testarCenarioValido();
        testarCenarioInvalido();
    }
    
private:
    static void testarCenarioValido() {
        Codigo codigo;
        try {
            codigo.setValor("12345");
            std::cout << "Teste Codigo (Válido): OK" << std::endl;
        } catch (...) {
            std::cerr << "Teste Codigo (Válido): FALHOU" << std::endl;
        }
    }
    
    static void testarCenarioInvalido() {
        Codigo codigo;
        try {
            codigo.setValor("1234A");
            std::cerr << "Teste Codigo (Inválido): FALHOU (não detectou erro)" << std::endl;
        } catch (std::invalid_argument&) {
            std::cout << "Teste Codigo (Inválido): OK (erro detectado)" << std::endl;
        }
    }
};

#endif