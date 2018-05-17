#ifndef TESTES_DOMINIOS_HPP_INCLUDED
#define TESTES_DOMINIOS_HPP_INCLUDED
#include "Dominios.hpp"
#include<iostream>
#include<string>


using namespace std;


/*------------------------------------------Teste de Unidade Nome----------------------------------------------------------------*/
class TUNome /// Teste de classe de Dominio: classe que contém os métodos do teste da unidade nome
{

private:


    Nome *nome;

    int resultado;

    void setUp();
    void tearDown();
    void nomeValido();
    void nomeMinusculo();
    void nomeComDigito();
    void nomeDuasMaiusculas();
    void nomeGrande();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    void run();
/// Realiza o teste de unidade
/// Testa um caso de sucesso
/// E confere se a string de entrada no metodo de set
/// eh igual a de saiga no metodo get
/// Testa os cenarios de falha nos casos em que:
/// O nome se inicia com letra minuscula, contem digitos, tem mais de uma letra maiuscula ou tem mais de 20 caracteres
/// E checa se as excecoes sao devidamente lancadas.
};
/*------------------------------------------------- Teste de Unidade Email------------------------------------------------------*/
class TUEmail /// Teste de classe de Dominio: Classe para a realizacao do teste de unidade
///para a classe Email
{

private:


    Email *email;

    int resultado;

    void setUp();
    void tearDown();
//caso de Sucesso
    void emailValido();
//casos de Falha
    void emailSemArroba();
    void emailPontoLocal();
    void emailDomNumerico();
    void emailHifenDominio();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    void run();
/// Realiza o teste de unidade da classe:
/// Testa em caso de entrada valida, se a entrada em set eh igual a saida get
/// e testa em cenario de falha se as excecoes sao devidamente lancadas quando:
/// Nao ha separador arroba, o local se inicia em ponto, o dominio eh completamente numerico
/// E no caso em que ha hifen no dominio

};
/*------------------------------------------------------------Teste de Unidade Data---------------------------------------------*/
class TUData /// Teste de unidade para classe de dominio: Serve para realizar o teste da classe data.
{
private:

    Data *data;

    int resultado;

    void setUp();
    void tearDown();
//caso de sucesso
    void dataValida();
//casos de falha
    void dataComChar();
    void dataDiaInval();
    void dataMesInval();
    void dataAnoInval();
    void dataNaoBisex();
    void dataSemBarra();

public:

    const static int SUCESSO = 0;
    const static int FALHA = -1;

    void run();
///Realiza o teste de unidade, verificando se a entrada em set eh igual a saida get em caso de sucesso
///E verifica se as excecoes sao devidamente lancadas nos seguintes cenarios de falha:
/// Dia invalido, Mes inexistente, Ano fora do alcance definido(Maior que 2099)
/// 29 de fevereiro em ano nao bissexto e string sem o separador '/'
};

/*-------------------------------------------------------Teste de unidade Senha-------------------------------------------------*/

class TUSenha /// Teste de unidade de classe de dominio: Serve para realizar o teste e unidade
/// sobre a classe senha
{
private:

    Senha *senha;

    int resultado;

    void setUp();
    void tearDown();
//caso de sucesso
    void SenhaValida();
//casos de falha
    void senhaSemMai();
    void senhaSemMin();
    void senhaSemDig();
    void senhaCharEsp();
    void senhaGrande();

public:

    const static int SUCESSO = 0;
    const static int FALHA = -1;

    void run();
/// Realiza o teste e unidade, verificando em caso de sucesso se a entrada set eh igual a saida get.
/// verifica se as excecoes sao devidamente lancadas nos seguintes casos e falha:
/// A senha nao tem letra maiuscula, a senha nao tem digito, a senha nao tem letra minuscula,
/// a senha contem caracteres especiais e a senha eh grande demais para ser armazenada.
};


/*------------------------------------------------------Teste de unidade Termo-------------------------------------------------*/
class TUClasseDeTermo ///Teste de unidade de classe de dominio: serve para realizar
/// o teste de unidade para a classe ClasseDeTermo
{
private:

    ClasseDeTermo *classe;

    int resultado;

    void setUp();
    void tearDown();
//caso de sucesso
    void classeValida();
//casos de falha
   void classeInexistente();

public:

    const static int SUCESSO = 0;
    const static int FALHA = -1;

    void run();
/// Verifica em caso de sucesso se a saida em get eh igual a entrada anterior em set
/// Verifica em caso de falha(Casse de termo inexistente) se uma excecao eh devidamente lancada
};
/*--------------------------------------------------Teste de TextoDefinição-------------------------------------------------------------*/

