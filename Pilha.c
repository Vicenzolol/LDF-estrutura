#include <stdio.h>
#include "Pilha.h"
Pilha* criarPilha() {
    return NULL;
}

Pilha* incluirPilha(Pilha* p, int info){
    Pilha * novo = malloc(sizeof (Pilha));
    novo->info = info;
    novo->anterior = NULL;
    novo->proximo = p;
    if(p!= NULL){
        p->anterior = novo;
    }
    return novo;
}
Pilha* removerPilha(Pilha* p) {
    if (p == NULL) return NULL;
    Pilha* n = p;
    n = n->proximo;
    free(p);

    return n;
}
void listarPilha(Pilha* list) {
    Pilha* n = list;
    for(; n != NULL; n = n->proximo) printf("%d, ", n->info);
    printf("\n");
}
