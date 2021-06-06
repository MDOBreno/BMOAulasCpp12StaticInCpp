//
//  Static.cpp
//  BMOAulasCpp12StaticInCpp
//
//  Created by Breno Medeiros on 06/06/21.
//

#include "Static.hpp"

//Existem duas formas de projetos Cpp funcionarem com declaracoes 'static' fora de classes:

// Caso de Funcionamento 1: Tem mudancas nesse arquivo atual e no arquivo main.cpp
//static int sVariavel = 5;

// Caso de NAOFuncionamento 1: Tem mudancas nesse arquivo atual e no arquivo main.cpp
//int sVariavel = 5;         //Obs: Repare que se voce descomentar essa linha, vera que ocorre um erro
                             //     de linker, porque o linker nao conseguirar gerar o simbolo sVariavel
                             //     devido a ambiguidade de sVariavel aqui e no classe main.cpp

// Caso de Funcionamento 2: Tem mudancas nesse arquivo e no arquivo main.cpp
int sVariavel = 5;

// Caso de NAOFuncionamento 2: Tem mudancas nesse arquivo atual e no arquivo main.cpp
//static int sVariavel = 5;    //Obs: Repare que se voce descomentar essa linha, vera que ocorre um erro
                             //     de linker, por o linker nao conseguir encontrar o simbolo sVariavel
                             //     devido a sVariavel ser 'static'(visivel apenas nesse
                             //     arquivo/UnidadeDeTranslacao).
