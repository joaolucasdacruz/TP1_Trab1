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
