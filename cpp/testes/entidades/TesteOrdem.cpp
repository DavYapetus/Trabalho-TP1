#include "../include/testes/entidades/TesteOrdem.h"

using namespace std;
// Aluno: Juliano dos Santos da Costa - 232003590

// Valores válidos
const string TesteOrdem::CODIGO_VALIDO = "ORD123";
const string TesteOrdem::CODIGO_NEGOCIACAO_VALIDO = "PETR4";
const string TesteOrdem::DATA_VALIDA = "15/08/2023";
const double TesteOrdem::PRECO_VALIDO = 150.75;
const int TesteOrdem::QUANTIDADE_VALIDA = 100;

// Valores inválidos
const string TesteOrdem::CODIGO_INVALIDO = "";
const string TesteOrdem::CODIGO_NEGOCIACAO_INVALIDO = "INVALIDO";
const string TesteOrdem::DATA_INVALIDA = "32/13/2023";
const double TesteOrdem::PRECO_INVALIDO = -10.0;
const int TesteOrdem::QUANTIDADE_INVALIDA = 0;

void TesteOrdem::setUp() {
    ordem = new Ordem();
    status = SUCESSO;
}

void TesteOrdem::tearDown() {
    delete ordem;
}

void TesteOrdem::testarSucesso() {
    try {
        ordem->setCodigo(CODIGO_VALIDO);
        ordem->setCodigoNegociacao(CODIGO_NEGOCIACAO_VALIDO);
        ordem->setData(DATA_VALIDA);
        ordem->setPreco(PRECO_VALIDO);
        ordem->setQuantidade(QUANTIDADE_VALIDA);
        
        if (ordem->getCodigo() != CODIGO_VALIDO ||
            ordem->getCodigoNegociacao() != CODIGO_NEGOCIACAO_VALIDO ||
            ordem->getData() != DATA_VALIDA ||
            ordem->getPreco() != PRECO_VALIDO ||
            ordem->getQuantidade() != QUANTIDADE_VALIDA) {
            status = FALHA;
        }
    } catch (...) {
        status = FALHA;
    }
}

void TesteOrdem::testarCodigoInvalido() {
    try {
        ordem->setCodigo(CODIGO_INVALIDO);
        status = FALHA;
    } catch (...) {
        // OK
    }
}

void TesteOrdem::testarCodigoNegociacaoInvalido() {
    try {
        ordem->setCodigoNegociacao(CODIGO_NEGOCIACAO_INVALIDO);
        status = FALHA;
    } catch (...) {
        // OK
    }
}

void TesteOrdem::testarDataInvalida() {
    try {
        ordem->setData(DATA_INVALIDA);
        status = FALHA;
    } catch (...) {
        // OK
    }
}

void TesteOrdem::testarPrecoInvalido() {
    try {
        ordem->setPreco(PRECO_INVALIDO);
        status = FALHA;
    } catch (...) {
        // OK
    }
}

void TesteOrdem::testarQuantidadeInvalida() {
    try {
        ordem->setQuantidade(QUANTIDADE_INVALIDA);
        status = FALHA;
    } catch (...) {
        // OK
    }
}

int TesteOrdem::run() {
    setUp();
    testarSucesso();
    testarCodigoInvalido();
    testarCodigoNegociacaoInvalido();
    testarDataInvalida();
    testarPrecoInvalido();
    testarQuantidadeInvalida();
    tearDown();
    return status;
}