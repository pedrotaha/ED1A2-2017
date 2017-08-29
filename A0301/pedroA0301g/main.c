#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int matrizA[3][3], matrizB[3][3], mult[3][3], result[3][3], n, m, j, p;
    char op;
    for(n = 0; n < 3; n++){
        for(m = 0; m < 3; m++){
            matrizA[n][m] = 0; 
            matrizB[n][m] = 0; 
            mult[n][m] = 0; 
            result[n][m] = 0;
        }
    }  
    for(n = 0; n < 3; n++){
        for(m = 0; m < 3; m++){
            printf("Informe um valor para %d° linha, %d° coluna da matriz A: \n", n + 1, m + 1);
            scanf("%d", &matrizA[n][m]);
        }
    }
    for(n = 0; n < 3; n++){
        for(m = 0; m < 3; m++){
            printf("Informe um valor para %d° linha, %d° coluna da matriz B: \n", n + 1, m + 1);
            scanf("%d", &matrizB[n][m]);
        }
    }
    printf("Informe + para somar as matrizes(A + B), - para subtrair(A - B) ou X para multiplicar(A * B): \n");
    scanf("%s", &op);
    if((op != '+') && (op != '-') && (op != 'x') && (op != 'X')){
        printf("Comando inválido, tente novamente. \n");
        do{
            scanf("%c", &op);
        }while((op == '+') || (op == '-') || (op == 'x') || (op == 'X'));
    }
    switch (op) {
        case '+' :
            for(n = 0; n < 3; n++){
                for(m = 0; m < 3; m++){
                   result[n][m] = matrizA[n][m] + matrizB[n][m];
                }   
            }
            break;
    
    case '-' :
        for(n = 0; n < 3; n++){
            for(m = 0; m < 3; m++){
               result[n][m] = matrizA[n][m] - matrizB[n][m];
            }
        }
        break;
    case 'x' :
        for(p = 0; p < 3; p++){
            for(m = 0; m < 3; m++){
                for(n = 0; n < 3; n++){
                    j = matrizA[n][p] * matrizB[m][n];
                    mult[m][p] = mult[m][p] + j;
                }
            } 
        }
        for(n = 0; n < 3; n++){
            for(m = 0; m < 3; m++){
                 result[n][m] = mult[m][n];
            }
        }
        break;
    }
    printf("Resultado da %c das matrizes: \n", op);
    for(n = 0; n < 3; n++){
        for(m = 0; m < 3; m++){
           printf(" %4.0d", matrizA[m][n]);
        }
        printf("\n");
    }
    printf("         %c \n", op);
    for(n = 0; n < 3; n++){
        for(m = 0; m < 3; m++){
           printf(" %4.0d", matrizB[m][n]);
        }
        printf("\n");
    }
    printf("         = \n");
    for(n = 0; n < 3; n++){
        for(m = 0; m < 3; m++){
           printf(" %4.0d", result[m][n]);
        }
        printf("\n");
    }

    return (EXIT_SUCCESS);
}

