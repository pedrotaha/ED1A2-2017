#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int M[3][3], MT[3][3], n, k;
    for(n = 0; n < 3; n++){
        for(k = 0; k < 3; k++){
           printf("Informe um valor para %d° linha, %d° coluna da matriz: \n", n + 1, k + 1);
           scanf("%d", &M[n][k]);
        }
    }   
    for(n = 0; n < 3; n++){
        for(k = 0; k < 3; k++){
             MT[k][n] = M[n][k];
        }
    }
    printf("Matriz transposta da informada:\n");
    for(n = 0; n < 3; n++){
        for(k = 0; k < 3; k++){
            printf("%4.0d ", MT[n][k]);
        }
        printf("\n");
    }
    
    
    return (EXIT_SUCCESS);
}

