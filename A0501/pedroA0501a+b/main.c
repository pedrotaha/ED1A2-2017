#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listalinearestatica.h"

int main(int argc, char** argv) {
    struct Lista result;
    struct Lista myList;
    struct Lista inter;
    startList(&myList);
    int n;
    //Inserir valores na lista 1
    insert(&myList, POS_FINAL, 'C');
    insert(&myList, POS_FINAL, 'A');
    insert(&myList, POS_FINAL, 'B');
    showList(myList);
    struct Lista myList2;
    startList(&myList2);
    //Inserir valores na lista 2
    insert(&myList2, POS_FINAL, 'A');
    insert(&myList2, POS_FINAL, 'B');
    insert(&myList2, POS_FINAL, 'C');
    showList(myList2);
    //concatena
    unity(&myList, &myList2);
    showList(myList);
    //altera o primeiro elemento para A
    change(&myList, 0, 'A');
    showList(myList);
    printf("\nAcesso ao primeiro elemento: %c\n", access(myList, 0));
    //Remove o 3 elemento
    remover(&myList, 2);
    showList(myList);
    //Inverte a lista
    invert(&myList);
    showList(myList);
    //Cria sublista
    result = subList(myList, 2, 3);
    showList(result);
    n = find(&myList, 'A');
    printf("\nO A se encontra na posição: %d\n", n);
    //Zera a lista para inserir em ordem ps:n funciona
    printf("\nORDENADAAAA\n");
    startList(&myList);
    insertOrder(&myList, 'C');
    insertOrder(&myList, 'A');
    insertOrder(&myList, 'D');
    insertOrder(&myList, 'B');
    showList(myList);
    printf("\nIntercalado maluco:\n");
    //Intercala as duas listas
    inter = intercalate(&myList, &myList2);
    showList(inter);
    startList(&myList);
    startList(&myList2);
    insert(&myList2, POS_FINAL, 'F');
    insert(&myList2, POS_FINAL, 'B');
    insert(&myList2, POS_FINAL, 'D');
    insert(&myList2, POS_FINAL, 'A');
    insert(&myList2, POS_FINAL, 'C');
    showList(myList2);
    //Coloca em ordem crescente
    printf("\nColocando em ordem crescente:\n");
    ordemC(&myList2);
    showList(myList2);
    //Coloca em ordem decrescente
    printf("\nColocando em ordem decrescente:\n");
    ordemD(&myList2);
    showList(myList2);
    //Removendo elemento do começo da lista
    remover(&myList2, 0);
    showList(myList2);
    //Removendo elemento do final da lista
    remover(&myList2, POS_FINAL);
    showList(myList2);
    
    
    return (EXIT_SUCCESS);
}

