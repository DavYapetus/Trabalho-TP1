#include "../include/testes/dominios/TesteNome.h"

const std::string TesteNome::VALIDO = "Joao Silva";
const std::string TesteNome::INVALIDO_LONGO = "Nome Muito Longo Para Ser Valido";
const std::string TesteNome::INVALIDO_ESPACOS = "Joao  Silva";

void TesteNome::testarValido() {
    try {
        Nome nome(VALIDO);
        if (nome.getValor() != VALIDO) {
            status = FALHA;
        }
    } catch (...) {
        status = FALHA;
    }
}

void TesteNome::testarInvalido() {
    try {
        Nome nome(INVALIDO_LONGO);
        status = FALHA;
    } catch (...) {}

    try {
        Nome nome(INVALIDO_ESPACOS);
        status = FALHA;
    } catch (...) {}
}

int TesteNome::run() {
    status = SUCESSO;
    testarValido();
    testarInvalido();
    return status;
}