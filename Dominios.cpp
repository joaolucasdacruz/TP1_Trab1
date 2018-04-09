#include "Dominios.hpp"

const static int tamanho = 20;
char nome[tamanho];

void Nome::validar(const char *nome) throw (invalid_argument)
{
    int tamLetras = 26, tamNumeros = 10;
    char letrasMaiusculas[tamLetras] = ('A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','X','W','Y','Z');
    int numerosInteiros[tamNumeros] = (0,1,2,3,4,5,6,7,8,9);

    for(int i=0; i<=tamLetras; i++) //Verifica se a primeira letra do nome é maiuscula.
    {
        if(*nome[0] != letrasMaiusculas[i])
        {
            throw invalid_argument("Argumento invalido.");
        }
    }

    for(int i=0,i <= tamanho, i++)//verifica se há algum número no nome.
    {
        for(int i=0; j<=tamNumeros; j++)
        {
            if(*nome[i] == numerosInteiros[j])
            {
                throw invalid_argument("Argumento invalido.");
            }
        }
    }
    for(int i=1,i <= tamanho, i++)
    {
        for(int i=0; j<=tamLetras; j++)
        {
            if(*nome[i] != letrasMaiusculas[j])
                throw invalid_argument("Argumento invalido.");
            }
    }
}

void Nome::setNome(char *nome) throw (invalid_argument)
{
    validar(*nome);
    this->nome = nome;
}



