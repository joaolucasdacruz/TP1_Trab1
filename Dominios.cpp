#include "Dominios.hpp"
#include <iostream>

using namespace std;

/*------------------------------------------------Métodos da classe Nome--------------------------------------------------------------*/

void Nome::validar(string nome) throw (invalid_argument)
{
    int tamLetras = 26, tamNumeros = 10;
    char letrasMaiusculas[tamLetras] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','X','W','Y','Z'};
    char numerosInteiros[tamNumeros] = {'0','1','2','3','4','5','6','7','8','9'};
    int j,i=0;

    bool achou = false;

//Verifica se o nome possui mais de 20 caracteres (tamNome = 20)
    for(i=0; nome[i]!= '\0'; i++)
    {
        // As strings terminam com \0
        if(i==tamNome)
        {
            // se i = 20, o nome tem mais de tamNome caracteres, pois i começa em zero
            throw invalid_argument("O nome nao pode conter mais de 20 caracteres");
        }
    }

    i=0; // reinicialização da variável de contagem

//Verifica se a primeira letra do nome é maiuscula.
    while(achou != true && i<tamLetras)
    {
        if(nome[0] == letrasMaiusculas[i])
            achou = true;
        i = i+1;
    }
    if(achou == false)
    {
        throw invalid_argument("\nNome não começa com letra maiuscula\n.");
    }
// Verifica letra por letra do nome se alguma é um número inteiro
    for(i=0; nome[i]!= '\0'; i++)
    {
        for(int i=0; j<=tamNumeros; j++)
        {
            if(nome[i] == numerosInteiros[j])
            {
                throw invalid_argument("\nO nome contem digitos\n");
            }
        }
    }
// Verifica se alguma letra é maiuscula além da primeira
    for(i=1; nome[i]!= '\0'; i++)
    {
        for(j=0; j<tamLetras; j++)
        {
            if(nome[i] == letrasMaiusculas[j])
            {
                throw invalid_argument("\nLetras maiusculas no meio ou fim do nome\n");
            }
        }
    }
}

void Nome::setNome(string nome)
{
    validar(nome);
    this->nome = nome;
}


/*-------------------------------------------------- Métodos da classe Sobrenome-------------------------------------------------------*/

void Sobrenome::validar(char *sobrenome) throw (invalid_argument)
{

    int tamLetras = 26, tamNumeros = 10;
    char letrasMaiusculas[tamLetras] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','X','W','Y','Z'};
    char numerosInteiros[tamNumeros] = {'0','1','2','3','4','5','6','7','8','9'};
    int i=0, j=0;

    bool achou;

    while(achou != true ||i<tamLetras) //Verifica se a primeira letra do nome é maiuscula.
    {
        if(sobrenome[0] == letrasMaiusculas[i])
            achou = true;
        i = i+1;
    }
    if(achou == false)
    {
        throw invalid_argument("Argumento invalido.");
    }

    for(i=0; i <= tamSobrenome; i++) // Verifica letra por letra do nome se alguma é um número inteiro
    {
        for(int j=0; j <= tamNumeros; j++)
        {
            if(sobrenome[i] == numerosInteiros[j])
            {
                throw invalid_argument("Argumento invalido.");
            }
        }
    }
    for(i=1; i <= tamSobrenome; i++) // Verifica se alguma letra a partir da segunda é Maiúscula
    {
        for(j=0; j <= tamLetras; j++)
        {
            if(sobrenome[i] == letrasMaiusculas[j])
                throw invalid_argument("Argumento invalido.");
        }
    }

}

void Sobrenome::setSobreNome(char *sobrenome) throw (invalid_argument)
{

    int i;
    validar(sobrenome);
    for(i=0; i<=tamSobrenome; i++) // O This não está apontando apenas para o primeiro endereço de nome
    {
        this->sobrenome[i] = sobrenome[i];
    }

}


/*------------------------------------------------métodos da classe telefone-----------------------------------------------------------*/


void Telefone::validar(char *telefone) throw (invalid_argument)
{

    int tamNumeros = 10;
    char numerosInteiros[tamNumeros] = {'0','1','2','3','4','5','6','7','8','9'};
    int i=0, j=0;
    bool achou;

    for(i=0; i<=1; i++)//Verifica se as posições são numeros em telefone.
    {
        for(i=3; i<=7; i++)
        {
            for(i=9; i<=12; i++)
            {
                while(achou != true || j<tamNumeros)
                {
                    if(telefone[i] == numerosInteiros[j])
                    {
                        achou = true;
                    }
                    j = j+1;
                }
                if(achou == false)
                {
                    throw invalid_argument("Argumento invalido.");
                }
            }
        }

    }


    while(achou != true ||i<tamNumeros) //Verifica o formato do numero do telefone.
    {
        if(telefone[0] == numerosInteiros[i])
        {
            achou = true;
        }
        if(telefone[1] == numerosInteiros[i])
        {
            achou = true;
        }
        if(telefone[2] == 0)//Verifica se a terceira casa da string telefone e nula.
        {
            achou = true;
        }
        if(telefone[8] == '-')
        {
            achou = true;
        }
        i = i+1;
    }
    if(achou == false)
    {
        throw invalid_argument("Argumento invalido.");
    }

}

