#include <stdio.h>
#include <stdlib.h>
#include "fecirculares.h"

void iniciarFila(struct Fila* f){
    f->inicio = 1;
    f->fim = 0;
    f->tamanho = 0;
    for(int i = 0; i < MAX_ELEM; i++){
        f->elem[i] = 0;
    }
}

void inserir(struct Fila* f, char dado){
    if(f->tamanho == MAX_ELEM - 1){
        printf("\n\nERRO ao inserir, Fila Cheia!");
    }
    else{
        f->tamanho++;
        f->fim = (f->fim % (MAX_ELEM - 1)) + 1;//Sempre soma 1, no 9 ele volta para o 1
        f->elem[f->fim] = dado;
    }
}

void remover(struct Fila* f){
    if(f->tamanho == 0){
        printf("\n\nERRO ao remover, Fila Vazia!");
    }
    else{
        f->tamanho--;
        f->elem[f->inicio] = 0;
        f->inicio = (f->inicio % (MAX_ELEM - 1) + 1);//Sempre soma 1, no 9 ele volta para o 1
    }
}

char inicio(struct Fila f){
    if(f.tamanho == 0){
        printf("\n\nERRO ao consultar o primeiro elemento, Fila Vazia!");
        return 0;
    }
    else{
        return (f.elem[f.inicio]);
    }
}

int vazia(struct Fila f){
    if(f.tamanho == 0){
        printf("\n\nFila Vazia.");
        return SIM;
    }
    else{
        return NAO;
    }
}

int cheia(struct Fila f){
    if(f.tamanho == (MAX_ELEM  - 1)){
        printf("\n\nFila Cheia.");
        return SIM;
    }
    else{
        return NAO;
    }
}

void listarElementos(struct Fila f){
    if(f.tamanho == 0){
        printf("\n\nFila Vazia.");
    }
    else{
        printf("\n\n======Mostrando a Fila======\n\n");
        for(int i = 0; i <= MAX_ELEM; i++){
            if(f.elem[i] != 0){
                printf("%c ", f.elem[i]);
            }
        }
    }
}