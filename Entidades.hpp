#ifndef ENTIDADES_HPP_INCLUDED
#define ENTIDADES_HPP_INCLUDED

#include <string>
#include "Dominios.hpp"


class Leitor
{

private:

    Nome nome;
    Sobrenome sobrenome;
    Email email;
    Senha senha;

public:

    void setNome(const Nome nome)
    {
        this->nome = nome;
    }

    Nome getNome()
    {
        return nome;
    }

    void setSobrenome(const Sobrenome sobrenome)
    {
        this->sobrenome = sobrenome;
    }

    Sobrenome getSobrenome() const
    {
        return sobrenome;
    }

    void setEmail(const Email email)
    {
        this->email = email;
    }

    Email getEmail()
    {
        return email;
    }

    void setSenha(const Senha senha)
    {
        this->senha = senha;
    }

    Senha getSenha()
    {
        return (senha);
    }

};

class Desenvolvedor: public Leitor
{

private:

    Data aniversario;

public:

    void setData(const Data aniversario)
    {
        this->aniversario = aniversario;
    }

    Data getData()
    {
        return aniversario;
    }

};

class Administrador: public Desenvolvedor
{

 private:
    Telefone telefone;
    Endereco endereco;

 public:

    void setTelefone(const Telefone telefone)
    {
        this->telefone = telefone;
    }

    Telefone getTelefone()
    {
        return telefone;
    }

    void setEndereco(const Endereco endereco)
    {
        this->endereco = endereco;
    }

    Endereco getEndereco()
    {
        return endereco;
    }
};

class VocabContr
{

private:

    Nome nome;
    Idioma idioma;
    Data data;

public:

// Método construtor
    VocabContr()
    {
    nome.setNome("Joaosemnome");
    data.setData("00/00/0000");
    idioma.setIdioma("POR");    // Idioma padrão
    }
    void setNome(string);
    void setIdioma(string);
    void setData(string);

    string getNome() throw (invalid_argument)
    {
        if( nome.getNome() == "Joaosemnome")
        {
            throw invalid_argument ("Vocabulario controlado nao teve o nome inicializado");
        }
        else
        {
            return(nome.getNome());
        }
    }

    string getIdioma()
    {
        return(idioma.getIdioma());
    }

    string getData()
    {
        if( data.getData() == "00/00/0000")
        {
            throw invalid_argument ("Vocabulario controlado nao teve a data  inicializada");
        }
        else
        {
            return(data.getData());
        }
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
//Método construtor da classe termo que inicializa os atributos
    Termo()
    {// Essas inicializações significam que não foi usado nenhum set
        nome.setNome("Joaosemnome");
        classe.setClasse("PT");
        data.setData("00/00/00");
    }

    void setNome(string);
    void setClasse(string);
    void setData(string);

    string getNome()  throw (invalid_argument)
    {
        if(nome.getNome()=="Joaosemnome")
        {
            throw invalid_argument("Nome do termo nao foi inicializado");
        }
        else
        {
            return(nome.getNome());
        }
    }

    string getData() throw (invalid_argument)
    {
        if(data.getData()=="00/00/0000")
        {
            throw invalid_argument("Data do termo nao inserida");
        }
        else
        {
            return(data.getData());
        }
    }

    string getClasse()
    {
        return(classe.getClasse());
    }


};

/*---------------------------------------------------- Classe Definiçao --------------------------------------------------------*/


class Definicao
{

private:
    Data data;
    TextoDef texto;
public:
    Definicao()
    {
        data.setData("00/00/0000");
        texto.setTexto("!@#$%&*");
    }

    void setData(string);
    void setTexto(string);

    string getData() throw (invalid_argument)
    {
        if(data.getData()=="00/00/0000")
        {
            throw invalid_argument("Nenhuma data foi inserida para o texto");
        }
        else
        {
            return(data.getData());
        }
    }

    string getTexto() throw (invalid_argument)
    {

        if( texto.getTexto() == "------------")
        {
            throw invalid_argument("\n nenhum texto foi inserido no momento \n");
        }
        else
        {
        return(texto.getTexto());
        }
    }
};


#endif
