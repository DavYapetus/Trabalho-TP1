#ifndef TESTE_DATA_H
#define TESTE_DATA_H

#include <string>
#include "../../dominios/Data.h"
// Aluno: Ricardo Siqueira Rubens - 232011430

class TesteData {
private:
    const static std::string VALIDA;
    const static std::string INVALIDA_FORMATO;
    const static std::string INVALIDA_BISSEXTO;

    int status;

    void testarValido();
    void testarInvalido();

public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;

    int run();
};

#endif // TESTE_DATA_H