#ifndef TESTE_PERFIL_H
#define TESTE_PERFIL_H

#include <string>
#include "../../dominios/Perfil.h"
// Aluno: William Alves Virissimo - 232031307

class TestePerfil {
private:
    const static std::string VALIDO;
    const static std::string VALIDO2;
    const static std::string VALIDO3;
    const static std::string INVALIDO;

    int status;

    void testarValido();
    void testarInvalido();

public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;

    int run();
};

#endif // TESTE_PERFIL_H