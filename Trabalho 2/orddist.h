#include <stdio.h>
#include "lista.h"

class orddist{
protected:
    int b;              /* base */
    int d;              /* comprimento m ́aximo do digito */
    lista* filas;       /* vetor de listas */
    lista L;            /* lista inicial e que sera ordenada */
public:
    orddist(int base = 10);
    void carrega();
    void ordena();
};
