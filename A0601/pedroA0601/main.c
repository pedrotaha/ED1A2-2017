#include <stdio.h>
#include <stdlib.h>
#include "pilhaestatica.h"

void verificacao(struct Pilha minhaPilha){
    if(vazia(minhaPilha) == SIM){
        printf("\n\nPilha Vazia");
    }
    else{ if(cheia(minhaPilha) == SIM){
            printf("\n\nPilha Cheia");
            }
            else{ 
                printf("\n\nPilha não cheia, porém com elementos");
            }   
        }
}

int main(int argc, char** argv) {
    struct Pilha minhaPilha;//Declaração da Pilha
    
    iniciarPilha(&minhaPilha);//Zerando a Pilha
    verificacao(minhaPilha);//Verificando ficou vazia
    if(inserir(&minhaPilha, 'A') == SUCESSO){//Inserindo um elemento
        printf("\n\nSucesso ao inserir");
    }
    verificacao(minhaPilha);//Verificando se está com o elemento adicionado
    //Inserindo mais elementos
    if(inserir(&minhaPilha, 'B') == SUCESSO){
        printf("\n\nSucesso ao inserir");
    }
    inserir(&minhaPilha, 'C');   
    inserir(&minhaPilha, 'D');
    inserir(&minhaPilha, 'E');
    inserir(&minhaPilha, 'F');
    inserir(&minhaPilha, 'G');
    inserir(&minhaPilha, 'H');
    inserir(&minhaPilha, 'I');
    inserir(&minhaPilha, 'J');
    verificacao(minhaPilha);//Verificando se a pilha está cheia
    if(inserir(&minhaPilha, 'K') == SUCESSO){//Inserindo com a lista cheia
        printf("\n\nSucesso ao inserir");
    }
    listarElementos(minhaPilha);
    char backup;
    backup = remover(&minhaPilha);
    if(backup != 0){
        printf("\n\nElemento removido: %c", backup);//Removendo o elemento e mostrando qual foi removido
    }
    listarElementos(minhaPilha);
    backup = obterTopo(minhaPilha);
    printf("\n\nElemento no topo: %c", backup);//Pegando o elemento no topo

    return (EXIT_SUCCESS);
}

