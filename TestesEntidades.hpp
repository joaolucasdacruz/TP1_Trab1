#ifndef TESTES_ENTIDADES_HPP_INCLUDED
#define TESTES_ENTIDADES_HPP_INCLUDED
#include "Dominios.hpp"
#include "Entidades.hpp"
#include<iostream>
#include<string>


class TULeitor /// Teste de classe de entidade: Teste de unidade para a classe Leitor
{

private:

    Leitor *leitor;

    int resultado;

    void setUp();
    void tearDown();

    void setGetNome();
    void setGetSobrenome();
    void setGetEmail();
    void setGetSenha();
    void nomeVsSenha();


public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    void run();
/// Realiza o teste e unidade, verificando em caso de sucesso se a entrada set eh igual a saida get.
/// Verifica se a senha do leitor contem o nome e se uma excessao eh deviamente lancada em caso afirmativo

};

/*-------------------------------------------------------Teste Desenvolvedor----------------------------------------------------*/

class TUDesenvolvedor /// Teste de classe de entidade: Teste de unidade para a classe Desenvolvedor
{

private:

    Desenvolvedor *desenvolvedor;

    int resultado;

    void setUp();
    void tearDown();
    void setGetData();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    void run();
/// Realiza o teste e unidade, verificando em caso de sucesso se a entrada set eh igual a saida get.
};

/*----------------------------------------------- Teste Administrador-----------------------------------------------------------*/


class TUAdministrador /// Teste de classe de entidade: Teste de unidade para a classe Administrador
{

private:

    Administrador *administrador;

    int resultado;

    void setUp();
    void tearDown();
    void setGetTelefone();
    void setGetEndereco();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    void run();
/// Realiza o teste e unidade, verificando em caso de sucesso se a entrada set eh igual a saida get.
};


/*----------------------------------------------- Teste de Vocabulario Controlado----------------------------------------------------------------*/


class TUVocabContr /// Teste de classe de entidade: Teste de unidade para a classe VocabContr
{

private:

    VocabContr *vocab;

    int resultado;

    void setUp();
    void tearDown();
    void setGetNome();
    void setGetData();
    void setGetIdioma();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    void run();
/// Realiza o teste e unidade, verificando em caso de sucesso se a entrada set eh igual a saida get.
};

/*------------------------------------------------------------Teste Termo-------------------------------------------------------*/


class TUTermo /// Teste de classe de entidade: Teste de unidade para a classe Termo
{

private:

    Termo *termo;

    int resultado;

    void setUp();
    void tearDown();
    void setGetNome();
    void setGetData();
    void setGetClasse();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    void run();
/// Realiza o teste e unidade, verificando em caso de sucesso se a entrada set eh igual a saida get.
};

/*------------------------------------------------------------Teste Definicao---------------------------------------------------*/

class TUDefinicao /// Teste de classe de entidade: Teste de unidade para a classe Definicao
{

private:

    Definicao *def;

    int resultado;

    void setUp();
    void tearDown();
    void setGetTexto();
    void setGetData();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    void run();
/// Realiza o teste e unidade, verificando em caso de sucesso se a entrada set eh igual a saida get.
};
#endif
