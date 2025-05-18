#ifndef TESTE_SENHA_H
#define TESTE_SENHA_H

#include <string>
#include "../../dominios/Senha.h"

class TesteSenha {
private:
    const static std::string VALIDA;
    const static std::string INVALIDA_CURTA;
    const static std::string INVALIDA_SEM_MAIUSCULA;
    const static std::string INVALIDA_SIMBOLO;

    int status;

    void testarValido();
    void testarInvalido();

public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;

    int run();
};

#endif // TESTE_SENHA_H