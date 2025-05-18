#include "../include/testes/entidades/TesteCarteira.h"

using namespace std;

// Valores válidos
const string TesteCarteira::CODIGO_VALIDO = "CART123";
const string TesteCarteira::NOME_VALIDO = "Minha Carteira";
const string TesteCarteira::PERFIL_VALIDO = "MODERADO";
const double TesteCarteira::SALDO_VALIDO = 5000.0;

// Valores inválidos
const string TesteCarteira::CODIGO_INVALIDO = "";
const string TesteCarteira::NOME_INVALIDO = "Inv@lido";
const string TesteCarteira::PERFIL_INVALIDO = "INEXISTENTE";
const double TesteCarteira::SALDO_INVALIDO = -1.0;

void TesteCarteira::setUp() {
    carteira = new Carteira();
    status = SUCESSO;
}

void TesteCarteira::tearDown() {
    delete carteira;
}

void TesteCarteira::testarSucesso() {
    try {
        carteira->setCodigo(CODIGO_VALIDO);
        carteira->setNome(NOME_VALIDO);
        carteira->setPerfil(PERFIL_VALIDO);
        carteira->setSaldo(SALDO_VALIDO);
        
        if (carteira->getCodigo() != CODIGO_VALIDO ||
            carteira->getNome() != NOME_VALIDO ||
            carteira->getPerfil() != PERFIL_VALIDO ||
            carteira->getSaldo() != SALDO_VALIDO) {
            status = FALHA;
        }
    } catch (...) {
        status = FALHA;
    }
}

void TesteCarteira::testarCodigoInvalido() {
    try {
        carteira->setCodigo(CODIGO_INVALIDO);
        status = FALHA;
    } catch (...) {
        // OK
    }
}

void TesteCarteira::testarNomeInvalido() {
    try {
        carteira->setNome(NOME_INVALIDO);
        status = FALHA;
    } catch (...) {
        // OK
    }
}

void TesteCarteira::testarPerfilInvalido() {
    try {
        carteira->setPerfil(PERFIL_INVALIDO);
        status = FALHA;
    } catch (...) {
        // OK
    }
}

void TesteCarteira::testarSaldoInvalido() {
    try {
        carteira->setSaldo(SALDO_INVALIDO);
        status = FALHA;
    } catch (...) {
        // OK
    }
}

int TesteCarteira::run() {
    setUp();
    testarSucesso();
    testarCodigoInvalido();
    testarNomeInvalido();
    testarPerfilInvalido();
    testarSaldoInvalido();
    tearDown();
    return status;
}