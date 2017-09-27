#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listalinearestatica.h"

int main(int argc, char** argv) {
    struct Lista result;
    struct Lista myList;
    struct Lista inter;
    startList(&myList);
    int n[MAX_ELEM];
    
    //Inserir valores na lista 17
    printf("\n\nInserir Lista 1:\n");
    insert(&myList, POS_FINAL, 'C');
    insert(&myList, POS_FINAL, 'A');
    insert(&myList, POS_FINAL, 'B');
    showList(myList);
    struct Lista myList2;
    startList(&myList2);
    
    //Inserir valores na lista 2
    printf("\n\nInserir Lista 2:\n");
    insert(&myList2, POS_FINAL, 'A');
    insert(&myList2, POS_FINAL, 'B');
    insert(&myList2, POS_FINAL, 'C');
    showList(myList2);
    
    //concatena
    printf("\n\nConcatenar Listas:\n");
    unity(&myList, &myList2);
    showList(myList);
    
    //altera o primeiro elemento para A
    printf("\n\nAlterar o primeiro elemento para A:\n");
    change(&myList, 0, 'A');
    showList(myList);
    printf("\n\nAcesso ao primeiro elemento: %c\n", access(myList, 0));
    
    //Remove o 3 elemento
    printf("\n\nRemover o terceiro elemento da Lista 1:\n");
    remover(&myList, 2);
    showList(myList);
    
    //Inverte a lista
    printf("\n\nInverter Lista 1:\n");
    invert(&myList);
    showList(myList);
    
    //Cria sublista
    printf("\n\nCriar sublista da Lista 1 a partir do terceiro elemento, 3 elementos(3°, 4° e 5°):\n");
    result = subList(myList, 2, 3);
    showList(result);
    
    int m, cont;
    for(m = 0; m < 10; m++){
        n[m] = 0;
    }
    cont = find(&myList, 'A', n);
    printf("\n\nO A se encontra na posição: ");
    for(m = 0; m < cont; m++){
        printf("%d ", n[m]);
    }

    //Zera a lista para inserir em ordem ps:n funciona
    printf("\n\nInserir ordenada:\n");
    startList(&myList);
    insertOrder(&myList, 'C');
    insertOrder(&myList, 'A');
    insertOrder(&myList, 'D');
    insertOrder(&myList, 'B');
    showList(myList);
    printf("\n\nIntercalar as duas listas:\n");
    
    //Intercala as duas listas
    inter = intercalate(&myList, &myList2);
    showList(inter);
    startList(&myList);
    startList(&myList2);
    printf("\n\nInserir elementos na Lista 2:\n");
    insert(&myList2, POS_FINAL, 'F');
    insert(&myList2, POS_FINAL, 'B');
    insert(&myList2, POS_FINAL, 'D');
    insert(&myList2, POS_FINAL, 'A');
    insert(&myList2, POS_FINAL, 'C');
    showList(myList2);
    
    //Coloca em ordem crescente
    printf("\n\nColocando em ordem crescente:\n");
    ordemC(&myList2);
    showList(myList2);
    
    //Coloca em ordem decrescente
    printf("\n\nColocando em ordem decrescente:\n");
    ordemD(&myList2);
    showList(myList2);
    
    //Removendo elemento do começo da lista
    printf("\n\nRemover o primeiro elemento da Lista 2:\n");
    remover(&myList2, 0);
    showList(myList2);
    
    //Removendo elemento do final da lista
    printf("\n\nRemover o último elemento da Lista 2:\n");
    remover(&myList2, POS_FINAL);
    showList(myList2);
    
    
    return (EXIT_SUCCESS);
}

