#include "../include/testes/dominios/TesteData.h"

// Aluno: Ricardo Siqueira Rubens - 232011430

const std::string TesteData::VALIDA = "20230815";
const std::string TesteData::INVALIDA_FORMATO = "15/08/2023";
const std::string TesteData::INVALIDA_BISSEXTO = "20230229";

void TesteData::testarValido() {
    try {
        Data data(VALIDA);
        if (data.getValor() != VALIDA) {
            status = FALHA;
        }
    } catch (...) {
        status = FALHA;
    }
}

void TesteData::testarInvalido() {
    try {
        Data data(INVALIDA_FORMATO);
        status = FALHA;
    } catch (...) {}

    try {
        Data data(INVALIDA_BISSEXTO);
        status = FALHA;
    } catch (...) {}
}

int TesteData::run() {
    status = SUCESSO;
    testarValido();
    testarInvalido();
    return status;
}