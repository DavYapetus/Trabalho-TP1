#ifndef TESTE_NOME_H
#define TESTE_NOME_H

#include <string>
#include "../../dominios/Nome.h"


// Aluno: William Alves Virissimo - 232031307
class TesteNome {
private:
    const static std::string VALIDO;
    const static std::string INVALIDO_LONGO;
    const static std::string INVALIDO_ESPACOS;

    int status;

    void testarValido();
    void testarInvalido();

public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;

    int run();
};

#endif // TESTE_NOME_H