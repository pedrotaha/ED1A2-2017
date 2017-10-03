#include <stdio.h>
#include <stdlib.h>
#include "listalinearestatica.h"

void startList(struct Lista* l){
    int i;
    l->n = 0;
    for(i = 0; i < MAX_ELEM; i++){
        l->elem[i] = 0;
    }
}

char access(struct Lista l, int k){
    char data = 0;
    if(k < 0 || k > (l.n - 1)) { 
        printf("\nERRO ao acessar, a lista pode estar vazia ou o índice está fora dos limites.");       
    }
    else{
        data = l.elem[k];
    }
    return data;
}

void change(struct Lista* l, int k, char data){
    if(k < 0 || k > (l->n - 1)){
        printf("\nERRO ao alterar, a lista pode estar vazia ou o índice está fora dos limites.");
    }
    else{
        l->elem[k] = data;
    }
}

void insert(struct Lista* l, int k, char data){
    int i;
    if(l->n >= MAX_ELEM){
        printf("\nERRO ao inserir, lista cheia.");
    }
    else{
        if(k == POS_FINAL || l->n == 0 || l->n == k){
            l->elem[l->n] = data;
            l->n++;
        }
        else{
            if(k < 0 || k > (l->n-1)){
                printf("\nERRO ao inserir na posição %d, indice fora dos limites", k);
            }
            else{
                for(i = l->n; i > k; i--){
                    l->elem[i] = l->elem[i - 1];
                }
                l->elem[k] = data;
                l->n++;
            }
        }
    }
}

void remover(struct Lista* l, int k){
    int i;
    if(k == POS_FINAL){
        l->elem[(l->n)-1] = 0;
        l->n--;
    }
    else{
        if(k < 0 || k > (l->n - 1)){
            printf("\nERRO ao excluir, lista vazia ou indice fora dos limites");
        }
        else{
            for(i = k; i < l->n; i++){
                l->elem[i] = l->elem[i+1];
            }
            l->n--;
            l->elem[l->n] = 0;
        }
    }
}

void unity(struct Lista* l1, struct Lista* l2){
    int i, limit;
    if((l1->n + l2->n) <= MAX_ELEM){
        limit = l2->n;
    }
    else{
        limit = MAX_ELEM - l1->n;    
    }
    for(i = 1; i <= limit; i++){
        l1->elem[l1->n] = l2->elem[i - 1];
        l1->n++;
    }
}

void invert(struct Lista* l){
    int i;
    char aux;
    for(i = 0; i < (l->n - 1)/2; i++){
        aux = l->elem[i];
        l->elem[i] = l->elem[l->n - (i + 1)];
        l->elem[l->n - (i + 1)] = aux;
    }
}

struct Lista subList(struct Lista l, int k, int n){
    struct Lista result;
    int i;
    int limit;
    startList(&result);
    if(k < 0 || k > (MAX_ELEM - 1)){
        printf("\nERRO ao definir sublista, origem vazia ou índice além dos limites.");
    }
    else{
        if((k + n) <= MAX_ELEM){
            limit = n;
        }
        else{
            limit = MAX_ELEM - k;
        }
        for(i = 1; i <= limit; i++){
        insert(&result, POS_FINAL, l.elem[k]);
        k++;
        }
    }
    return result;
}

void insertOrder(struct Lista* l, char e){
    int k = 0;
    while((e >= l->elem[k]) && (k < l->n)){
        k++;
    }
    insert(l, k, e);
}

void showList(struct Lista l){
    int k;
    printf("\n==== Lista ====\n");
    for(k = 0; k < (l.n); k++){
        printf("\n%d° Elemento: %c", k + 1, l.elem[k]);
    }
}
// Parte do exercício b da lista A0501
int find(struct Lista* l, char search, int data[]){
    int i, m = 0;
    if(l->n == 0) { 
        printf("\nERRO ao encontrar o nó, a lista pode estar vazia ou o índice está fora dos limites.");       
    }
    else{
        for(i = 0; i < l->n; i++){
            if(l->elem[i] == search){
                data[m] = i;
                m++;
            }
        }
    }
    return m;
}

struct Lista intercalate(struct Lista* l1, struct Lista* l2) {
    struct Lista result;
    startList(&result);
    int idx, idx1, idx2;
    for (idx = 0, idx1 = 0, idx2 = 0; idx1 < l1->n && idx2 < l2->n; idx = idx + 2) {
        insert(&result, idx, l1->elem[idx1]);
        insert(&result, idx + 1, l2->elem[idx2]);
        idx1++;
        idx2++;
    }
    while(idx1 < l1->n) {
        insert(&result, idx, l1->elem[idx1]);
        idx++;
        idx1++;
    }
    while(idx2 < l2->n){ 
        insert(&result, idx, l2->elem[idx2]);
        idx++;
        idx2++;
    }
    return result;
}

void ordemC(struct Lista* l){
    char aux;
    for(int x = 0; x < l->n; x++){
        for(int y = x + 1; y < l->n; y++){
            if(l->elem[x] > l->elem[y]){
                aux = l->elem[x];
                l->elem[x] = l->elem[y];
                 l->elem[y] = aux;
            }
        }
    }  
}

void ordemD(struct Lista* l){
    char aux;
    for(int x = 0; x < l->n; x++){
        for(int y = x + 1; y < l->n; y++){
            if(l->elem[y] > l->elem[x]){
                aux = l->elem[y];
                l->elem[y] = l->elem[x];
                 l->elem[x] = aux;
            }
        }
    }  
}

void palindromo(struct Lista l){
    struct Lista ver;
    startList(&ver);
    int i = 0, k = 0, cont = 0;
    for(i = 0; i < l.n; i++){
        insert(&ver, i, l.elem[i]);
    }
    invert(&ver);
    for(k = 0; k < i; k++){
        if(ver.elem[k] == l.elem[k]){
            cont++;
        }
    }
    if(cont == i){
        printf("\n\nEsta Lista é um Palíndromo!!\n");
    }
    else{
        printf("\n\nEsta Lista NÃO é um Palíndromo!!\n");
    }
}

void removeRepited(struct Lista* l){
    for(int x = 0; x < l->n; x++){
        for(int y = x + 1; y < l->n; y++){
            if(l->elem[x] == l->elem[y]){
                remover(l, y);
            }
        }
    } 
}