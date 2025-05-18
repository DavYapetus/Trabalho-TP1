#include "../include/testes/dominios/TesteSenha.h"

const std::string TesteSenha::VALIDA = "A1b#C2";
const std::string TesteSenha::INVALIDA_CURTA = "A1b#C";
const std::string TesteSenha::INVALIDA_SEM_MAIUSCULA = "a1b#c2";
const std::string TesteSenha::INVALIDA_SIMBOLO = "A1b2C3";

void TesteSenha::testarValido() {
    try {
        Senha senha(VALIDA);
        if (senha.getValor() != VALIDA) {
            status = FALHA;
        }
    } catch (...) {
        status = FALHA;
    }
}

void TesteSenha::testarInvalido() {
    try {
        Senha senha(INVALIDA_CURTA);
        status = FALHA;
    } catch (...) {}

    try {
        Senha senha(INVALIDA_SEM_MAIUSCULA);
        status = FALHA;
    } catch (...) {}

    try {
        Senha senha(INVALIDA_SIMBOLO);
        status = FALHA;
    } catch (...) {}
}

int TesteSenha::run() {
    status = SUCESSO;
    testarValido();
    testarInvalido();
    return status;
}