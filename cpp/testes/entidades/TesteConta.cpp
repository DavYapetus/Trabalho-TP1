#include "../include/testes/entidades/TesteConta.h"

// Aluno: Ricardo Siqueira Rubens - 232011430
// Aluno: William Alves Virissimo - 232031307
using namespace std;

// Valores válidos
const string TesteConta::CPF_VALIDO = "123.456.789-09";
const string TesteConta::NOME_VALIDO = "Joao Silva";
const string TesteConta::SENHA_VALIDA = "Senha123@";
const double TesteConta::SALDO_VALIDO = 1000.0;

// Valores inválidos
const string TesteConta::CPF_INVALIDO = "111.111.111-11";
const string TesteConta::NOME_INVALIDO = "Jo1o S1lv@";
const string TesteConta::SENHA_INVALIDA = "senhafraca";
const double TesteConta::SALDO_INVALIDO = -100.0;

void TesteConta::setUp() {
    conta = new Conta();
    status = SUCESSO;
}

void TesteConta::tearDown() {
    delete conta;
}

void TesteConta::testarSucesso() {
    try {
        conta->setCPF(CPF_VALIDO);
        conta->setNome(NOME_VALIDO);
        conta->setSenha(SENHA_VALIDA);
        conta->setSaldo(SALDO_VALIDO);
        
        if (conta->getCPF() != CPF_VALIDO ||
            conta->getNome() != NOME_VALIDO ||
            conta->getSenha() != SENHA_VALIDA ||
            conta->getSaldo() != SALDO_VALIDO) {
            status = FALHA;
        }
    } catch (...) {
        status = FALHA;
    }
}

void TesteConta::testarCpfInvalido() {
    try {
        conta->setCPF(CPF_INVALIDO);
        status = FALHA; // Se não lançar exceção, falhou
    } catch (...) {
        // Esperado que lance exceção
    }
}

void TesteConta::testarNomeInvalido() {
    try {
        conta->setNome(NOME_INVALIDO);
        status = FALHA;
    } catch (...) {
        // OK
    }
}

void TesteConta::testarSenhaInvalida() {
    try {
        conta->setSenha(SENHA_INVALIDA);
        status = FALHA;
    } catch (...) {
        // OK
    }
}

void TesteConta::testarSaldoInvalido() {
    try {
        conta->setSaldo(SALDO_INVALIDO);
        status = FALHA;
    } catch (...) {
        // OK
    }
}

int TesteConta::run() {
    setUp();
    testarSucesso();
    testarCpfInvalido();
    testarNomeInvalido();
    testarSenhaInvalida();
    testarSaldoInvalido();
    tearDown();
    return status;
}