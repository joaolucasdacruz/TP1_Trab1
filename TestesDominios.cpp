#include "Dominios.hpp"
#include<iostream>
#include "TestesDominios.hpp"
#include <iostream>

/*-------------------------------------------- Teste de Unidade Nome -----------------------------------------------------------*/

void TUNome::setUp()
{
    nome = new Nome();
    resultado = SUCESSO;
}

void TUNome::tearDown()
{
    delete nome;
}
// Teste de um nome válido
void TUNome::nomeValido()
{
    try
    {
        nome->setNome("Joao");
        if(nome->getNome()!="Joao")
        {
            resultado = FALHA;
        }
    }
    catch(invalid_argument)
    {
        resultado = FALHA;
    }
}

void TUNome::nomeComDigito()
{
    try
    {
        nome->setNome("matheu2");
        resultado=FALHA;
    }
    catch(invalid_argument)
    {
        return;
    }
}

void TUNome::nomeGrande()
{
    try
    {
        nome->setNome("Joao lucas matheus barbosinha picles e azeitona sao nojentos");
        resultado=FALHA;
    }
    catch(invalid_argument)
    {
        return;
    }
}

void TUNome::nomeMinusculo()
{
    try
    {
        nome->setNome("matheus");
        resultado=FALHA;
    }
    catch(invalid_argument)
    {
        return;
    }
}

void TUNome::nomeDuasMaiusculas()
{
    try
    {
        nome->setNome("MatHeus");
        resultado=FALHA;
    }
    catch(invalid_argument)
    {
        return;
    }
}

void TUNome:: run()
{
    cout<<"Teste de unidade Nome: ";
    setUp();
    nomeValido();
    nomeComDigito();
    nomeGrande();
    nomeMinusculo();
    nomeDuasMaiusculas();
    if(resultado == SUCESSO)
    {
        cout<<"BEM SUCEDIDO"<<endl;
    }
    else
    {
        cout<<"FACASSOU"<<endl;
    }
    tearDown();
}

/*-------------------------------------------- Teste de Unidade Email-------------------------------------------------------*/

void TUEmail::setUp()
{
    email = new Email();
    resultado = SUCESSO;
}

void TUEmail::tearDown()
{
    delete email;
}

void TUEmail::emailValido()
{
    try
    {
        email->setEmail("joaolucas.cruz411@gmail");
        if(email->getEmail() != "joaolucas.cruz411@gmail")
        {
            resultado=FALHA;
        }
    }
    catch(invalid_argument)
    {
        resultado=FALHA;
    }
}

void TUEmail::emailDomNumerico()
{
    try
    {
        email->setEmail("barboso@991929");
        resultado=FALHA;
    }
    catch(invalid_argument)
    {
        return;
    }
}

void TUEmail::emailHifenDominio()
{
    try
    {
        email->setEmail("joaolucas@-hotmail");
        resultado=FALHA;
    }
    catch(invalid_argument)
    {
        return;
    }
}

void TUEmail::emailSemArroba()
{
    try
    {
        email->setEmail("joaolucasyahoo");
        resultado=FALHA;
    }
    catch(invalid_argument)
    {
        return;
    }
}

void TUEmail::emailPontoLocal()
{
    try
    {
        email->setEmail(".barbosBarboso@matheus");
        resultado=FALHA;
    }
    catch(invalid_argument)
    {
        return;
    }
}

void TUEmail::run()
{
    cout<<"Teste de Unidade Email: ";
    setUp();
    emailValido();
    emailDomNumerico();
    emailHifenDominio();
    emailPontoLocal();
    emailSemArroba();
    if(resultado==SUCESSO)
    {
        cout<<"BEM SUCEDIDO"<<endl;
    }
    else
    {
        cout<<"FRACASSOU"<<endl;
    }
    tearDown();
}
/*-------------------------------------------------------Teste de unidade Data--------------------------------------------------*/





