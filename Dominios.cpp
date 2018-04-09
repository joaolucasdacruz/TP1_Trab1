#include "Dominios.hpp"
class Nome
{
private:
    char nome[tamanho];
    const static int tamanho = 20;

    void Nome::validar(char nome) throw (invalid_argument)
    {

        if (nome <= tamanho)
            throw invalid_argument("Argumento invalido.");
    }
public:

    void Nome::setNome(char nome) throw (invalid_argument)
    {
        validar(nome);
        this->nome = nome;
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
