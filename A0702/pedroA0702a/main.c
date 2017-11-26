#include <stdio.h>
#include <stdlib.h>
#include "filaestatica2.h"

int main(int argc, char** argv) {
    struct Fila minhaFila;
    printf("\n========Iniciando a Fila\n");
    iniciarFila(&minhaFila);
    printf("\n========Removendo da Fila Vazia\n");
    char e = remover(&minhaFila);
    if(e == ELEM_NULO){
        printf("ERRO ao remover, Fila Vazia!!!");
    }
    else{
        printf("Sucesso ao remover!!!");
    }
    printf("\n========Inserindo na Fila\n");
    inserir(&minhaFila, 'A');
    listarElementos(minhaFila);
    printf("\n========Inserindo mais na Fila\n");
    inserir(&minhaFila, 'B');
    inserir(&minhaFila, 'C');
    inserir(&minhaFila, 'D');
    inserir(&minhaFila, 'E');
    inserir(&minhaFila, 'F');
    listarElementos(minhaFila);
    printf("\n========Inserindo até o limite da Fila\n");
    inserir(&minhaFila, 'G');
    inserir(&minhaFila, 'H');
    inserir(&minhaFila, 'I');
    inserir(&minhaFila, 'J');
    inserir(&minhaFila, 'K');
    printf("\n========Removendo da Fila\n");
    remover(&minhaFila);
    listarElementos(minhaFila);

    return (EXIT_SUCCESS);
}

