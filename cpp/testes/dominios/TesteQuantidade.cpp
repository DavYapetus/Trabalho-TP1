#include "../include/testes/dominios/TesteQuantidade.h"
// Aluno: Juliano dos Santos da Costa - 232003590

const int TesteQuantidade::VALIDO = 100;
const int TesteQuantidade::VALIDO_MIN = 1;
const int TesteQuantidade::VALIDO_MAX = 1000000;
const int TesteQuantidade::INVALIDO_ZERO = 0;
const int TesteQuantidade::INVALIDO_ACIMA = 1000001;

void TesteQuantidade::testarValido() {
    try {
        Quantidade qtd(VALIDO);
        if (qtd.getValor() != VALIDO) {
            status = FALHA;
        }
        
        Quantidade min(VALIDO_MIN);
        Quantidade max(VALIDO_MAX);
    } catch (...) {
        status = FALHA;
    }
}

void TesteQuantidade::testarInvalido() {
    try {
        Quantidade qtd(INVALIDO_ZERO);
        status = FALHA;
    } catch (...) {}

    try {
        Quantidade qtd(INVALIDO_ACIMA);
        status = FALHA;
    } catch (...) {}
}

int TesteQuantidade::run() {
    status = SUCESSO;
    testarValido();
    testarInvalido();
    return status;
}