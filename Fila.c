#include <stdio.h>
#include "Fila.h"

Fila* criar() {
    return NULL;
}
// método para inclusão ao final da lista
Fila* incluir(Fila* p, Fila** u, int info){
    Fila* novo = malloc(sizeof (Fila));
    novo->info = info;
    novo->proximo = NULL;
    novo->anterior = *u;
    if (*u != NULL) {
        (*u)->proximo = novo;
    } else *u = novo;
    *u = novo;
    if (p != NULL) return p;
    else return novo;
}

void listar(Fila* list) {
    Fila* n = list;
    for(; n != NULL; n = n->proximo) printf("%d, ", n->info);
    printf("\n");
}

Fila* remover(Fila* p, Fila** u) {
    if (p == NULL) return NULL;

    Fila* n = p;
    n = n->proximo;
    if (n != NULL)
        n->anterior = NULL;
    else *u = n;
    free(p);

    return n;
}
