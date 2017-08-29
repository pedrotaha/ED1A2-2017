#include <stdio.h>
#include <stdlib.h>
void processaNumeros(int num1, int num2, int *num3, int *a, int *b){
    num1 = num1 * 10;
    num2 = num2 * 100;
    *num3 = *num3 * 1000;
    int c;
    c = *a**b;
    printf("Em processaNumeros (global1 -> num1) vale %d \n", num1);
    printf("Em processaNumeros (global2 -> num2) vale %d \n", num2);
    printf("Em processaNumeros (global3 <-> num3) vale %d \n", *num3);
    printf("Valor do c: %d \n", c);
    
}

int main(int argc, char** argv) {
    int global1, global2, global3, a, b;
    global1 = 1;
    global2 = 2;
    global3 = 3;
    a = 10;
    b = 20;
    processaNumeros(global1, global2, &global3, &a, &b);
    printf("Valor global1 após processaNumeros é %d \n", global1);
    printf("Valor global2 após processaNumeros é %d \n", global2);
    printf("Valor global3 após processaNumeros é %d \n", global3);

    return (EXIT_SUCCESS);
}

