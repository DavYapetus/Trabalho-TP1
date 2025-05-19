#include "../include/testes/dominios/TesteCPF.h"

// Aluno: Davy Viana Guimarães - 211055559
const std::string TesteCPF::VALIDO = "123.456.789-09";
const std::string TesteCPF::INVALIDO_FORMATO = "12345678909";
const std::string TesteCPF::INVALIDO_DIGITO = "123.456.789-00";

void TesteCPF::testarValido() {
    try {
        CPF cpf(VALIDO);
        if (cpf.getValor() != VALIDO) {
            status = FALHA;
        }
    } catch (...) {
        status = FALHA;
    }
}

void TesteCPF::testarInvalido() {
    try {
        CPF cpf(INVALIDO_FORMATO);
        status = FALHA;
    } catch (...) {}

    try {
        CPF cpf(INVALIDO_DIGITO);
        status = FALHA;
    } catch (...) {}
}

int TesteCPF::run() {
    status = SUCESSO;
    testarValido();
    testarInvalido();
    return status;
}