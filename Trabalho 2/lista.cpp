#include "lista.h"
/*
 a. Função vazia, que determina se a lista está vazia ou não.
 */
bool lista::vazia(){
    return (prim == NULL);
}

/* 
 f. Função imprime(), que imprime os elementos da lista. 
 */
void lista::imprime() const{
    elo *p;
    cout << "Elementos da lista" << endl;
    for(p=prim; p!=NULL; p=p->prox)
        cout << p->dado << ' ';
    cout << endl;
}

/*
 b. Função void insere(const int& novo), que insere novo no final da lista.
 */
void lista::insere(const int &novo){
    if(vazia()){
        prim = new elo(novo);
    }
    else{
        elo * p;
        for(p=prim; p!=NULL; p=p->prox){
            if(p->prox == NULL){
                p->prox = new elo(novo);
            }
        }
    }
}

/*
 c. Função bool remove(int& elem), que remove o primeiro elemento da lista e retorna seu valor na variável elem. Retorna true se a operação foi realizada com sucesso e false caso contrário.
 */
bool lista::remove(int &elem){
    if (vazia())
        return false;
    
    elem = prim->dado;
    prim = prim->prox;
    return true;
}

/*
 Função auxiliar que retorna a quantidade de dígitos de um inteiro. Se o valor for 0, retorna 1, caso contrário, inicia-se um laço sobre uma divisão por 10, que serve para quebrar um número, resultando no seguinte chinês:
        elem = 666  | cont = 0
        elem = 66   | cont = 1
        elem = 6    | cont = 2
        elem = 0    | cont = 3
 
 */
int lista::qtd_digitos(int elem){
    if (elem == 0)
        return 1;
    else{
        int cont;
        for (cont = 0; elem != 0; elem /= 10) {
            cont++;
        }
        return cont;
    }
}

/*
d. Função int maior_comprimento(). Esta função percorre a lista de inteiros que chamou a função e, para cada elemento da lista, calcula o comprimento do elemento, armazenando o valor do maior comprimento entre todos os elementos. No final, a função retorna o maior comprimento de inteiro entre todos os elementos da lista. A função usa a função auxiliar int qtd_digitos(int elem) que retorna a quantidade de dígitos de um inteiro.
*/

int lista::maior_comprimento(){
    int maior = 0;
    elo * p;
    
    for(p=prim; p!=NULL; p=p->prox){
        int digitos = qtd_digitos(p->dado);
        if (digitos > maior)
            maior = digitos;
    }
    return maior;
}