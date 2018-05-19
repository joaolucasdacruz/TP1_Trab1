#include "Dominios.hpp"
#include<iostream>
#include "TestesDominios.hpp"


/*-------------------------------------------- Teste de Unidade Nome -----------------------------------------------------------*/

void TUNome::setUp()
{
    nome = new Nome();
    resultado = SUCESSO;
}

void TUNome::tearDown()
{
    delete nome;
}
// Teste de um nome válido
void TUNome::nomeValido()
{
    try
    {
        nome->setNome("Joao");
        if(nome->getNome()!="Joao")
        {
            resultado = FALHA;
        }
    }
    catch(invalid_argument)
    {
        resultado = FALHA;
    }
}

void TUNome::nomeComDigito()
{
    try
    {
        nome->setNome("matheu2");
        resultado=FALHA;
    }
    catch(invalid_argument)
    {
        return;
    }
}

void TUNome::nomeGrande()
{
    try
    {
        nome->setNome("Joao lucas matheus barbosinha picles e azeitona sao nojentos");
        resultado=FALHA;
    }
    catch(invalid_argument)
    {
        return;
    }
}

void TUNome::nomeMinusculo()
{
    try
    {
        nome->setNome("matheus");
        resultado=FALHA;
    }
    catch(invalid_argument)
    {
        return;
    }
}

void TUNome::nomeDuasMaiusculas()
{
    try
    {
        nome->setNome("MatHeus");
        resultado=FALHA;
    }
    catch(invalid_argument)
    {
        return;
    }
}

void TUNome:: run()
{
    cout<<"Teste de unidade Nome: ";
    setUp();
    nomeValido();
    nomeComDigito();
    nomeGrande();
    nomeMinusculo();
    nomeDuasMaiusculas();
    if(resultado == SUCESSO)
    {
        cout<<"BEM SUCEDIDO"<<endl;
    }
    else
    {
        cout<<"FACASSOU"<<endl;
    }
    tearDown();
}

/*-------------------------------------------- Teste de Unidade Email-------------------------------------------------------*/

void TUEmail::setUp()
{
    email = new Email();
    resultado = SUCESSO;
}

void TUEmail::tearDown()
{
    delete email;
}

void TUEmail::emailValido()
{
    try
    {
        email->setEmail("joaolucas.cruz411@gmail");
        if(email->getEmail() != "joaolucas.cruz411@gmail")
        {
            resultado=FALHA;
        }
    }
    catch(invalid_argument)
    {
        resultado=FALHA;
    }
}

void TUEmail::emailDomNumerico()
{
    try
    {
        email->setEmail("barboso@991929");
        resultado=FALHA;
    }
    catch(invalid_argument)
    {
        return;
    }
}

void TUEmail::emailHifenDominio()
{
    try
    {
        email->setEmail("joaolucas@-hotmail");
        resultado=FALHA;
    }
    catch(invalid_argument)
    {
        return;
    }
}

void TUEmail::emailSemArroba()
{
    try
    {
        email->setEmail("joaolucasyahoo");
        resultado=FALHA;
    }
    catch(invalid_argument)
    {
        return;
    }
}

void TUEmail::emailPontoLocal()
{
    try
    {
        email->setEmail(".barbosBarboso@matheus");
        resultado=FALHA;
    }
    catch(invalid_argument)
    {
        return;
    }
}

void TUEmail::run()
{
    cout<<"Teste de Unidade Email: ";
    setUp();
    emailValido();
    emailDomNumerico();
    emailHifenDominio();
    emailPontoLocal();
    emailSemArroba();
    if(resultado==SUCESSO)
    {
        cout<<"BEM SUCEDIDO"<<endl;
    }
    else
    {
        cout<<"FRACASSOU"<<endl;
    }
    tearDown();
}
/*-------------------------------------------------------Teste de unidade Data--------------------------------------------------*/

void TUData::setUp()
{
    data = new Data();
    resultado=SUCESSO;
}

void TUData::tearDown()
{
    delete data;
}

void TUData::dataValida()
{
    try
    {
        data->setData("29/02/2016");
        if(data->getData()!="29/02/2016")
        {
            resultado=FALHA;
        }
    }
    catch (invalid_argument)
    {
        resultado=FALHA;
    }

}