void Telefone::setTelefone(char *telefone) throw (invalid_argument)
{

    int i;
    validar(telefone);
    for(i=0; i<=tamTelefone; i++) // O This não está apontando apenas para o primeiro endereço de nome
    {
        this->telefone[i] = telefone[i];
    }

}

/*------------------------------------------------------------Métodos da classe Senha-------------------------------------------------*/

//Esse método tem que sair daqui e ir para as entidades de usuário.
bool Senha::findName(string senha, string NomeS)
{


    char compara[tamNome];
    int i=0,j=0;

    for(i=0; i<8; i++)
    {
        if(senha[i] == nomeS[0])                //Se alguma letra da senha é igual à primeira letra do nome
        {
            //As próximas letras em sequência são comparadas, até ser encontrada uma diferença
            //Ou até todos os demais caracteres terem sido comparados em sequência
            while(senha[i+j] == nomeS[j] || i+j <tamSenha)
            {
                compara[j]= nomeS[j];       // Os caracteres iguais são armazenaos
                j=j+1;

            }
            cout<<compara<<endl;
            if(compara==nomeS) // Se o conjunto de caracteres iguais em sequência conseguir formar o nome
                return(true);  // Significa que a senha contém o nome.
            else
                j=0;
        }
    }
    return (false);
}

void Senha::validar(string senha) throw (invalid_argument)
{
//Armazena o resultado da procura do nome dentro da senha
    //bool achouNome;
    bool achouReq;

    //achouNome=findName(senha, nomeS);

    //if( achouNome == true ){
    //throw invalid_argument(" \n A senha contém o nome \n");
    //}

    achouReq = procuraChar(senha);
    if (achouReq == false)
    {
        throw invalid_argument("\n A senha deve possuir pelo menos um digito, um caractere Maiusculo e um minusculo \n");
    }

}

bool Senha::procuraChar(string senha)
{
    int i;
    bool achouDig = false;
    bool achouMai=false;
    bool achouMin=false;
    int carac;

    for(i=0; i<8; i++)
    {
        carac=senha[i];

        if(65<=carac && carac<=90)
        {
            achouMai = true;
        }
        if(48<=carac && carac <= 57)
        {
            achouDig = true;
        }
        if(97<=carac && carac <= 122)
        {
            achouMin = true;
        }
    }

    if(achouMai == true && achouMin == true && achouDig == true)
    {
        return(true);
    }
    else
    {
        return(false);
    }

}

void Senha::setSenha(string senha)
{
    validar(senha);
    this->senha = senha;
}


/*------------------------------------------------Métodos da classe Endereco--------------------------------------------------------------*/


void Endereco::validar(string endereco) throw (invalid_argument)
{

    int i, carac;

    for(i=0; endereco[i]!= '\0'; i++)
    {
        // As strings terminam com \0
        if(i==tamEndereco)
        {
            // se i = 20, o endereco tem mais de tamEndereco caracteres, pois i começa em zero
            throw invalid_argument("O endereco nao pode conter mais de 20 caracteres");
        }
    }

    if(endereco[0] == 32)
    {

        throw invalid_argument("Espaco em branco no inicio do endereco");

    }

    if(endereco[19] == 32)
    {

        throw invalid_argument("Espaco em branco no final do endereco");

    }

    for(i=0; i<tamEndereco; i++) //Verifica se ha dois espaços em brancos ou mais e lanca excessao.
    {
        if(endereco[i] == 32)
        {

            i=i+1;

            if(endereco[i] == 32)
            {

                throw invalid_argument("Dois ou mais espacos em branco no endereco.");

            }

        }
    }

    for(i=0; i<tamEndereco; i++)
    {
        carac=endereco[i];

        if(48<=carac && carac <= 57)
        {
            throw invalid_argument("Ha numeros no endereco.");
        }

    }

}

void Endereco :: setEndereco(string) throw (invalid_argument)
{

    validar(endereco);
    this->endereco = endereco;

}














