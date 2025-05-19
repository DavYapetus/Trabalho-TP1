#include "../include/testes/dominios/TesteCodigoNegociacao.h"

// Aluno: Davy Viana Guimarães - 211055559
const std::string TesteCodigoNegociacao::VALIDO = "PETR4 BZ";
const std::string TesteCodigoNegociacao::INVALIDO_LONGO = "CODIGO MUITO LONGO";
const std::string TesteCodigoNegociacao::INVALIDO_CARACTERE = "PETR4@BZ";

void TesteCodigoNegociacao::testarValido() {
    try {
        CodigoNegociacao cn(VALIDO);
        if (cn.getValor() != VALIDO) {
            status = FALHA;
        }
    } catch (...) {
        status = FALHA;
    }
}

void TesteCodigoNegociacao::testarInvalido() {
    try {
        CodigoNegociacao cn(INVALIDO_LONGO);
        status = FALHA;
    } catch (...) {}

    try {
        CodigoNegociacao cn(INVALIDO_CARACTERE);
        status = FALHA;
    } catch (...) {}
}

int TesteCodigoNegociacao::run() {
    status = SUCESSO;
    testarValido();
    testarInvalido();
    return status;
}