void TUData::dataAnoInval()
{
    try
    {
        data->setData("01/01/2100");
        resultado=FALHA;
    }
    catch (invalid_argument)
    {
        return;
    }
}

void TUData::dataMesInval()
{
    try
    {
        data->setData("01/13/2010");
        resultado=FALHA;
    }
    catch (invalid_argument)
    {
        return;
    }
}

void TUData::dataDiaInval()
{
    try
    {
        data->setData("32/01/2010");
        resultado=FALHA;
    }
    catch (invalid_argument)
    {
        return;
    }
}

void TUData::dataNaoBisex()
{
    try
    {
        data->setData("29/02/2009");
        resultado=FALHA;
    }
    catch (invalid_argument)
    {
        return;
    }
}

void TUData::dataComChar()
{
    try
    {
        data->setData("0a/01/2000");
        resultado=FALHA;
    }
    catch (invalid_argument)
    {
        return;
    }
}

void TUData::dataSemBarra()
{
    try
    {
        data->setData("0101210099");
        resultado=FALHA;
    }
    catch (invalid_argument)
    {
        return;
    }
}

void TUData::run()
{
    cout<<"teste de unidade Data: ";
    setUp();
    dataValida();
    dataAnoInval();
    dataMesInval();
    dataComChar();
    dataNaoBisex();
    dataSemBarra();
    if(resultado==SUCESSO)
    {
       cout<<"BEM SUCEDIDO"<<endl;
    }
    else
    {
        cout<<"FRACASSOU"<<endl;
    }
    tearDown();
}
/*-------------------------------------------------------Teste de Unidade de Senha----------------------------------------------*/

void TUSenha::setUp()
{
    senha = new Senha();
    resultado = SUCESSO;
}

void TUSenha::tearDown()
{
    delete senha;
}

void TUSenha::SenhaValida()
{
    try
    {
        senha->setSenha("Piccolo9");
        if(senha->getSenha() != "Piccolo9")
        {
            resultado=FALHA;
        }
    }
    catch(invalid_argument)
    {
        resultado=FALHA;
    }
}

void TUSenha::senhaSemMai()
{
    try
    {
        senha->setSenha("piccolo9");
        resultado=FALHA;
    }
    catch(invalid_argument)
    {
        return;
    }
}

void TUSenha::senhaSemMin()
{
    try
    {
        senha->setSenha("PICCOLO9");
        resultado=FALHA;
    }
    catch(invalid_argument)
    {
        return;
    }
}

void TUSenha::senhaSemDig()
{
    try
    {
        senha->setSenha("piccoloo");
        resultado=FALHA;
    }
    catch(invalid_argument)
    {
        return;
    }
}

void TUSenha::senhaCharEsp()
{
    try
    {
        senha->setSenha("piccolo*");
        resultado=FALHA;
    }
    catch(invalid_argument)
    {
        return;
    }
}

void TUSenha::senhaGrande()
{
    try
    {
        senha->setSenha("piccoloooooooooo");
        resultado=FALHA;
    }
    catch(invalid_argument)
    {
        return;
    }
}

void TUSenha::run()
{
    cout<<"teste de unidade Senha: ";
    setUp();
    SenhaValida();
    senhaSemMai();
    senhaSemMin();
    senhaSemDig();
    senhaCharEsp();
    senhaGrande();
    if(resultado==SUCESSO)
    {
        cout<<"BEM SUCEDIDO"<<endl;
    }
    else
    {
        cout<<"FRACASSOU"<<endl;
    }
}
/*-----------------------------------------------------Testes Classe de Termo---------------------------------------------------*/

void TUClasseDeTermo::setUp()
{
    classe = new ClasseDeTermo();
    resultado = SUCESSO;
}

void TUClasseDeTermo::tearDown()
{
    delete classe;
}

void TUClasseDeTermo::classeValida()
{
    try
    {
        classe->setClasse("PT");
        if(classe->getClasse() != "PT")
        {
            resultado = FALHA;
        }
    }
    catch(invalid_argument)
    {
        resultado=FALHA;
    }
}

