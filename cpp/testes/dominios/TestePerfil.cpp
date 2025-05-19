#include "../include/testes/dominios/TestePerfil.h"

// Aluno: William Alves Virissimo - 232031307

const std::string TestePerfil::VALIDO = "Conservador";
const std::string TestePerfil::VALIDO2 = "Moderado";
const std::string TestePerfil::VALIDO3 = "Agressivo";
const std::string TestePerfil::INVALIDO = "Arriscado";

void TestePerfil::testarValido() {
    try {
        Perfil perfil(VALIDO);
        if (perfil.getValor() != VALIDO) {
            status = FALHA;
        }
        
        Perfil perfil2(VALIDO2);
        Perfil perfil3(VALIDO3);
    } catch (...) {
        status = FALHA;
    }
}

void TestePerfil::testarInvalido() {
    try {
        Perfil perfil(INVALIDO);
        status = FALHA;
    } catch (...) {}
}

int TestePerfil::run() {
    status = SUCESSO;
    testarValido();
    testarInvalido();
    return status;
}