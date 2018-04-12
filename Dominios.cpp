#include "Dominios.hpp"




void Nome:: validar(char* nome) throw (invalid_argument)
{
    int tamLetras = 26, tamNumeros = 10;
    char letrasMaiusculas[tamLetras] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','X','W','Y','Z'};
    char numerosInteiros[tamNumeros] = {'0','1','2','3','4','5','6','7','8','9'};
    int i=0;

    bool achou;

    while(achou != true ||i<tamLetras) //Verifica se a primeira letra do nome é maiuscula.
    {
        if(nome[0] == letrasMaiusculas[i])
            achou = true;
        i = i+1;
    }
    if(achou == false)
    {
        throw invalid_argument("Argumento invalido.");
    }

    for(int i=0; i <= tamNome; i++) // Verifica letra por letra do nome se alguma é um número inteiro
    {
        for(int j=0; j<=tamNumeros; j++)
        {
            if(nome[i] == numerosInteiros[j])
            {
                throw invalid_argument("Argumento invalido.");
            }
        }
    }
    for(int i=1; i <= tamNome; i++) // Verifica se alguma letra a partir da segunda  é Maiúscula
    {
        for(int j=0; j <= tamLetras; j++)
        {
            if(nome[i] == letrasMaiusculas[j])
                throw invalid_argument("Argumento invalido.");
        }
    }
}

void Nome::setNome(char *nome) throw (invalid_argument)
{
    int i;
    validar(nome);
    for(i=0; i<=tamNome; i++) // O This não está apontando apenas para o primeiro endereço de nome
    {
        this->nome[i] = nome[i];
    }
}





void Sobrenome::validar(char *sobrenome) throw (invalid_argument)
{

    int tamLetras = 26, tamNumeros = 10;
    char letrasMaiusculas[tamLetras] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','X','W','Y','Z'};
    char numerosInteiros[tamNumeros] = {'0','1','2','3','4','5','6','7','8','9'};
    int i=0;

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

    for(int i=0; i <= tamSobrenome; i++) // Verifica letra por letra do nome se alguma é um número inteiro
    {
        for(int j=0; j <= tamNumeros; j++)
        {
            if(sobrenome[i] == numerosInteiros[j])
            {
                throw invalid_argument("Argumento invalido.");
            }
        }
    }
    for(int i=1; i <= tamSobrenome; i++) // Verifica se alguma letra a partir da segunda  é Maiúscula
    {
        for(int j=0; j <= tamLetras; j++)
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
