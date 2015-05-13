//
//  ordlist.cpp
//  Trabalho 2
//
//  Created by Diogo Martins on 4/28/15.
//  Copyright (c) 2015 Diogo Martins. All rights reserved.
//

#include "orddist.h"
#include "lista.h"
#include "math.h"
#define TOTAL_DE_ITEMS 5

int Menu(){
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
orddist::orddist(int base): b(base), filas(new lista[base])
{}

/*
 b. Função void carrega(). Esta função lê, via teclado, uma lista de números e insere em L. Em seguida, calcula 
 o maior comprimento da representação das chaves na base b e armazena seu valor no atributo d da classe. 
 Para tal, chama a função maior_comprimento da classe lista.
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
    d = L.maior_comprimento();
}

/*
 Dado um número `number` a função retorna o dígito correspondente a posição passada em `digit`
 */
int getDigit(int number, int digit){
    number /= pow(10, digit);
    return number % 10;
}

/*
 Dada uma lista `l`, a função remove todos os itens da mesma
 */
void limparLista(lista &l){
    int elem;
    while (l.remove(elem)){}
}

/*
 c. Função void ordena(). Esta função faz a ordenação propriamente dita.
*/
void orddist::ordena(){
    for (int i=0; i<d; i++) {
        int numero;
        while(L.remove(numero)){
            int numeroDaFila = getDigit(numero, i);         // Obtém dígito do elemento na posição i
            filas[numeroDaFila].insere(numero);             // Adiciona elemento na fila numeroDaFila
        }
        // Concatena as `k` filas
        for (int k=0; k<b; k++)
            while(filas[k].remove(numero))
                L.insere(numero);
    }
    L.imprime();
}