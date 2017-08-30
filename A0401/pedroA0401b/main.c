#include <stdio.h>
#include <stdlib.h>
int fibo(int n){
    if(n > 1){
        return fibo(n - 1) + fibo(n - 2);
    }
    else{ if(n == 0){
        return 0;
    }
    else
        if(n == 1){
           return 1;
        }
    }
}

int main(int argc, char** argv) {
    int num;
    printf("Informe o fibonacci desejado:");
    scanf("%d", &num);
    printf("O número %d na sequência fibonacci é: %d", num, fibo(num));

    return (EXIT_SUCCESS);
}

