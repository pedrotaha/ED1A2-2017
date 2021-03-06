#include <stdio.h>
#include <stdlib.h>
#include "fecirculares.h"

void verificacao(struct Fila minhaFila){
    if(vazia(minhaFila) == SIM){
        printf("\n");
    }
    else{ if(cheia(minhaFila) == SIM){
            printf("\n");
            }
            else{ 
                printf("\n\nFila não cheia, porém com elementos");
            }   
        }
}

int main(int argc, char** argv) {
    struct Fila minhaFila;
    //Iniciando a Fila
    iniciarFila(&minhaFila);
    //Verificando se está vazia
    verificacao(minhaFila);
    //Inserindo elementos
    inserir(&minhaFila, 'A');
    inserir(&minhaFila, 'B');
    inserir(&minhaFila, 'C');
    inserir(&minhaFila, 'D');
    inserir(&minhaFila, 'E');
    //Listando os elementos
    listarElementos(minhaFila);
    //Removendo um elemento
    remover(&minhaFila);
    listarElementos(minhaFila);
    //Removendo todos os elementos
    remover(&minhaFila);
    remover(&minhaFila);
    remover(&minhaFila);
    remover(&minhaFila);
    //Tentando remover da Fila vazia
    remover(&minhaFila);
    //Verificando se a Fila foi reiniciada
    verificacao(minhaFila);
    //Pegando a posição inicial e final dos índices
    inserir(&minhaFila, 'A');
    inserir(&minhaFila, 'B');
    inserir(&minhaFila, 'C');
    inserir(&minhaFila, 'D');
    inserir(&minhaFila, 'E');
    remover(&minhaFila);
    remover(&minhaFila);
    listarElementos(minhaFila);
    char n = inicio(minhaFila);
    if(n != 0){
        printf("\n\nElemento do início: %c", n);
    }
    inserir(&minhaFila, 'A');
    inserir(&minhaFila, 'B');
    inserir(&minhaFila, 'C');
    inserir(&minhaFila, 'D');
    inserir(&minhaFila, 'E');
    inserir(&minhaFila, 'A');
    //Tentando inserir com a Fila cheia
    inserir(&minhaFila, 'A');


    return (EXIT_SUCCESS);
}

