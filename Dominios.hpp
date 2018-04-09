#ifndef DOMINIOS_HPP_INCLUDED
#define DOMINIOS_HPP_INCLUDED

class Nome
{

private:

    const int tamanho = 20;
    char nome[tamanho];

    void validar(char) throw (invalid_argument);

public:

    void setNome(char) throw (invalid_argument);
    char getNome() const
    {
        return nome;
    }

}
class Sobrenome
{

private:

    const int tamanho = 20;
    char sobrenome[tamanho];

    void validar(char) throw (invalid_argument);

public:

    void setSobreNome(char) throw (invalid_argument);
    char getSobreNome() const
    {
        return sobrenome;
    }

}

class Telefone
{
private:

    const int tamanho = 13;
    char telefone[tamanho];

    void validar(char) throw (invalid_argument);

public:

    void setTelefone(char) throw (invalid_argument);
    char getTelefone() const
    {
        return telefone;
    }
}

class Endereco
{

private:

    const int tamanho = 20;
    char endereco[tamanho];

    void validar(char) throw (invalid_argument);

public:

    void setEndereco(char) throw (invalid_argument);
    char getEndereco() const
    {
        return endereco;
    }
}

}
class Data
{

private:

    const int tamanho = 10;
    char data[tamanho];

    void validar(char) throw (invalid_argument);

public:

    void setData(char) throw (invalid_argument);
    char getData() const
    {
        return data;
    }
}

}
class EnderecoDeCorreioEletronico
{

}
class Senha
{

}
class TextoDeDefinicao
{

}
class Idioma
{

}
class ClasseDeTermo
{

}
#endif
