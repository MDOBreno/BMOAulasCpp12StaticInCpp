//
//  main.cpp
//  BMOAulasCpp12StaticInCpp
//
//  Created by Breno Medeiros on 06/06/21.
//

#include <iostream>


//Conceitos para relembrar:
// 1) UnidadeDeTranslacao(TranslationUnit): Processo durante a compilacao que ocorre um em
//    cada arquivo *.cpp, que faz a transformacao desse aquivo *.cpp(c++) em um arquivo *.o(objeto)
// 2) Arquivo *.o(objeto): É o arquivo contendo o binario de um unico arquivo *.cpp. Ele surge atravez
//    da acao da UnidadeDeTranslacao, e apos a execucao de todos os arquivos *.o(transformacao dos
//    arquivos *.cpp em *.o) é que e possivel o compilador gerar o ArquivoExecutavel(que é a junção
//    de todos os arquivos *.o).
// 3) ArquivoExecutavel: É o arquivo binario que equivale a todo o projeto c++ compilado em um unico
//    arquivo. No MacOS é o arquivo *.exec, e no windows é o *.exe
// 4) Ligador(Linker): Processo durante a execucao de uma UnidadeDeTranslacao de uma arquivo *.cpp
//    que realiza o ato de copiar e colar o codigo de outros arquivos para esse mesmo arquivo *.cpp
//    em todos os pontos que este realiza chamadas.
//    Obs: Geralmente erros de Linker ocorrem quando o desenvolvedor escreve a declaracao/cabecalho de
//         um certo metodo no arquivo *.hpp, mas se esqueceu de escrever a implementacao em seu arquivo
//         *.cpp desse mesmo metodo(com exatamente o mesmo cabecalho).
// 5) Simbolo(Symbol): É uma referencia ou instancia que foi escrita no arquivo/UnidadeDeTranslacao atual
//    que está referenciando/usando o conteudo de algum outro arquivo/UnidadeDeTranslacao.
// 6) Escopo(Scope): O Escopo de um "{}"(leia-se "Abre colchetes e fecha colchetes") é o conjunto de
//    todo o código que estiver escrito dentro desse "Abre colchetes e fecha colchetes". Ou seja,
//    o conjunto de todo o codigo  que vem depois do "Abre colchete" e que também esteja antes do
//    "Fecha colchete" é chamado de escopo.
//    Obs: O conteudo mais externo da identação de um arquivo/UnidadeDeTranslacao, mesmo que não esteja
//         dentro de um "Abre colchetes e fecha colchetes", tambem é chamado de Escopo.

//Conceito novo adiquiridos nessa aula:
// 1) Quando a terminologia 'static' é definida/escrita DENTRO do escopo fora de uma classe/struct
//    significa que ela somente estara visivel para o arquivo/UnidadeDeTranslacao em que foi escrito.
// 2) Quando a terminologia 'static' é definida/escrita FORA do escopo fora de uma classe/struct
//    significa que em todas as 'X' instancias dessa classe/struct cujos atributos/metodos que foram
//    escritos com 'static' ocuparao apenas uma(e nao 'X') posicao na memoria, tal que essa posicao na
//    memoria sera compartilhada estre todas essas 'X' instancias da classe/struct.



//Existem DUAS FORMAS de projetos Cpp funcionarem com declaracoes 'static' fora de classes(em que
// execificamente colocamos uma variavel estatico chamada sVariavel no arquivo Static.cpp), e na qual
// queremos declarar uma outra variavel global de mesmo nome(sVariavel) no arquivo main.cpp:

// Caso de Funcionamento 1: Quando desejamos usar na main.cpp a variavel global escrita na main.cpp
//int sVariavel = 10;

// Caso de Funcionamento 2: Quando desejamos usar na main.cpp a variavel global escrita na Static.cpp
extern int sVariavel; //Isso fara com que o compilador busque por essa variavel em uma UnidadeDeTranslacao
                      // Externa(ou seja, no aquivo Static.cpp). A isso dar-se o nome de LincagemExterna
                      // (ExternalLinking).


int main(int argc, const char * argv[]) {
    // insert code here...
    
    std::cout << sVariavel << std::endl;
    
    std::cout << "Hello, World!\n";
    return 0;
}


