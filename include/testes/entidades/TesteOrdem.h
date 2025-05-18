#ifndef TesteOrdem_h
#define TesteOrdem_h

#include "../../entidades/Ordem.h"

// Aluno: Davy Viana Guimarães 211055559

/// @brief Classe que testa a validação da Entidade de Ordem.

class TesteOrdem
{
private:
    const static std::string CODIGO_VALIDO;
    const static std::string CODIGO_NEGOCIACAO_VALIDO;
    const static std::string DATA_VALIDA;
    const static double PRECO_VALIDO;
    const static int QUANTIDADE_VALIDA;

    Ordem *ordem;
    int status;

    void setUp();
    void tearDown();
    void testarSucesso();
    void testarCodigoInvalido();
    void testarCodigoNegociacaoInvalido();
    void testarDataInvalida();
    void testarPrecoInvalido();
    void testarQuantidadeInvalida();

public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;

    int run();
};

#endif // TesteOrdem_h