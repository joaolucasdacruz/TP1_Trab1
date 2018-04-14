#include "Dominios.hpp"




#include "Dominios.hpp"


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
    for(i=0;nome[i]!= '\0';i++)
    { // As strings terminam com \0
        if(i==tamNome)
        {// se i = 20, o nome tem mais de tamNome caracteres, pois i começa em zero
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
        cout<<nome[0]<<endl;
    }
    if(achou == false){
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
bool Senha::findName(string senha, string NomeS){


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
    if (achouReq == false){
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
    else {
        return(false);
    }

}

void Senha::setSenha(string senha)
{
    validar(senha);
    this->senha = senha;
}

/*--------------------------------------------------Métodos da classe de TextoDeDefiniçao----------------------------------------------*/

 bool TextoDef::validar(string texto)

{

    int i;

    for(i=0; texto[i]!= '\0'; i++);

    if( i==0 || i>=30)
    {
       return(false);
    }
    else
    {
       return(true);
    }
}



 void TextoDef::setTexto(string texto) throw (invalid_argument)
 {
    bool texVal;

    texVal = validar(texto);

    if (texVal == false)
    {
        throw invalid_argument("\n Tamanho invalido de texto ! \n O texto deve conter de 1 a 30 caracteres \n");
    }
    this->texto = texto;
 }





/*--------------------------------------------------Métodos da classe Idioma-----------------------------------------------------------*/


bool Idioma::validar(string idioma)
{
    if(idioma != "ENG"  && idioma != "FRA"   && idioma != "GER" && idioma != "ITA"  && idioma != "POR" && idioma != "SPA" )
    {
        return(false);
    }
    else
    {
        return(true);
    }
}


void Idioma::setIdioma(string idioma) throw (invalid_argument)
{
    bool idiomaVal;

    idiomaVal = validar(idioma);

    if(idiomaVal==false)
    {
        throw invalid_argument("\n Idioma não reconhecido ! Os idiomas reconhecidos são:\n ENG;\n GER \n FRA \n ITA \n POR \n SPA \n ");
    }
    this->idioma = idioma;

}






/*-------------------------------------------------Métodos da classe ClasseDeTermo-----------------------------------------------------*/

bool ClasseDeTermo::validar (string claTer)
{
    if(claTer != "PT" && claTer != "NP")
    {
        return(false);
    }
    else
    {
        return(true);
    }
}


void ClasseDeTermo::setClasse(string ClaTer) throw (invalid_argument)
{
    bool classeVal;

    classeVal = validar(claTer);

    if(classeVal == false)
    {
        throw invalid_argument("\n Classe de termos não reconhecida \n");
    }

    this->claTer = claTer;
}














