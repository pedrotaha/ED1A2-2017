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
    for(int i = MAX_ELEM; i >= 0; i--){
        p->elem[i] = 0;
    }
    p->topo = PILHA_VAZIA;
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
void palindromo(struct Pilha p){
    struct Pilha inv;
    int ver = 0;
    iniciarPilha(&inv);
    for(int i = 0; i <= p.topo; i++){
        inserir(&inv, p.elem[p.topo - i]); 
        if(inv.elem[i] == p.elem[i]){
            ver = SIM;
        }
        else{
            ver = NAO;
            break;
        }
    }
    if(ver == SIM){
        printf("\n\nÉ um Palíndromo!!!");
    }
    else{
        printf("\n\nNÃO é um Palíndromo.");
    }
}

void pilhaPalindromo(struct Pilha p){
    char vet[10];
    int i = p.topo, ver;
    for(int n = 0; n <= 10; n++){
        vet[n] = 0;
    }
    for(int n = 0; n <= i; n++){
        vet[n] = remover(&p);
    }
    for(int n = 0; n <= i; n++){
        inserir(&p, vet[i - n]);
        if(p.elem[n] == vet[n]){
            ver = SIM;
        }
        else{
            ver = NAO;
            break;
        }
    }
    if(ver == SIM){
        printf("\n\nÉ um Palíndromo!!!");
    }
    else{
        printf("\n\nNÃO é um Palíndromo.");
    }
}