class TUTextoDef ///Teste de unidade de classe de dominio: serve para realizar
/// o teste de unidade para a classe TextoDeDef
{
private:

    TextoDef *texto;

    int resultado;

    void setUp();
    void tearDown();
//caso de sucesso
    void textoValido();
//casos de falha
    void textoGrande();

public:

    const static int SUCESSO = 0;
    const static int FALHA = -1;

    void run();
/// Verifica em caso de sucesso se a saida em get eh igual a entrada anterior em set
/// Verifica em caso de falha(Texto muito grande) se uma excecao eh devidamente lancada

};
/*------------------------------------------------------Testes da classe Idioma-------------------------------------------------*/

class TUIdioma ///Teste de unidade de classe de dominio: serve para realizar
/// o teste de unidade para a classe Idioma
{
private:

    Idioma *idioma;

    int resultado;

    void setUp();
    void tearDown();
//caso de sucesso
    void idiomaValido();
//casos de falha
    void idiomaInvalido();

public:

    const static int SUCESSO = 0;
    const static int FALHA = -1;

    void run();
/// Verifica em caso de sucesso se a saida em get eh igual a entrada anterior em set
/// Verifica em caso de falha(Idioma nao reconhecido) se uma excecao eh devidamente lancada
};

/*--------------------------------------------------Teste da classe Telefone----------------------------------------------------*/

class TUTelefone ///Teste de unidade de classe de dominio: serve para realizar
/// o teste de unidade para a classe Telefone
{
private:

    Telefone *telefone;

    int resultado;

    void setUp();
    void tearDown();
//caso de sucesso
    void telefoneValido();
//casos de falha
    void telefoneSemhifen();
    void telefoneComChar();
    void telefoneSemDDD();
    void telefoneGrande();

public:

    const static int SUCESSO = 0;
    const static int FALHA = -1;

    void run();
/// Verifica em caso de sucesso se a saida em get eh igual a entrada anterior em set
///Virifica se uma excessao eh devidamente lancada nos seguintes casos de falha:
/// Telefone sem hifen, telefone com letra, telefone sem DDD e telefone mouito grande
};
/*----------------------------------------------------Teste Sobrenome-----------------------------------------------------------*/

class TUSobrenome ///Teste de unidade de classe de dominio: serve para realizar
/// o teste de unidade para a classe Sobrenome
{
private:

    Sobrenome *sobrenome;

    int resultado;

    void setUp();
    void tearDown();
//caso de sucesso
    void sobrenomeValido();
//casos de falha
    void sobrenomeMin();
    void sobrenomeComDig();
    void sobrenomeComDuasMai();
    void sobrenomeGrande();

public:

    const static int SUCESSO = 0;
    const static int FALHA = -1;

    void run();
/// Realiza o teste de unidade
/// Testa um caso de sucesso
/// E confere se a string de entrada no metodo de set
/// eh igual a de saiga no metodo get
/// Testa os cenarios de falha nos casos em que:
/// O sobrenomenome se inicia com letra minuscula, contem digitos, tem mais de uma letra maiuscula ou tem mais de 20 caracteres
/// E checa se as excecoes sao devidamente lancadas nesses casos.
};

/*----------------------------------------------------Teste Endereco------------------------------------------------------------*/


class TUEndereco///Teste de unidade de classe de dominio: serve para realizar
/// o teste de unidade para a classe Endereco

{
private:

    Endereco *endereco;

    int resultado;

    void setUp();
    void tearDown();
//caso de sucesso
    void enderecoValido();
//casos de falha
    void enderecoEspacoInicio();
    void enderecoEspacoFim();
    void enderecoEspacoDuplo();

public:

    const static int SUCESSO = 0;
    const static int FALHA = -1;

    void run();
/// Verifica em caso de sucesso se a saida em get eh igual a entrada anterior em set
/// Verifica se uma excecao eh devidamente lancada nos seguintes casos e falha:
/// endereco com espaco no inicio, endereco com espaco no final
/// endereco com espaco duplo.
};

/*---------------------------------------------------------FIM------------------------------------------------------------------*/

#endif
