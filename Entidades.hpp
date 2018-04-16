#ifndef ENTIDADES_HPP_INCLUDED
#define ENTIDADES_HPP_INCLUDED
#include<iostream>
#include "Dominios.hpp"

using namespace std;

/*-------------------------------------------Classe Leitor----------------------------------------------------------------------*/

class Leitor
{

private:

    Nome nome;
    Sobrenome sobrenome;
    Email email;
    Senha senha;

    bool findName(string , string );

public:

    void setNome(const Nome &nomeSet)
    {
        cout<<"\n entrou\n"<<endl;
        nomeVsSenha(nomeSet,senha);
        this->nome = nomeSet;
    }

    Nome getNome()
    {
        return (nome);
    }

    void setSobrenome(const Sobrenome &sobrenome)
    {
        this->sobrenome = sobrenome;
    }

    Sobrenome getSobrenome() const
    {
        return (sobrenome);
    }

    void setEmail(const Email &email)
    {
        this->email = email;
    }

    Email getEmail()
    {
        return (email);
    }

    void setSenha(const Senha &senhaSet)
    {
        nomeVsSenha(nome,senhaSet);
        this->senha = senhaSet;
    }

    Senha getSenha()
    {
        return (senha);
    }

    void nomeVsSenha(Nome,Senha) throw (invalid_argument);
};

/*-----------------------------------------------Classe desenvolvedor-----------------------------------------------------------*/

class Desenvolvedor: public Leitor
{

private:

    Data data;

public:

    void setData(const Data data)
    {
        this->data = data;
    }

    Data getData()
    {
        return (data);
    }

};


/*-------------------------------------------------Classe Administrador---------------------------------------------------------*/

class Administrador: public Desenvolvedor
{

 private:
    Telefone telefone;
    Endereco endereco;

 public:

    void setTelefone(const Telefone &telefone)
    {
        this->telefone = telefone;
    }

    Telefone getTelefone()
    {
        return (telefone);
    }

    void setEndereco(const Endereco &endereco)
    {
        this->endereco = endereco;
    }

    Endereco getEndereco()
    {
        return (endereco);
    }
};


/*--------------------------------------------Classe Vocabulário controlado-----------------------------------------------------*/
class VocabContr
{

private:

    Nome nome;
    Idioma idioma;
    Data data;

public:

    void setNome (const Nome &nome)
    {
        this->nome=nome;
    }

    Nome getNome()
    {
        return(nome);
    }

    void setIdioma(const Idioma &idioma)
    {
        this->idioma=idioma;
    }

    Idioma getIdioma()
    {
        return(idioma);
    }

    void setData (const Data &data)
    {
        this->data=data;
    }

    Data getData()
    {
        return(data);
    }

};
/*---------------------------------------------------- Classe Termo-------------------------------------------------------------*/

class Termo
{
private:
    Nome nome;
    ClasseDeTermo classe;
    Data data;

public:

    void setNome (const Nome &nome)
    {
        this->nome=nome;
    }

    Nome getNome()
    {
        return(nome);
    }

    void setClasse(const ClasseDeTermo &classe)
    {
        this->classe=classe;
    }

    ClasseDeTermo getClasse()
    {
        return(classe);
    }

    void setData (const Data &data)
    {
        this->data=data;
    }

    Data getData()
    {
        return(data);
    }

};

/*---------------------------------------------------- Classe Definiçao --------------------------------------------------------*/


class Definicao
{

private:
    Data data;
    TextoDef texto;
public:


    void setTexto (const TextoDef &texto)
    {
        this->texto=texto;
    }

    TextoDef getTexto()
    {
        return(texto);
    }

    void setData (const Data &data)
    {
        this->data=data;
    }

    Data getData()
    {
        return(data);
    }

};

#endif
