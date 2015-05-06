#include "lista.h"

bool lista::vazia(){
    return (prim == NULL);
}

/* f. Função imprime(), que imprime os elementos da lista. */
void lista::imprime() const{
    elo *p;
    cout << "Elementos da lista" << endl;
    for(p=prim; p!=NULL; p=p->prox)
        cout << p->dado << ' ';
    cout << endl;
}