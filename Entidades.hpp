#include "Entidades.hpp"

#include<iostream>



void Leitor::nomeVsSenha(Nome nome,Senha senha) throw (invalid_argument)
{
    bool nomeNaSenha;

    string name = nome.getNome();
    string password = senha.getSenha();

    nomeNaSenha = findName(password,name);
    //cout << name<<endl;
   // cout << password<<endl;
    if(nomeNaSenha==true)
    {
        throw invalid_argument("\nA senha contém o nome\n");

    }
}

 //Esse método tem que sair daqui e ir para as entidades de usuário.
 bool Leitor::findName(string senha, string nomeS){

     const int tamNome = 20;
     const int tamSenha = 8;

     char compara[tamNome];
     int i=0,j=0;

     for(i=0;i<8;i++)
     {
     if(senha[i] == nomeS[0])                //Se alguma letra da senha é igual à primeira letra do nome
         {                                   //As próximas letras em sequência são comparaas, até ser encontrada uma diferença
                                             //Ou até todos os demais caracteres terem sido comparados em sequência
             while(senha[i+j] == nomeS[j] || i+j <tamSenha){
                 compara[j]= nomeS[j];       // Os caracteres iguais são armazenaos
                 j=j+1;
                }
             if(compara==nomeS) // Se o conjunto de caracteres iguais em sequência conseguir formar o nome
                 return(true);  // Significa que a senha contém o nome.
             else
                 j=0;
         }
     }
     return (false);
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
