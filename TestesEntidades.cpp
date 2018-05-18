#include"TestesEntidades.hpp"
#include<iostream>
#include"Entidades.hpp"


/*--------------------------------------------------- Leitor----------------------------------------------------------------------*/

void TULeitor::setUp()
{
    leitor = new Leitor();
    resultado=SUCESSO;
}

void TULeitor::tearDown()
{
    delete leitor;
}

void TULeitor::setGetNome()
{
    Nome nameSet;
    Nome nameGet;

    nameSet.setNome("Joao");
    leitor->setNome(nameSet);
    nameGet=leitor->getNome();
    if(nameSet.getNome()!=nameGet.getNome())
    {
        resultado=FALHA;
    }

}


void TULeitor::setGetSobrenome()
{
    Sobrenome lastnameSet;
    Sobrenome lastnameGet;

    lastnameSet.setSobreNome("Barbosa");
    leitor->setSobrenome(lastnameSet);
    lastnameGet=leitor->getSobrenome();
    if(lastnameSet.getSobreNome()!=lastnameGet.getSobreNome())
    {
        resultado=FALHA;

    }
}

void TULeitor::setGetEmail()
{
    Email emailSet;
    Email emailGet;

    emailSet.setEmail("joaolucas411@gmail");
    leitor->setEmail(emailSet);
    emailGet=leitor->getEmail();
    if(emailSet.getEmail()!=emailGet.getEmail())
    {
        resultado=FALHA;

    }
}

void TULeitor::setGetSenha()
{
    Senha senhaSet;
    Senha senhaGet;

    senhaSet.setSenha("Piccolo1");
    leitor->setSenha(senhaSet);
    senhaGet=leitor->getSenha();
    if(senhaSet.getSenha()!=senhaGet.getSenha())
    {
        resultado=FALHA;

    }
}

void TULeitor::nomeVsSenha()
{
    Nome name;
    Senha password;

    try
    {
        name.setNome("Piccolo");
        password.setSenha("Piccolo1");
        leitor->setNome(name);
        leitor->setSenha(password);
        resultado=FALHA;
    }
    catch(invalid_argument)
    {
        return;
    }

}

