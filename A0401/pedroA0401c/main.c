#include <stdio.h>
#include <stdlib.h>
int mult(int m, int n){
    if(m > 1){
        return n + mult((m - 1), n);
    }
}

int main(int argc, char** argv) {
    int m, n;
    printf("Informe qual multiplicação será feita(M x N):");
    printf("\nInforme o M: ");
    scanf("%d", &m);
    printf("Informe o N: ");
    scanf("%d", &n);
    printf("O resultado da multiplicação, usando apenas soma, é:\n");
    printf("%d X %d = %d",m, n, mult(m,n));

    return (EXIT_SUCCESS);
}

