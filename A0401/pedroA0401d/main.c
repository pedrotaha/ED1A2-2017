#include <stdio.h>
#include <stdlib.h>
/*
void binario (int n){
    if(n<=1){
        printf("%d", n);
        return;
    }else{
        if ((n>1)&&(n<=3)){
            printf("%d", n/2);
            printf("%d", n%2);
            return;
        }else{
            binario(n/2);
            printf("%d", n%2);
        }
    }

}

int main(int argc, char** argv) {
    int num;
    printf("\nInforme um numero: ");
    scanf("%d", &num);
    binario(num);
 
    return (EXIT_SUCCESS);

}
*/
int binario(int n){
    if(n < 2){
        return n;
    }
    else{
        return 10 * binario(n /2) + n % 2;
    }
}

int main(int argc, char** argv) {
    int n;
    printf("Informe um número para ser convertido em binário:");
    scanf("%d", &n);
    printf("O número %d convertido em binário fica:\n%d", n, binario(n));


    return (EXIT_SUCCESS);
}

