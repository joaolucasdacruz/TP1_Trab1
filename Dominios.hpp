#ifndef DOMINIOS_HPP_INCLUDED
#define DOMINIOS_HPP_INCLUDED

#include <stdexcept>

using namespace std;

class Nome
{

private:

    const static int tamNome = 20;
    char nome[tamNome];

    void validar(char*) throw (invalid_argument);

public:

    void setNome(char*) throw (invalid_argument);

    char getNome() const
    {
        return *nome;
    }

};
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

    const static int tamanho = 13;
    char telefone[tamanho];

    void validar(char) throw (invalid_argument);

public:

    void setTelefone(char) throw (invalid_argument);
    char getTelefone() const
    {
        return *telefone;
    }
};

class Endereco
{

private:

    const static int tamanho = 20;
    char endereco[tamanho];

    void validar(char) throw (invalid_argument);

public:

    void setEndereco(char) throw (invalid_argument);
    char getEndereco() const
    {
        return *endereco;
    }
};


class Data
{

private:

    const static int tamanho = 10;
    char data[tamanho];

    void validar(char) throw (invalid_argument);

public:

    void setData(char) throw (invalid_argument);
    char getData() const
    {
        return *data;
    }
};


class EnderecoDeCorreioEletronico
{

};
class Senha
{

};
class TextoDeDefinicao
{

};
class Idioma
{

};
class ClasseDeTermo
{

};
#endif
