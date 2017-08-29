#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int numeros[5][5], somaC[5], somaL[5], n, m;
    for(n = 0; n < 5; n++){
        somaC[n] = 0;
        somaL[n] = 0;
    }
    for(n = 0; n < 5; n++){
        for(m = 0; m < 5; m++){
          printf("Informe um valor para %d° coluna, %d° linha da matriz: \n", n + 1, m + 1);
          scanf("%d",&numeros[n][m]);  
        }
    }
    for(n = 0; n < 5; n++){
        for(m = 0; m < 5; m++){
            somaC[n] = somaC[n] + numeros[n][m];
        }
    }
    for(n = 0; n < 5; n++){
         for(m = 0; m < 5; m++){
            somaL[n] = somaL[n] + numeros[m][n];
         }
    }
    printf("\nMatriz informada:\n");
    for(n = 0; n < 5; n++){
        for(m = 0; m < 5; m++){
            printf("%5.0d ", numeros[m][n]);
        }
        printf("\n");
    }
    printf("Soma das colunas:\n");
     for(n = 0; n < 5; n++){
        printf("%d ", somaC[n]);
    }
    printf("\nSoma das linhas:\n");
    for(m = 0; m < 5; m++){
        printf("%d ", somaL[m]);
    }


    return (EXIT_SUCCESS);
}