void TULeitor::run()
{
    cout<<"Teste de unidade Leitor: ";
    setUp();
    setGetNome();
    setGetSobrenome();
    setGetSenha();
    setGetEmail();
    nomeVsSenha();
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

/*------------------------------------------------------------ Teste Desenvolvedor----------------------------------------------*/



void TUDesenvolvedor::setUp()
{
    desenvolvedor = new Desenvolvedor();
    resultado=SUCESSO;
}

void TUDesenvolvedor::tearDown()
{
    delete desenvolvedor;
}

void TUDesenvolvedor::setGetData()
{
    Data dataSet;
    Data dataGet;

    dataSet.setData("01/06/2018");
    desenvolvedor->setData(dataSet);
    dataGet=desenvolvedor->getData();
    if(dataSet.getData()!=dataGet.getData())
    {
        resultado=FALHA;

    }
}

void TUDesenvolvedor::run()
{
    cout<<"Teste de unidade Desenvolvedor: ";
    setUp();
    setGetData();
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


/*------------------------------------------------------------ Teste Administrador----------------------------------------------*/


void TUAdministrador::setUp()
{
    administrador = new Administrador();
    resultado=SUCESSO;
}

void TUAdministrador::tearDown()
{
    delete administrador;
}

void TUAdministrador::setGetEndereco()
{
    Endereco endSet;
    Endereco endGet;

    endSet.setEndereco("Rua Augusta");
    administrador->setEndereco(endSet);
    endGet=administrador->getEndereco();
    if(endSet.getEndereco()!=endGet.getEndereco())
    {
        resultado=FALHA;

    }
}


void TUAdministrador::setGetTelefone()
{
    Telefone telSet;
    Telefone telGet;

    telSet.setTelefone("6199997-8742");
    administrador->setTelefone(telSet);
    telGet=administrador->getTelefone();
    if(telSet.getTelefone()!=telGet.getTelefone())
    {
        resultado=FALHA;
    }
}

void TUAdministrador:: run()
{
    cout<<"Teste de unidade Administrador: ";
    setUp();
    setGetEndereco();
    setGetTelefone();
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

/*----------------------------------------------------- Teste Vocabulario Controlado--------------------------------------------*/

void TUVocabContr::setUp()
{
    vocab = new VocabContr();
    resultado=SUCESSO;
}

void TUVocabContr::tearDown()
{
    delete vocab;
}

void TUVocabContr::setGetNome()
{
    Nome nameSet;
    Nome nameGet;

    nameSet.setNome("Vocabulario");
    vocab->setNome(nameSet);
    nameGet=vocab->getNome();
    if(nameSet.getNome()!=nameGet.getNome())
    {
        resultado=FALHA;
    }
}

void TUVocabContr::setGetIdioma()
{
    Idioma idSet;
    Idioma idGet;

    idSet.setIdioma("POR");
    vocab->setIdioma(idSet);
    idGet=vocab->getIdioma();
    if(idSet.getIdioma()!=idGet.getIdioma())
    {
        resultado=FALHA;
    }
}

void TUVocabContr::setGetData()
{
    Data dataSet;
    Data dataGet;

    dataSet.setData("01/06/2018");
    vocab->setData(dataSet);
    dataGet=vocab->getData();
    if(dataSet.getData()!=dataGet.getData())
    {
        resultado=FALHA;

    }
}

void TUVocabContr::run()
{
    cout<<"Teste de unidade Vocabulario Controlado: ";
    setUp();
    setGetNome();
    setGetData();
    setGetIdioma();
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

/*------------------------------------------------------- Teste Termo-----------------------------------------------------------*/

void TUTermo::setUp()
{
    termo = new Termo();
    resultado=SUCESSO;
}

void TUTermo::tearDown()
{
    delete termo;
}

void TUTermo::setGetNome()
{
    Nome nameSet;
    Nome nameGet;

    nameSet.setNome("Vocabulario");
    termo->setNome(nameSet);
    nameGet=termo->getNome();
    if(nameSet.getNome()!=nameGet.getNome())
    {
        resultado=FALHA;
    }
}

void TUTermo::setGetData()
{
    Data dataSet;
    Data dataGet;

    dataSet.setData("01/06/2018");
    termo->setData(dataSet);
    dataGet=termo->getData();
    if(dataSet.getData()!=dataGet.getData())
    {
        resultado=FALHA;

    }
}

void TUTermo::setGetClasse()
{
    ClasseDeTermo classeSet;
    ClasseDeTermo classeGet;

    classeSet.setClasse("PT");
    termo->setClasse(classeSet);
    classeGet=termo->getClasse();
    if(classeSet.getClasse()!=classeGet.getClasse())
    {
        resultado=FALHA;

    }
}


void TUTermo::run()
{
    cout<<"Teste de unidade Termo: ";
    setUp();
    setGetNome();
    setGetData();
    setGetClasse();
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

/*------------------------------------------------------- Teste Definicao-------------------------------------------------------*/

void TUDefinicao::setUp()
{
    def = new Definicao();
    resultado=SUCESSO;
}

void TUDefinicao::tearDown()
{
    delete def;
}

void TUDefinicao::setGetData()
{
    Data dataSet;
    Data dataGet;

    dataSet.setData("01/06/2018");
    def->setData(dataSet);
    dataGet=def->getData();
    if(dataSet.getData()!=dataGet.getData())
    {
        resultado=FALHA;

    }
}

void TUDefinicao::setGetTexto()
{
    TextoDef txtSet;
    TextoDef txtGet;

    txtSet.setTexto("Isso aqui eh uma definicao");
    def->setTexto(txtSet);
    txtGet=def->getTexto();
    if(txtSet.getTexto()!=txtGet.getTexto())
    {
        resultado=FALHA;
    }
}

void TUDefinicao::run()
{
    cout<<"Teste de unidade Definicao: ";
    setUp();
    setGetData();
    setGetTexto();
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
