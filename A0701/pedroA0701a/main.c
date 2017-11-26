#include <stdio.h>
#include <stdlib.h>
#include "filaestatica1.h"

void verificacao(struct Fila minhaFila){
    if(vazia(minhaFila) == SIM){
        printf("\nFila Vazia\n");
    }
    else{ if(cheia(minhaFila) == SIM){
            printf("\nFila Cheia\n");
            }
            else{ 
                printf("\n\nFila não cheia, porém com elementos");
            }   
        }
}

int main(int argc, char** argv) {
    struct Fila minhaFila;
    printf("\nINICIANDO A FILA============\n");
    iniciarFila(&minhaFila);
    verificacao(minhaFila);
    printf("\nINSERINDO NA FILA============\n");
    if(inserir(&minhaFila, 'A') == SUCESSO){
        printf("\n\nElemento inserido com sucesso na fila!!");
        
    }
    else{
        printf("\n\nFalha ao inserir FILA CHEIA!!");
    }
    verificacao(minhaFila);
    printf("\nINSERINDO MAIS NA FILA============\n");
    inserir(&minhaFila, 'B');
    inserir(&minhaFila, 'C');
    inserir(&minhaFila, 'D');
    inserir(&minhaFila, 'E');
    listarElementos(minhaFila);
    inserir(&minhaFila, 'F');
    inserir(&minhaFila, 'G');
    inserir(&minhaFila, 'H');
    inserir(&minhaFila, 'I');
    inserir(&minhaFila, 'J');
    printf("\nINSERINDO ATÉ ENCHER A FILA============\n");
    if(inserir(&minhaFila, 'K') == SUCESSO){
        printf("\n\nElemento inserido com sucesso na fila!!");
        
    }
    else{
        printf("\n\nFalha ao inserir FILA CHEIA!!");
    }
    listarElementos(minhaFila);
    char e;
    e = remover(&minhaFila);
    printf("\nREMOVENDO DA FILA============\n");
    if(e == ELEM_NULO){
        printf("\n\nFalha ao remover, FILA VAZIA!!");
    }
    else{
        printf("\n\nElemento [%c] removido com sucesso!", e);
    }
    printf("\nREMOVENDO MAIS DA FILA============\n");
    remover(&minhaFila);
    remover(&minhaFila);
    remover(&minhaFila);
    listarElementos(minhaFila);
    e = obterInicio(minhaFila);
    printf("\nOBTENDO O INÍCIO============\n");
    if(e == ELEM_NULO){
        printf("\n\nFalha ao obter o início, FILA VAZIA!!");
    }
    else{
        printf("\n\nElemento do início: [%c]", e);
    }
    
    

    return (EXIT_SUCCESS);
}