void TUClasseDeTermo::classeInexistente()
{
    try
    {
        classe->setClasse("naoEX");
        resultado=FALHA;
    }
    catch(invalid_argument)
    {
        return;
    }
}

void TUClasseDeTermo::run()
{
    cout<<"Teste de unidade CasseDeTermo: ";
    setUp();
    classeValida();
    classeInexistente();
    if(resultado==SUCESSO)
    {
        cout<<"BEM SUCEDIDO"<< endl;
    }
    else
    {
        cout<<"FRACASSOU"<<endl;
    }
    tearDown();
}

/*---------------------------------------------------------Teste TextoDef-------------------------------------------------------*/

void TUTextoDef::setUp()
{
    texto = new TextoDef();
    resultado = SUCESSO;
}

void TUTextoDef::tearDown()
{
    delete texto;
}

void TUTextoDef::textoValido()
{
    try
    {
        texto->setTexto("Esse texto é válio");
        if(texto->getTexto() != "Esse texto é válio")
        {
            resultado = FALHA;
        }
    }
    catch(invalid_argument)
    {
        resultado=FALHA;
    }
}

void TUTextoDef::textoGrande()
{
    try
    {
        texto->setTexto("Este texto é muito grande para obedecer ao critério de tamanho que permite apenas 30 caracteres");
        resultado=FALHA;
    }
    catch(invalid_argument)
    {
        return;
    }
}

void TUTextoDef::run()
{
    cout<<"Teste de unidade para Texto Definicao: ";
    setUp();
    textoValido();
    textoGrande();
    if(resultado==SUCESSO)
    {
        cout<<"BEM SUCEDIDO"<<endl;
    }
    else
    {
        cout<<"Fracassou"<<endl;
    }
    tearDown();
}
/*----------------------------------------------------Testes para a classe Idioma-----------------------------------------------*/

void TUIdioma::setUp()
{
    idioma = new Idioma();
    resultado = SUCESSO;
}

void TUIdioma::tearDown()
{
    delete idioma;
}

void TUIdioma::idiomaValido()
{
    try
    {
        idioma->setIdioma("POR");
        if(idioma->getIdioma() != "POR")
        {
            resultado=FALHA;
        }
    }
    catch(invalid_argument)
    {
         resultado=FALHA;
    }
}
void TUIdioma::idiomaInvalido()
{
    try
    {
        idioma->setIdioma("JAP");
        resultado=FALHA;
    }
    catch(invalid_argument)
    {
        return;
    }
}

void TUIdioma::run()
{
    cout<<"Teste de unidade para Idioma: ";
    setUp();
    idiomaValido();
    idiomaInvalido();
    if(resultado==SUCESSO)
    {
        cout<<"BEM SUCEDIDO"<<endl;
    }
    else
    {
        cout<<"FALHOU"<<endl;
    }
    tearDown();
}

/*-------------------------------------------------Testes para classe Telefone--------------------------------------------------*/


void TUTelefone::setUp()
{
    telefone = new Telefone();
    resultado = SUCESSO;
}

void TUTelefone::tearDown()
{
    delete telefone;
}

void TUTelefone::telefoneValido()
{
    try
    {
        telefone->setTelefone("6195544-6677");
        if(telefone->getTelefone()!= "6195544-6677")
        {

            resultado=FALHA;
        }
    }
    catch(invalid_argument)
    {

        resultado=FALHA;
    }
}

void TUTelefone::telefoneComChar()
{
    try
    {
        telefone->setTelefone("619a444-6677");
        resultado=FALHA;

    }
    catch(invalid_argument)
    {
        return;
    }
}

void TUTelefone::telefoneSemhifen()
{
    try
    {
        telefone->setTelefone("619556486677");
        resultado=FALHA;
    }
    catch(invalid_argument)
    {
        return;
    }
}

void TUTelefone::telefoneSemDDD()
{
    try
    {
        telefone->setTelefone("95594-6677");
        resultado=FALHA;

    }
    catch(invalid_argument)
    {
        return;
    }
}

void TUTelefone::telefoneGrande()
{
    try
    {
        telefone->setTelefone("6195594-6679799");
        resultado=FALHA;
        cout<<"Aqui"<<endl;
    }
    catch(invalid_argument)
    {
        return;
    }
}

