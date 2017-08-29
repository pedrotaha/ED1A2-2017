#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int numeros[10], pares[10], impares[10];
    int i, j, n, m;
    i = 0;
    j = 0;
    n = 0;
    do{
        printf("Digite o %d° número ou digite -1 para encerrar. \n", i + 1);
        scanf("%d", &numeros[i]);
        if(numeros[i] >= 0 && numeros[i] <= 100){
           if(numeros[i] % 2 == 0){
              pares[j] = numeros[i]; 
              j++;
           }
           else{
               impares[n] = numeros[i];
               n++;
           }
        }
        else{
            if(numeros[i] != -1){
            printf("Valor inválido, tente um número no intervalo de 0 a 100. \n");
            i--;
            }
            else{
                i--;
            }
        }
        i++;
    }while(i < 10 && numeros[i] != -1);
    printf("Foram informados %d números, que são: \n", i);
    printf("Pares: ");
    for(m = 0; m < j; m++){
        printf("%d ", pares[m]);
    }
    printf("\nImpares: ");
    for(m = 0; m < n; m++){
        printf("%d ", impares[m]);
    }
    
       

    return (EXIT_SUCCESS);
}

