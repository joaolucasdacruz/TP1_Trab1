#ifndef ENTIDADES_HPP_INCLUDED
#define ENTIDADES_HPP_INCLUDED
#include<iostream>
#include "Dominios.hpp"

using namespace std;

/*-------------------------------------------Classe Leitor----------------------------------------------------------------------*/

class Leitor///Essa classe e responsavel por criar e armazenar o objeto leitor.
{

private:

    Nome nome;
    Sobrenome sobrenome;
    Email email;
    Senha senha;

    bool findName(string , string );

public:

    void setNome(const Nome &nomeSet)///Armazena o atributo nome do objeto Leitor.
    {
        cout<<"\n entrou\n"<<endl;
        nomeVsSenha(nomeSet,senha);
        this->nome = nomeSet;
    }

    Nome getNome()///Fornece o atributo nome do objeto Leitor.
    {
        return (nome);
    }

    void setSobrenome(const Sobrenome &sobrenome)///Armazena o atributo sobrenome do objeto Leitor.
    {
        this->sobrenome = sobrenome;
    }

    Sobrenome getSobrenome() const///Fornece o atributo sobrenome do objeto Leitor.
    {
        return (sobrenome);
    }

    void setEmail(const Email &email)///Armazena o atributo email do objeto Leitor.
    {
        this->email = email;
    }

    Email getEmail()///Fornece o atributo email do objeto Leitor.
    {
        return (email);
    }

    void setSenha(const Senha &senhaSet)///Armazena o atributo senha do objeto Leitor.
    {
        nomeVsSenha(nome,senhaSet);
        this->senha = senhaSet;
    }

    Senha getSenha()///Fornece o atributo senha do objeto Leitor.
    {
        return (senha);
    }

    ///Verifica se o nome esta contido na senha.
    void nomeVsSenha(Nome,Senha) throw (invalid_argument);
};

/*-----------------------------------------------Classe desenvolvedor-----------------------------------------------------------*/

class Desenvolvedor: public Leitor///Essa classe e responsavel por criar e armazenar o objeto desenvolvedor e herda da classe leitor.
{

private:

    Data data;

public:

    void setData(const Data data)///Armazena o atributo data do objeto Desenvolvedor.
    {
        this->data = data;
    }

    Data getData()///Fornece o atributo data do objeto Desenvolvedor.
    {
        return (data);
    }

};


/*-------------------------------------------------Classe Administrador---------------------------------------------------------*/

class Administrador: public Desenvolvedor///Essa classe e responsavel por criar e armazenar o objeto administrador e herda de desenvolvedor.
{

 private:
    Telefone telefone;
    Endereco endereco;

 public:

    void setTelefone(const Telefone &telefone)///Armazena o atributo telefone do objeto Administrador.
    {
        this->telefone = telefone;
    }

    Telefone getTelefone()///Fornece o atributo telefone do objeto Administrador.
    {
        return (telefone);
    }

    void setEndereco(const Endereco &endereco)///Armazena o atributo endereco do objeto Administrador.
    {
        this->endereco = endereco;
    }

    Endereco getEndereco()///Fornece o atributo telefone do objeto Administrador.
    {
        return (endereco);
    }
};


/*--------------------------------------------Classe Vocabulário controlado-----------------------------------------------------*/
class VocabContr///Essa classe e responsavel por criar e armazenar o objeto vocabulario controlado.
{

private:

    Nome nome;
    Idioma idioma;
    Data data;

public:

    void setNome (const Nome &nome)///Armazena o atributo nome do objeto vocabulario controlado.
    {
        this->nome=nome;
    }

    Nome getNome()///Fornece o atributo nome do objeto vocabulario controlado.
    {
        return(nome);
    }

    void setIdioma(const Idioma &idioma)///Armazena o atributo idioma do objeto vocabulario controlado.
    {
        this->idioma=idioma;
    }

    Idioma getIdioma()///Fornece o atributo idioma do objeto vocabulario controlado.
    {
        return(idioma);
    }

    void setData (const Data &data)///Armazena o atributo data do objeto vocabulario controlado.
    {
        this->data=data;
    }

    Data getData()///Fornece o atributo data do objeto vocabulario controlado.
    {
        return(data);
    }

};
/*---------------------------------------------------- Classe Termo-------------------------------------------------------------*/

class Termo///Essa classe e responsavel por criar e armazenar o objeto termo.
{
private:
    Nome nome;
    ClasseDeTermo classe;
    Data data;

public:

    void setNome (const Nome &nome)///Armazena o atributo nome do objeto termo.
    {
        this->nome=nome;
    }

    Nome getNome()///Fornece o atributo nome do objeto termo.
    {
        return(nome);
    }

    void setClasse(const ClasseDeTermo &classe)///Armazena o atributo classe de termo do objeto termo.
    {
        this->classe=classe;
    }

    ClasseDeTermo getClasse()///Fornece o atributo classe de termo do objeto termo.
    {
        return(classe);
    }

    void setData (const Data &data)///Armazena o atributo data do objeto termo.
    {
        this->data=data;
    }

    Data getData()///Fornece o atributo data do objeto termo.
    {
        return(data);
    }

};

/*---------------------------------------------------- Classe Definiçao --------------------------------------------------------*/


class Definicao///Essa classe e responsavel por criar e armazenar o objeto definicao.
{

private:
    Data data;
    TextoDef texto;
public:


    void setTexto (const TextoDef &texto)///Armazena o atributo texto do objeto definicao.
    {
        this->texto=texto;
    }

    TextoDef getTexto()///Fornece o atributo texto do objeto definicao.
    {
        return(texto);
    }

    void setData (const Data &data)///Armazena o atributo data do objeto definicao.
    {
        this->data=data;
    }

    Data getData()///Fornece o atributo data do objeto definicao.
    {
        return(data);
    }

};

#endif
