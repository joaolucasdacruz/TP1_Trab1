#ifndef DOMINIOS_HPP_INCLUDED
#define DOMINIOS_HPP_INCLUDED

using namespace std;
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

    private:
        void validar(std::string) throw (invalid_argument);
    public:
        void setSenha(std::string) throw (invalid_argument);
        std::string getSenha(std::string){
            return(senha);
        }
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
