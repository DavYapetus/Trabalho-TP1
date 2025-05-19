#ifndef TESTE_QUANTIDADE_H
#define TESTE_QUANTIDADE_H

#include <string>
#include "../../dominios/Quantidade.h"
// Aluno: Juliano dos Santos da Costa - 232003590

class TesteQuantidade {
private:
    const static int VALIDO;
    const static int VALIDO_MIN;
    const static int VALIDO_MAX;
    const static int INVALIDO_ZERO;
    const static int INVALIDO_ACIMA;

    int status;

    void testarValido();
    void testarInvalido();

public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;

    int run();
};

#endif // TESTE_QUANTIDADE_H