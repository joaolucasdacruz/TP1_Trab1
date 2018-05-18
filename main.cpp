#include <iostream>
#include "Dominios.hpp"
#include "Entidades.hpp"
#include "TestesDominios.hpp"
#include "TestesEntidades.hpp"
#include <string>

using namespace std;


int main()
{
// Testando os dominios:
cout<<"              Testes de unidades de Dominios:                     \n \n "<<endl;
//Teste da classe Nome
    TUNome testeNome;
    testeNome.run();
//Teste da Classe Email(endereço de correio eletronico)
    TUEmail testeEmail;
    testeEmail.run();
//Teste da classe Data:
    TUData testeData;
    testeData.run();
/*Teste da classe Senha;*/
    TUSenha testeSenha;
    testeSenha.run();
/*Tesde da Classe de termo*/
    TUClasseDeTermo testeClasse;
    testeClasse.run();
/*Teste da classe TextoDef*/
    TUTextoDef testeTextoDef;
    testeTextoDef.run();
/*Teste da classe Idioma*/
    TUIdioma testeIdioma;
    testeIdioma.run();
/*teste da classe Telefone*/
    TUTelefone testeTelefone;
    testeTelefone.run();
/*teste da classe Sobrenome*/
    TUSobrenome testeSobrenome;
    testeSobrenome.run();
/*teste da classe Endereco*/
    TUEndereco testeEndereco;
    testeEndereco.run();

cout<<"\n\n\n              Testes de unidades de Entidades:                     \n \n "<<endl;

/*teste da Classe Leitor*/
    TULeitor testeLeitor;
    testeLeitor.run();

/*teste da Classe desenvolvedor*/
    TUDesenvolvedor testeDesenvolvedor;
    testeDesenvolvedor.run();

/*teste da Classe Administrador*/
    TUAdministrador testeAdm;
    testeAdm.run();

/*teste da Classe Vocabulario Controlado*/
    TUVocabContr testeVoc;
    testeVoc.run();

/*teste de classe Termo*/
    TUTermo testeTermo;
    testeTermo.run();

/*teste de classe Definicao*/
    TUDefinicao testeDef;
    testeDef.run();

return(0);
}