void TUTelefone::run()
{
    cout<<"Teste de unidade para Telefone: ";
    setUp();
    telefoneValido();
    telefoneComChar();
    telefoneSemhifen();
    telefoneSemDDD();
    if(resultado==SUCESSO)
    {
        cout<<"BEM SUCEDIDO"<<endl;;
    }
    else
    {
         cout<<"FRACASSOU"<<endl;
    }
    tearDown();
}


/*------------------------------------------------ Teste para Sobrenome---------------------------------------------------------*/


void TUSobrenome::setUp()
{
    sobrenome = new Sobrenome();
    resultado = SUCESSO;
}

void TUSobrenome::tearDown()
{
    delete sobrenome;
}

void TUSobrenome::sobrenomeValido()
{
    try
    {
        sobrenome->setSobreNome("Armando");
        if(sobrenome->getSobreNome() != "Armando" )
        {
            resultado=FALHA;
        }
    }
    catch(invalid_argument)
    {
        resultado=FALHA;
    }
}

void TUSobrenome::sobrenomeMin()
{
   try
   {
       sobrenome->setSobreNome("armando");
       resultado=FALHA;
   }
   catch(invalid_argument)
   {
       return;
   }
}

void TUSobrenome::sobrenomeComDuasMai()
{
   try
   {
       sobrenome->setSobreNome("ArmAndo");
       resultado=FALHA;
   }
   catch(invalid_argument)
   {
       return;
   }
}

void TUSobrenome::sobrenomeComDig()
{
   try
   {
       sobrenome->setSobreNome("ArmAndo99");
       resultado=FALHA;
   }
   catch(invalid_argument)
   {
       return;
   }
}

void TUSobrenome::sobrenomeGrande()
{
   try
   {
       sobrenome->setSobreNome("ArmAndopereiracorreiademelotecnicasdeprogramacaobrasislia");
       resultado=FALHA;
   }
   catch(invalid_argument)
   {
       return;
   }
}

void TUSobrenome:: run()
{
    cout<<"Teste de unidade para Sobrenome: ";
    setUp();
    sobrenomeValido();
    sobrenomeMin();
    sobrenomeComDuasMai();
    sobrenomeComDig();
    sobrenomeGrande();
    if(resultado==SUCESSO)
    {
        cout<<"BEM SECEDIDO"<<endl;
    }
    else
    {
        cout<<"FRACASSOU"<<endl;
    }
    tearDown();
}

/*-----------------------------------------------------Testes Endereco---------------------------------------------------------*/

void TUEndereco::setUp()
{
    endereco = new Endereco();
    resultado = SUCESSO;
}

void TUEndereco::tearDown()
{
    delete endereco;
}

void TUEndereco::enderecoValido()
{
    try
    {
        endereco->setEndereco("Avenida Paulista");
        if(endereco->getEndereco()!="Avenida Paulista")
        {

            resultado=FALHA;
        }
    }
    catch(invalid_argument)
    {

        resultado=FALHA;
    }
}

void TUEndereco::enderecoEspacoInicio()
{
    try
    {
        endereco->setEndereco(" Avenida Paulista");
        resultado=FALHA;

    }
    catch(invalid_argument)
    {
        return;
    }
}

void TUEndereco::enderecoEspacoFim()
{
    try
    {
        endereco->setEndereco("Avenida Paulista ");
        resultado=FALHA;

    }
    catch(invalid_argument)
    {
        return;
    }
}

void TUEndereco::enderecoEspacoDuplo()
{
    try
    {
        endereco->setEndereco("Avenida  Paulista");
        resultado=FALHA;
        cout<<"Aqui"<<endl;
    }
    catch(invalid_argument)
    {
        return;
    }
}

void TUEndereco::run()
{
    cout<<"Teste de unidade para Endereco: ";
    setUp();
    enderecoValido();
    enderecoEspacoInicio();
    enderecoEspacoFim();
    enderecoEspacoDuplo();

    if(resultado==SUCESSO)
    {
        cout<<"BEM SUCEDIDO"<<endl;
    }
    else
    {
        cout<<"FRACASSOU"<<endl;
    }
    tearDown();
}
