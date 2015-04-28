#include <stdio.h>

class lista{
protected:
    struct elo{
        int dado;
        elo * prox;
        elo():prox(NULL){};
        elo(int elem, elo *prox_elem=NULL):
        dado(elem),prox(prox_elem) {}
    };
    elo *prim;                  /* ponteiro pra primeiro elemento */
    int qtd_digitos(int elem);  /* Calcula a qtd de digitos de um inteiro */
public:
    lista():prim(NULL) {};
    ~lista();
    bool vazia();
    void insere(const int& novo);
    bool remove(int& elem);
    int maior_comprimento();
    void imprime() const;
};