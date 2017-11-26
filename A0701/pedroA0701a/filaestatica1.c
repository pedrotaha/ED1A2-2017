#include <stdio.h>
#include <stdlib.h>
#include "filaestatica1.h"

int vazia(struct Fila q){
    if(q.tamanho == 0){
        return SIM;
    }
    return NAO;
}

int cheia(struct Fila q){
    if(q.tamanho == MAX_ELEM){
        return SIM;
    }
    return NAO;
}

void iniciarFila(struct Fila* q){
    for(int i = 0; i < MAX_ELEM; i++){
        q->elem[i] = ELEM_NULO;
    }
    q->tamanho = 0;
}

char obterInicio(struct Fila q){
    char dado = ELEM_NULO;
    if(!vazia(q)){
        dado = q.elem[0];
    }
    return dado;
}

void listarElementos(struct Fila q){
    if(vazia(q)){
        printf("\nERRO ao listar, Fila vazia!!!\n");
    }
    else{
        printf("\n\n===== Conteúdo da Fila =====");
        for(int i = 0; i < q.tamanho; i++){
            printf("\n[%d] = %c", i + 1, q.elem[i]);
        }
    }
}

int inserir(struct Fila* q, char e){
    if(!cheia(*q)){
        q->elem[q->tamanho] = e;
        q->tamanho++;
    }
    else{
        return FILA_CHEIA;
    }
    return SUCESSO;
}

char remover(struct Fila* q){
    char e = ELEM_NULO;
    e = obterInicio(*q);
    if(e != ELEM_NULO){
        for(int i = 0; i < (q->tamanho - 1); i++){
            q->elem[i] = q->elem[i+1];
        }
        q->tamanho--;
        q->elem[q->tamanho] = ELEM_NULO;
    }
    return e;
}