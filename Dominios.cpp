#include "Dominios.hpp"

const static int tamanho = 20;
char nome[tamanho];

void Nome:: validar(char *nome) throw (invalid_argument)
{
    int tamLetras = 26, tamNumeros = 10;
    char letrasMaiusculas[tamLetras] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','X','W','Y','Z'};
    char numerosInteiros[tamNumeros] = {'0','1','2','3','4','5','6','7','8','9'};
    int j,i=0;

    bool achou;

    while(achou != true ||i<tamLetras) //Verifica se a primeira letra do nome é maiuscula.
    {
        if(nome[0] == letrasMaiusculas[i])
            achou = true;
        i = i+1;
    }
    if(achou == false){
        throw invalid_argument("Argumento invalido.");
    }

    for(int i=0;i <= tamNome; i++) // Verifica letra por letra do nome se alguma é um número inteiro
    {
        for(int i=0; j<=tamNumeros; j++)
        {
            if(nome[i] == numerosInteiros[j])
            {
                throw invalid_argument("Argumento invalido.");
            }
        }
    }
    for(int i=1;i <= tamNome; i++) // Verifica se alguma letra a partir da segunda  é Maiúscula
    {
        for(int i=0; j<=tamLetras; j++) 
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
    for(i=0;i<=tamNome;i++){ // O This não está apontando apenas para o primeiro endereço de nome
        this->nome[i] = nome[i];
    }
}



