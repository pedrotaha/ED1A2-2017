#include <stdio.h>
#include <stdlib.h>
#include "filaestaticas.h"

int vazia(struct Fila f){
    if(f.fim == FILA_VAZIA){
        printf("\n\nFila VAZIA!");
        return SIM;
    }
    else{
        return NAO;
    }
}

int cheia(struct Fila f){
    if(f.fim == (MAX_ELEM - 1)){
        printf("\n\nFila CHEIA!");
        return SIM;
    }
    else{
        return NAO;
    }
}

void iniciarFila(struct Fila* f){
    f->fim = FILA_VAZIA;
    f->inicio = INICIO;
    for(int i = 0; i < MAX_ELEM; i++){
        f->elem[i] = 0;
    }
}

void fim(struct Fila f){
    if(vazia(f) == SIM){
        printf("\n\nFila VAZIA!");
    }
    else{
        printf("\n\nPosição final atual: %d", f.fim);
        printf(" - Elemento: %c",f.elem[f.fim]);
    }
}

void inicio(struct Fila f){
    if(vazia(f) == SIM){
        printf("\n\nFila VAZIA!");
    }
    else{
        printf("\n\nPosição inicial atual: %d", f.inicio);
        printf(" - Elemento: %c",f.elem[f.inicio]);
    }
}

void listarElementos(struct Fila f){
    if(f.fim == FILA_VAZIA){
        printf("\n\nERRO!! Fila vazia.");
    }
    else{
        printf("\n\n======ELEMENTOS DA FILA======\n\n");
        for(int i = f.inicio; i <= f.fim; i++){
            printf("%c ", f.elem[i]);
        }
    }
}

void inserir(struct Fila* f, char dado){
    if(f->fim == (MAX_ELEM - 1)){
        printf("\n\nERRO!! Fila cheia.");
    }
    else{
        f->fim++;
        f->elem[f->fim] = dado;
        
    }
}

char remover(struct Fila* f){
    char backup;
    if(f->fim == FILA_VAZIA){
        printf("\n\nERRO!! Fila vazia.");
    }
    else{ 
        backup = f->elem[f->inicio];
        f->elem[f->inicio] = 0;
        f->inicio++;
        if(f->inicio == (f->fim + 1)){
            iniciarFila(f);
        }
        else{
            return backup;
        }
    }
}
