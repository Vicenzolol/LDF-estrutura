#ifndef FILA_H
#define FILA_H

struct fila {
    struct fila* anterior;
    int info;
    struct fila* proximo;
};
typedef struct fila Fila;

Fila* criar();
Fila* incluir(Fila* p, Fila** u, int info);
void listar(Fila* p);
Fila* remover(Fila* p, Fila** u);


#endif // FILA_H
