#include <stdio.h>
#include <stdlib.h>
#include "filaencadeada.h"

    //Elementos para lista encadeada simples
    struct No *inicioA;
    struct No *nA1 = NULL;
    struct No *nA2 = NULL;
    struct No *nA3 = NULL;
    struct No *novo = NULL;
    
    //Elementos para lista duplamente encadeada
    struct No2 *inicioB;
    struct No2 *nB1 = NULL;
    struct No2 *nB2 = NULL;
    struct No2 *nB3 = NULL;
    struct No2 *novo2 = NULL;
    
    //Elementos para lista circular
    struct No3 *inicioC;
    struct No3 *nC1 = NULL;
    struct No3 *nC2 = NULL;
    struct No3 *nC3 = NULL;
    struct No3 *novo3 = NULL;

void montarListaSimples(){
    nA1 = malloc(sizeof(struct No));
    nA2 = malloc(sizeof(struct No));
    nA3 = malloc(sizeof(struct No));
    
    nA1->dado = 10;
    nA2->dado = 20;
    nA3->dado = 30;
    
    inicioA = nA1; //Aponta HEAD para o primeiro nó
    nA1->prox = nA2;
    nA2->prox = nA3;
    nA3->prox = NULL;
}

void listarListaSimples(){
    struct No *noCorrente = inicioA;
    printf("\n\n=======Listando a Lista Encadeada=======\n");
    while(noCorrente != NULL){
        printf("%d", noCorrente->dado);
        noCorrente = noCorrente->prox;
        if(noCorrente != NULL){
            printf("---->");
        }
        else{
            printf("----FIM");
        }
    }
}

void inserirListaSimples(){
    novo = malloc(sizeof(struct No));
    novo->dado = 15;
    //Inserir o nó novo entre o nó1 e nó2
    nA1->prox = novo;
    novo->prox = nA2;
}

void removerListaSimples(){
    //remover do começo da lista:
/*
    free(nA1);
    inicioA = novo;
*/
    
    //Remover o nó novo utilizado no inserir
    nA1->prox = nA2;
    novo->prox = NULL;
    free(novo);//Pode só utilizar esse
    
    //Remover do final da lista1:
/*
    free(nA3);
    nA2->prox = NULL;
*/
}

void montarListaDupla(){
    nB1 = malloc(sizeof(struct No2));
    nB2 = malloc(sizeof(struct No2));
    nB3 = malloc(sizeof(struct No2));
    
    nB1->dado = 40;
    nB2->dado = 50;
    nB3->dado = 60;
    
    inicioB = nB1;
    nB1->ant = NULL;
    nB1->prox = nB2;
    
    nB2->ant = nB1;
    nB2->prox = nB3;
    
    nB3->ant = nB2;
    nB3->prox = NULL;
}

void listarListaDupla(){
    struct No2 *noCorrente = inicioB;//Inicia a partir do HEAD
    printf("\n\n=======Listando a Lista Duplamente Encadeada=======\n");
    while(noCorrente->prox != NULL){//Enquanto não for o FIM
        printf("%d ----->", noCorrente->dado);//Mostra o dado
        noCorrente = noCorrente->prox;//avança ponteiro para o próximo elemento
    }
    if(noCorrente != NULL){//Tem um último elemento no final do avanço?
        printf("%d **----->", noCorrente->dado);//mostra o dado do último nó no final
        noCorrente = noCorrente->ant;
    }
    while(noCorrente != NULL){//Enquanto não for o FIM
        printf("%d .", noCorrente->dado);//MOstra o dado
        noCorrente = noCorrente->ant;//Avança o ponteiro para o próximo elemento?
        if(noCorrente != NULL){
            printf("====>");
        }
        else{
            printf("====FIM");
        }
    }
}

void inserirListaDupla(){
    novo2 = malloc(sizeof(struct No2));
    novo2->dado = 45;
    //Inserir o nó novo entre o nó1 e nó2
    nB1->prox = novo2;
    
    novo2->ant = nB1;
    novo2->prox = nB2;
    
    nB2->ant = novo2;
}

void removerListaDupla(){
    //removendo do começo:
/*
    nB1->prox = NULL;
    free(nB1);//Pode só utilizar esse
    inicioB = novo2;
    nB2->ant = novo2;
*/
    
    //Remover o nó novo2 utilizado no inserir
    nB1->prox = nB2;
    nB2->ant = nB1;
    novo2->prox = NULL;
    novo2->ant = NULL;
    free(novo2);//Pode só utilizar esse
    
    //Removendo do final:
/*
    nB3->ant = NULL;
    free(nB3);//Pode só utilizar esse
    nB2->prox = NULL;
*/
}

void montarListaCircular(){
    nC1 = malloc(sizeof(struct No3));
    nC2 = malloc(sizeof(struct No3));
    nC3 = malloc(sizeof(struct No3));
    
    nC1->dado = 11;
    nC2->dado = 22;
    nC3->dado = 33;
    
    inicioC = nC1;
    nC1->prox = nC2;
    nC2->prox = nC3;
    nC3->prox = inicioC;
}

void listarListaCircular(int voltas){
    int v = 1;
    struct No3 noCorrente = inicioC;
    printf("\nListando a Fila Circular:\n");
    while(v <= voltas){
        printf("%d ", noCorrente->dado);
        noCorrente = noCorrente->prox;
        if(noCorrente != inicioC){
            printf("----->");
        }
        else{
            printf("====Volta(%d)", v);
            v++;
        }
    }
}

void inserirListaCircular(){
    novo3 = malloc(sizeof(struct No3));
    novo3->dado = 15;
    nC1->prox = novo3;
    novo3->prox = nC2;
}

void removerListaCircular(){
    //removendo do começo:
/*
    inicioA = novo3;
    free(nC1);
*/
    //Remover o nó novo2 utilizado no inserir:
    nC1->prox = nC2;
    free(novo3);
    //Removendo do final:
/*
    free(nC3);
    nC2->prox = inicioC;
*/
}