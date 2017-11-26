#include <stdio.h>
#include <stdlib.h>
#include "filaestatica2.h"

int vazia(struct Fila q){
    if(tamanho(q) <= 0){
        return SIM;
    }
    return NAO;
}

int cheia(struct Fila q){
    if(tamanho(q) >= MAX_ELEM){
        return SIM;
    }
    return NAO;
}

void iniciarFila(struct Fila* q){
    for(int i = 0; i < MAX_ELEM; i++){
        q->elem[i] = 0;
    }
    q->fim = FIM_VAZIO;
    q->inicio = INICIO_VAZIO;
}

char obterInicio(struct Fila q){
    char dado = ELEM_NULO;
    if(vazia(q) == NAO){
        dado = q.elem[q.inicio];
    }
    return dado;
}

void listarElementos(struct Fila q){
    int ordem;
    if(vazia(q) == SIM){
        printf("\nFila vazia!!!");
    }
    else{
        printf("\n\n=======Conteúdo da Fila=======");
        ordem = 1;
        int i = q.inicio - 1;
        do{
            i = ((i + 1) % MAX_ELEM);
            printf("\n %d° = %c", ordem, q.elem[i]);
            ordem++;
        }while(i != q.fim);
    }
}

int inserir(struct Fila* q, char e){
    if(cheia(*q) == NAO){
        q->fim = (q->fim + 1) % MAX_ELEM;
        q->elem[q->fim] = e;
    }
    else{
        printf("\n\nERRO ao inserir, Fila Cheia!!!");
        return FILA_CHEIA;
    }
    return SUCESSO;
}

char remover(struct Fila* q){
    char e = ELEM_NULO;
    if(vazia(*q) == NAO){
        e = obterInicio(*q);
        q->elem[q->inicio] = ELEM_NULO;
        if(q->inicio == q->fim){
            q->inicio = INICIO_VAZIO;
            q->fim = FIM_VAZIO;
        }
        else{
            q->elem[q->inicio] = ELEM_NULO;
            q->inicio = (q->inicio + 1) % MAX_ELEM;
        }
    }
    return e;
}

int tamanho(struct Fila q){ 
    if(q.inicio <= 0 && q.fim < 0){
        return FILA_VAZIA;
    }
    if(q.inicio <= q.fim){
        return ((q.fim - q.inicio) + 1);
    }
    return ((MAX_ELEM - q.inicio) + (q.fim + 1));
}