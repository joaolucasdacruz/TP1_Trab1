#ifndef ENTIDADES_HPP_INCLUDED
#define ENTIDADES_HPP_INCLUDED

#include <string>
#include "Dominios.hpp"

using namespace std;

class Leitor
{

private:

    Nome nome;
    Sobrenome sobrenome;
    EnderecoDeCorreioEletronico email;
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

    void setEnderecoDeCorreioEletronico(const EnderecoDeCorreioEletronico email)
    {
        this->email = email;
    }

    EnderecoDeCorreioEletronico getEnderecoDeCorreioEletronico()
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

class Desenvolvedor
{
};

class Administrador
{
};

class VocabularioControlado
{
};

class Termo
{
};

class Definicao
{
};

#endif
