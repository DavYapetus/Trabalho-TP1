#ifndef TESTE_CODIGO_H
#define TESTE_CODIGO_H

#include <string>
#include "../../dominios/Codigo.h"

class TesteCodigo {
private:
    const static std::string VALIDO;
    const static std::string INVALIDO_CURTO;
    const static std::string INVALIDO_LETRAS;

    int status;

    void testarValido();
    void testarInvalido();

public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;

    int run();
};

#endif // TESTE_CODIGO_H