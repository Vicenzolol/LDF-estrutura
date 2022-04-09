#include <stdio.h>
#include <stdlib.h>
#include "Fila.h"
#include "Pilha.h"

int main()
{

    printf("Operaçõe em Fila\n ");
    Fila* p = criar();
    Fila* u = criar();

    p = incluir(p, &u, 5);
    p = incluir(p, &u, 6);
    p = incluir(p, &u, 7);
    p = incluir(p, &u, 8);
    listar(p);
    p = remover(p, &u);
    listar(p);
    p = remover(p, &u);
    listar(p);
    p = remover(p, &u);
    listar(p);
    p = remover(p, &u);
    listar(p);
    printf("Ultimo: %d ", u);


    printf("Operaçõe em Pilha\n ");

    Pilha* pP = criarPilha();
    pP = incluirPilha(pP, 1);
    pP = incluirPilha(pP, 2);
    pP = incluirPilha(pP, 3);
    pP = incluirPilha(pP, 4);
    listarPilha(pP);
    pP = removerPilha(pP);
    listarPilha(pP);
    pP = removerPilha(pP);
    listarPilha(pP);
    pP = removerPilha(pP);
    listarPilha(pP);
    pP = removerPilha(pP);
    listarPilha(pP);

    return 0;
}
