 #ifndef DOMINIOS_HPP_INCLUDED
 #define DOMINIOS_HPP_INCLUDED

 #include <stdexcept>

 using namespace std;

 /*---------------------------------------------------------Classe Nome----------------------------------------------------------------*/
 class Nome ///Essa classe faz o controle de armazenamento e fornecimento do atributo nome.
 {

 private:

     const static int tamNome = 20;
     string nome;

 //Métodos Privados:
     void validar(string) throw (invalid_argument);

 public:

 //Método setNome muda o atributo nome
     void setNome(string);///Armazena o atributo nome no formato string.

 //getNome retorna o atributo nome do objeto
     string getNome()///Fornece o atributo nome no formato string.
     {
         return nome;
     }

 };

 /*----------------------------------------------------------Classe Sobrenome-----------------------------------------------------------*/
 class Sobrenome///Essa classe faz o controle de armazenamento e fornecimento do atributo sobrenome.
 {

 private:

     const static int tamSobrenome = 20;
     char sobrenome[tamSobrenome];

     void validar(char*) throw (invalid_argument);

 public:

     void setSobreNome(char*) throw (invalid_argument);///Armazena o atributo sobrenome no formato vetor de caracter.
     char getSobreNome() const///Fornece o atributo sobrenome no formato vetor de caracter.
     {
         return *sobrenome;
     }

 };

 /*-------------------------------------------------Classe Telefone-------------------------------------------------------------*/

 class Telefone///Essa classe faz o controle de armazenamento e fornecimento do atributo telefone.
 {
 private:

     const static int tamTelefone = 13;
     char telefone[tamTelefone];

     void validar(char*) throw (invalid_argument);

 public:

     void setTelefone(char*) throw (invalid_argument);///Armazena o atributo telefone no formato vetor de caracter.
     char getTelefone() const///Fornece o atributo telefone no formato vetor de caracter.
     {
         return *telefone;
     }
 };

 /*------------------------------------------------------Classe Endereco--------------------------------------------------------*/

 class Endereco///Essa classe faz o controle de armazenamento e fornecimento do atributo endereco.
 {

 private:

     const static int tamEndereco = 20;
     string endereco;

     void validar(string) throw (invalid_argument);

 public:

     void setEndereco(string) throw (invalid_argument);///Armazena o atributo endereco no formato string.
     string getEndereco()///Fornece o atributo endereco no formato string.
     {
         return endereco;
     }
 };

 /*--------------------------------------------------------Classe Data----------------------------------------------------------*/

 class Data///Essa classe faz o controle de armazenamento e fornecimento do atributo data.
 {

 private:

     const static int tamData = 10;
     string data;

     int  charToInt(char);
     bool validaFor(string);
     string validaData(string);

 public:

     void setData(string) throw (invalid_argument);///Armazena o atributo data no formato string.
     string getData()///Fornece o atributo data no formato string.
     {
         return data;
     }
 };

/*----------------------------------------------------EnderecoDeCorreioEletronico------------------------------------------------*/

 class Email///Essa classe faz o controle de armazenamento e fornecimento do atributo email.
 {
private:
    string email;
    bool validar(string);
public:

    void setEmail(string) throw (invalid_argument);///Armazena o atributo email no formato string.

    string getEmail()///Fornece o atributo email no formato string.
    {
        return(email);
    }

 };
 /*-------------------------------------------------------------Classe Senha------------------------------------------------------------*/

 class Senha///Essa classe faz o controle de armazenamento e fornecimento do atributo senha.
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
     int contaChar(string);
 //Verifica se a senha escolhida obedece aos padrões estabelecidos
     void validar(string) throw (invalid_argument);

 //Procura dentro da senha uma letra Maiúscula, uma minúscula e um dìgito
     bool procuraChar(string);


 public:


 //Armazena a senha
     void setSenha(string);///Armazena o atributo senha no formato string.
 //Retorna a senha
     string getSenha()///Fornece o atributo senha no formato string.
     {
         return(senha);
     }
 };

/*-------------------------------------------------------- Classe TextoDefinicao-------------------------------------------------------*/

class TextoDef///Essa classe faz o controle de armazenamento e fornecimento do atributo texto de definicao.
{

private:
/*Atributos privados*/
    string texto;

/*Métodos privados*/
    bool validar(string);

public:

/*Métodos Públicos*/
        void setTexto(string) throw (invalid_argument);///Armazena o atributo texto de definicao no formato string.

        string getTexto(){///Fornece o atributo texto de definicao no formato string.
            return(texto);
        }


};


/*-----------------------------------------------------classe Idioma------------------------------------------------------------*/

class Idioma///Essa classe faz o controle de armazenamento e fornecimento do atributo idioma.
{

private:

    string idioma;
    bool validar(string);

public:

    void setIdioma(string) throw(invalid_argument);///Armazena o atributo idioma no formato string.
    string getIdioma()///Fornece o atributo idioma no formato string.
    {
        return(idioma);
    }

};

/*---------------------------------------------------ClasseDeTermo--------------------------------------------------------------*/

class ClasseDeTermo///Essa classe faz o controle de armazenamento e fornecimento do atributo classe de termo.
{

private:

    string claTer;
    bool validar(string );

public:

    void setClasse(string) throw(invalid_argument);///Armazena o atributo classe de termo no formato string.
    string getClasse(){///Armazena o atributo classe de termo no formato string.
        return(claTer);
    }
};
#endif
/*-----------------------------------------------------FIM----------------------------------------------------------------------*/
