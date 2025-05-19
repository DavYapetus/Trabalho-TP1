#ifndef TESTE_DINHEIRO_H
#define TESTE_DINHEIRO_H

#include <string>
#include "../../dominios/Dinheiro.h"
// Aluno: Ricardo Siqueira Rubens - 232011430

class TesteDinheiro {
private:
    const static double VALIDO;
    const static double VALIDO_MIN;
    const static double VALIDO_MAX;
    const static double INVALIDO_NEGATIVO;
    const static double INVALIDO_ACIMA;

    int status;

    void testarValido();
    void testarInvalido();

public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;

    int run();
};

#endif // TESTE_DINHEIRO_H