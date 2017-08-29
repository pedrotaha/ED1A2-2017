

#include <stdio.h>
#include <stdlib.h>

int soma(int a,int b){
    int r;
    r = a + b;
    return r;
}
int main(int argc, char** argv) {
    int global1,global2,global3;
    printf("A soma de 10 com 20 é %d \n",soma(10,20));
    global1 = 100;
    global2 = 200;
    printf("A soma de global1 com global2 é %d \n",soma(global1,global2));
    global3 = soma(1000,2000);
    printf("A soma de 1000 com 2000(global3) é %d \n",global3);
    
    return (EXIT_SUCCESS);
}

