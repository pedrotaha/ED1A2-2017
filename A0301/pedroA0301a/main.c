#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
    /*char nomes[10][30];
    int i, j;
    for(i = 0; i < 10; i++){
        printf("Digite o %d° nome:",i + 1);
        scanf("%s", &nomes[i]);
    }
    for(j = 0; j < 10; j++) {
        printf("%d° nome = %s \n", j + 1, nomes[j]);
    }
    */
    char vet[10][40];
    int cont, k;

    for (cont = 0; cont < 10; cont++) {
        printf("Informe o %d nome: ", cont + 1);
        scanf("%s", &vet[cont]);
    }

    for (k = 0; k < 10; k++)
        printf("O nome é %s \n", vet[k]);

    return (EXIT_SUCCESS);
}