#include "../include/testes/dominios/TesteDinheiro.h"
// Aluno: Ricardo Siqueira Rubens - 232011430

const double TesteDinheiro::VALIDO = 1500.75;
const double TesteDinheiro::VALIDO_MIN = 0.01;
const double TesteDinheiro::VALIDO_MAX = 1000000.00;
const double TesteDinheiro::INVALIDO_NEGATIVO = -100.0;
const double TesteDinheiro::INVALIDO_ACIMA = 1000001.00;

void TesteDinheiro::testarValido() {
    try {
        Dinheiro dinheiro(VALIDO);
        if (dinheiro.getValor() != VALIDO) {
            status = FALHA;
        }
        
        Dinheiro min(VALIDO_MIN);
        Dinheiro max(VALIDO_MAX);
    } catch (...) {
        status = FALHA;
    }
}

void TesteDinheiro::testarInvalido() {
    try {
        Dinheiro dinheiro(INVALIDO_NEGATIVO);
        status = FALHA;
    } catch (...) {}

    try {
        Dinheiro dinheiro(INVALIDO_ACIMA);
        status = FALHA;
    } catch (...) {}
}

int TesteDinheiro::run() {
    status = SUCESSO;
    testarValido();
    testarInvalido();
    return status;
}