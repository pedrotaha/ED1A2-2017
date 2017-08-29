#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
    char nomes[10][30];
    char enderecos[10][30];
    int i, j;
    for(i = 0; i < 10; i++){
        printf("Digite o %d° nome: \n", i + 1);
        scanf("%s", nomes[i]);
        printf("Digite o %d° endereço: \n", i + 1);
        scanf("%s", enderecos[i]);
    }
    do{
        printf("Informe um número correspondente a ordem digitada pra visualizar o nome e o endereço:\n");
        printf("Digite -1 para terminar.\n");
        scanf("%d", &j);
        if(j != -1){
            if(j < 1 || j > 10){
                printf("Número inválido, tente digitar um número entre 1 e 10. \n");
            }
            else{
                printf("\n n° %d  Nome: %s  Endereço: %s \n \n", j, nomes[j - 1], enderecos[j - 1]);
            }
        }
    }while(j != -1);
    


    
}
