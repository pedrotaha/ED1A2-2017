#include "pilhaestatica.h"
#include <stdio.h>
#include <stdlib.h>

int vazia(struct Pilha p){
    if(p.topo == PILHA_VAZIA){
        return SIM;
    }
    else{
        return NAO;
    }
}

int cheia(struct Pilha p){
    if(p.topo == (MAX_ELEM - 1)){
        return SIM;
    }
    else{
        return NAO;
    }
}
void iniciarPilha(struct Pilha* p){
    p->topo = PILHA_VAZIA;
    for(int i = p->topo; i >= 0; i--){
        p->elem[i] = 0;
    }
}
char obterTopo(struct Pilha p){
    if(vazia(p)){
        printf("ERRO ao obter Topo, Pilha Vazia!!");
    }
    else{
        return p.elem[p.topo];
    }
}
void listarElementos(struct Pilha p){
    if(vazia(p) == SIM){
        printf("ERRO ao listar, Pilha Vazia!!!");
    }
    else{
        printf("\n\n=======LISTANDO a PILHA=======\n\n");
        for(int i = p.topo; i >= 0; i--){
            printf("%c\n", p.elem[i]);
        }
    }
}
int inserir(struct Pilha* p, char dado){
    if(p->topo == (MAX_ELEM - 1)){
        printf("\n\nERRO ao inserir, Pilha Cheia!!");
    }
    else{
        p->elem[p->topo + 1] = dado;
        p->topo++;
        return SUCESSO;
    }
}
char remover(struct Pilha* p){
    char backup;
    if(p->topo == PILHA_VAZIA){
        printf("\n\nERRO ao remover, Pilha vazia!!");
        return PILHA_VAZIA;
    }
    else{
        backup = p->elem[p->topo];
        p->elem[p->topo] = 0;
        p->topo--;
        return backup;
    }
}