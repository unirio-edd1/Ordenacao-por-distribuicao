//
//  ordlist.cpp
//  Trabalho 2
//
//  Created by Diogo Martins on 4/28/15.
//  Copyright (c) 2015 Diogo Martins. All rights reserved.
//

#include "orddist.h"
#define TOTAL_DE_ITEMS 5

int Menu()
{
    int escolha;
    
    cout << "--------------------------\n";
    cout << "Selecione uma opcao:\n";
    cout << "1. Insere elemento (no. inteiro) na lista\n";
    cout << "2. Fim.\n";
    cout << "Sua opcao: ";
    cin >> escolha;
    return escolha;
}

/*
 a. O construtor da classe atualiza o valor de b = 10 e inicializa o vetor filas com b elementos do tipo lista.
 */
orddist::orddist(int base): b(base), filas(new lista[30])
{}

/*
 b. Função void carrega(). Esta função lê, via teclado, uma lista de números e insere em L. Em seguida, calcula o maior comprimento da representação das chaves na base b e armazena seu valor no atributo d da classe. Para tal, chama a função maior_comprimento da classe lista.
 */
void orddist::carrega(){
    int item, escolha;
    bool fim = false;
    
    while((!fim) && (escolha = Menu())){
        switch(escolha) {
            case 1:
                cout << "Entre com elemento para inserir: ";
                cin >> item;
                L.insere(item);
                break;
            case 2:
                fim = true;
                break;
        }
    }
    
}

/*
 c. Função void ordena(). Esta função faz a ordenação propriamente dita.
*/
void orddist::ordena(){
    
}