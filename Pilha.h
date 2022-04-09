#ifndef PILHA_H
#define PILHA_H

struct pilha {
    struct pilha* anterior;
    int info;
    struct pilha* proximo;
};
typedef struct pilha Pilha;

Pilha* criarPilha();
Pilha* incluirPilha(Pilha* p, int info);
void listarPilha(Pilha* p);
Pilha* removerPilha(Pilha* p);


#endif

