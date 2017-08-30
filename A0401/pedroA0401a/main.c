#include <stdio.h>
#include <stdlib.h>
int fatorial(int n){
    if(n <= 1){
        return 1;
    }
    else{
        return n * fatorial(n - 1);
    }
}

int main(int argc, char** argv) {
    int num;
    printf("Informe o fatorial desejado:");
    scanf("%d", &num);
    printf("O fatorial de %d é: %d",num,fatorial(num));

    return (EXIT_SUCCESS);
}

