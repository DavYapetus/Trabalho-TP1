#ifndef TesteConta_h
#define TesteConta_h

#include "../../entidades/Conta.h"

/// @brief Classe que testa a validação da Entidade de Conta.

class TesteConta
{
private:
    const static std::string CPF_VALIDO;
    const static std::string NOME_VALIDO;
    const static std::string SENHA_VALIDA;
    const static double SALDO_VALIDO;

    Conta *conta;
    int status;

    void setUp();
    void tearDown();
    void testarSucesso();
    void testarCpfInvalido();
    void testarNomeInvalido();
    void testarSenhaInvalida();
    void testarSaldoInvalido();

public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;

    int run();
};

#endif // TesteConta_h