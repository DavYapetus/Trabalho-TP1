#ifndef TESTE_CPF_H
#define TESTE_CPF_H

#include <string>
#include "../../dominios/CPF.h"

// Aluno: Davy Viana Guimarães - 211055559
class TesteCPF {
private:
    const static std::string VALIDO;
    const static std::string INVALIDO_FORMATO;
    const static std::string INVALIDO_DIGITO;

    int status;

    void testarValido();
    void testarInvalido();

public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;

    int run();
};

#endif // TESTE_CPF_H