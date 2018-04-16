#ifndef TESTES_DOMINIOS_HPP_INCLUDED
#define TESTES_DOMINIOS_HPP_INCLUDED
#include "Dominios.hpp"
#include<iostream>
#include<string>


using namespace std;


/*------------------------------------------Teste de Unidade Nome----------------------------------------------------------------*/
class TUNome
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

};
/*------------------------------------------------- Teste de Unidade Email------------------------------------------------------*/
class TUEmail
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

};
/*------------------------------------------------------------Teste de Unidade Data---------------------------------------------*/

#endif
