#include "Entidades.hpp"

#include<iostream>

/*-----------------------------------------Métoos de Vocabulario controlado-----------------------------------------------------*/
void VocabContr::setNome(string name)
{
    nome.setNome(name);
}

void VocabContr::setIdioma(string language)
{
    idioma.setIdioma(language);
}

void VocabContr::setData(string date)
{
    data.setData(date);
}
/*--------------------------------------Métoos e Termo--------------------------------------------------------------------------*/

void Termo::setNome(string name)
{
    nome.setNome(name);
}


void Termo::setData(string date)
{
    nome.setNome(date);
}

void Termo::setClasse(string clas)
{
    classe.setClasse(clas);
}

/*-------------------------------------Metoos de Definicao----------------------------------------------------------------------*/

void Definicao::setTexto(string text)
{
    texto.setTexto(text);
}

void Definicao::setData(string date)
{
    data.setData(date);
}
