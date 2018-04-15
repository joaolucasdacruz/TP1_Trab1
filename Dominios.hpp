#ifndef DOMINIOS_HPP_INCLUDED
#define DOMINIOS_HPP_INCLUDED

#include <stdexcept>

using namespace std;

/*---------------------------------------------------------Classe Nome----------------------------------------------------------------*/
class Nome
{

private:

    const static int tamNome = 20;
    string nome;

//Métodos Privados:
    void validar(string) throw (invalid_argument);

public:

//Método setNome muda o atributo nome
    void setNome(string);

//getNome retorna o atributo nome do objeto
    string getNome()
    {
        return nome;
    }

};

/*----------------------------------------------------------Classe Sobrenome-----------------------------------------------------------*/
class Sobrenome
{

private:

    const static int tamSobrenome = 20;
    char sobrenome[tamSobrenome];

    void validar(char*) throw (invalid_argument);

public:

    void setSobreNome(char*) throw (invalid_argument);
    char getSobreNome() const
    {
        return *sobrenome;
    }

};

class Telefone
{
private:

    const static int tamTelefone = 13;
    char telefone[tamTelefone];

    void validar(char*) throw (invalid_argument);

public:

    void setTelefone(char*) throw (invalid_argument);
    char getTelefone() const
    {
        return *telefone;
    }
};

class Endereco
{

private:

    const static int tamEndereco = 20;
    string endereco;

    void validar(string) throw (invalid_argument);

public:

    void setEndereco(string) throw (invalid_argument);
    string getEndereco() const
    {
        return endereco;
    }
};


class Data
{

private:

    const static int tamData = 10;
    char data[tamData];

    void validar(char*) throw (invalid_argument);

public:

    void setData(char*) throw (invalid_argument);
    char getData() const
    {
        return *data;
    }
};


class EnderecoDeCorreioEletronico
{

};

/*-------------------------------------------------------------Classe Senha------------------------------------------------------------*/

class Senha
{

private:
//Constantes
    const static int tamNome = 20;
    const static int tamSenha = 8;
//Atributos privados
    string nomeS;
    string senha;

//Métodos privados:

//Procura o nome do usuário dentro da senha.
//Retorna verdadeiro caso exista e falso caso contrário.
    bool findName(string, string);
//Verifica se a senha escolhida obedece aos padrões estabelecidos
    void validar(string) throw (invalid_argument);

//Procura dentro da senha uma letra Maiúscula, uma minúscula e um dìgito
    bool procuraChar(string);


public:

//Método construtor da senha
    Senha(Nome nome) throw (invalid_argument)
    {
        nomeS = nome.getNome();
        if(nomeS == "$$$")
            throw invalid_argument("nome não inicializado pelo usuario");
    }

//Armazena a senha
    void setSenha(string);
//Retorna a senha
    string getSenha(string senha)
    {
        return(senha);
    }
};

/*-------------------------------------------------------- Classe TextoDefinicao-------------------------------------------------------*/

class TextoDef
{

private:
/*Atributos privados*/
    string texto;

/*Métodos privados*/
    bool validar(string);

public:

/*Métodos Públicos*/
        void setTexto(string) throw (invalid_argument);
        string getTexto(){
            return(texto);
        }

};
/*--------------------------------------------------------- Classe Idioma--------------------------------------------------------------*/
class Idioma
{

private:

    string idioma;
    bool validar(string);

public:

    void setIdioma(string) throw(invalid_argument);
    string getLingua(string idioma)
    {
        return(idioma);
    }

};
/*---------------------------------------------------------- Classe ClasseDeTermo------------------------------------------------------*/
class ClasseDeTermo
{

private:

    string claTer;
    bool validar(string );

public:

    void setClasse(string) throw(invalid_argument);
    string getClasser(string claTer){
        return(claTer);
    }
};
#endif
/*------------------------------------------------------------------ FIM---------------------------------------------------------------*/
