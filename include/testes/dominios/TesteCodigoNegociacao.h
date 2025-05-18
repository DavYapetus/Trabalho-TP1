#ifndef TESTE_CODIGO_NEGOCIACAO_H
#define TESTE_CODIGO_NEGOCIACAO_H

#include <string>
#include "../../dominios/CodigoNegociacao.h"

class TesteCodigoNegociacao {
private:
    const static std::string VALIDO;
    const static std::string INVALIDO_LONGO;
    const static std::string INVALIDO_CARACTERE;

    int status;

    void testarValido();
    void testarInvalido();

public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;

    int run();
};

#endif // TESTE_CODIGO_NEGOCIACAO_H