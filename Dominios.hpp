#ifndef DOMINIOS_HPP_INCLUDED
#define DOMINIOS_HPP_INCLUDED

class Nome
{

private:
    char nome[tamanho];
    const int tamanho = 20;
    void validar(char) throw (invalid_argument);

public:
    //Métodos de acesso.
    void setNome(char) throw (invalid_argument);
    char getNome() const{
    return nome;
    }

}
class Sobrenome
{

}
class Telefone
{

}
class Endereco
{

}
class Data
{

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
#endif // DOMINIOS_H_INCLUDED
