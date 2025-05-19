#ifndef TesteCarteira_h
#define TesteCarteira_h

#include "../../entidades/Carteira.h"

// Aluno: Davy Viana Guimarães - 211055559
/// @brief Classe que testa a validação da Entidade de Carteira.

class TesteCarteira
{
private:
    const static std::string CODIGO_VALIDO;
    const static std::string NOME_VALIDO;
    const static std::string PERFIL_VALIDO;
    const static double SALDO_VALIDO;

    Carteira *carteira;
    int status;

    void setUp();
    void tearDown();
    void testarSucesso();
    void testarCodigoInvalido();
    void testarNomeInvalido();
    void testarPerfilInvalido();
    void testarSaldoInvalido();

public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;

    int run();
};

#endif // TesteCarteira_h