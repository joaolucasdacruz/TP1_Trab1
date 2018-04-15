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

<<<<<<< HEAD
/*----------------------------------------------------------Classe Telefone-----------------------------------------------------------*/
class Telefone
{
private:
=======
 /*-------------------------------------------------Classe Telefone-------------------------------------------------------------*/
>>>>>>> dea26b377862deabaf04261c4018981e375d09ae

 class Telefone
 {
 private:

     const static int tamTelefone = 13;
     char telefone[tamTelefone];

     void validar(char*) throw (invalid_argument);

 public:

<<<<<<< HEAD
/*----------------------------------------------------------Classe Endereco-----------------------------------------------------------*/
class Endereco
{
=======
     void setTelefone(char*) throw (invalid_argument);
     char getTelefone() const
     {
         return *telefone;
     }
 };
>>>>>>> dea26b377862deabaf04261c4018981e375d09ae

 /*------------------------------------------------------Classe Endereco--------------------------------------------------------*/

 class Endereco
 {

 private:

     const static int tamEnderco = 20;
     char endereco[tamEnderco];

     void validar(char*) throw (invalid_argument);

<<<<<<< HEAD
/*----------------------------------------------------------Classe Data-----------------------------------------------------------*/
class Data
{
=======
 public:

     void setEndereco(char*) throw (invalid_argument);
     char getEndereco() const
     {
         return *endereco;
     }
 };
>>>>>>> dea26b377862deabaf04261c4018981e375d09ae

 /*--------------------------------------------------------Classe Data----------------------------------------------------------*/

 class Data
 {

 private:

     const static int tamData = 10;
     string data;

     int  charToInt(char);
     bool validaFor(string);
     string validaData(string);

<<<<<<< HEAD
/*----------------------------------------------------------Classe EnderecoDeCorreioEletronico-----------------------------------------------------------*/
class EnderecoDeCorreioEletronico
{
=======
 public:

     void setData(string) throw (invalid_argument);
     string getData()
     {
         return data;
     }
 };
>>>>>>> dea26b377862deabaf04261c4018981e375d09ae

/*----------------------------------------------------EnderecoDeCorreioEletronico------------------------------------------------*/

 class Email
 {
private:
    string email;
    bool validar(string);
public:

    void setEmail(string) throw (invalid_argument);

    string getEmail()
    {
        return(email);
    }

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
     string getSenha()
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


/*-----------------------------------------------------classe Idioma------------------------------------------------------------*/

class Idioma
{

private:

    string idioma;
    bool validar(string);

public:

    void setIdioma(string) throw(invalid_argument);
    string getIdioma()
    {
        return(idioma);
    }

};

/*---------------------------------------------------ClasseDeTermo--------------------------------------------------------------*/

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
/*-----------------------------------------------------FIM----------------------------------------------------------------------*/
