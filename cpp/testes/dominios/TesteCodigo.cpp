#include "../include/testes/dominios/TesteCodigo.h"

const std::string TesteCodigo::VALIDO = "12345";
const std::string TesteCodigo::INVALIDO_CURTO = "1234";
const std::string TesteCodigo::INVALIDO_LETRAS = "12A45";

void TesteCodigo::testarValido() {
    try {
        Codigo codigo(VALIDO);
        if (codigo.getValor() != VALIDO) {
            status = FALHA;
        }
    } catch (...) {
        status = FALHA;
    }
}

void TesteCodigo::testarInvalido() {
    try {
        Codigo codigo(INVALIDO_CURTO);
        status = FALHA;
    } catch (...) {}

    try {
        Codigo codigo(INVALIDO_LETRAS);
        status = FALHA;
    } catch (...) {}
}

int TesteCodigo::run() {
    status = SUCESSO;
    testarValido();
    testarInvalido();
    return status;
}
