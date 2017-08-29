#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
    int a[5];
    int b[5];
    int c[10];
    int cont1, cont2, cont3;
    for(cont1 = 0; cont1 < 5; cont1++){
        printf("Informe o %d° valor de A: ", cont1 + 1);
        scanf("%d", &a[cont1]);
    }
    for(cont1 = 0; cont1 < 5; cont1++){
        printf("Informe o %d° valor de B: ",cont1 + 1);
        scanf("%d", &b[cont1]);
    }
    cont3 = -1;
    for(cont2 = 0; cont2 < 10; cont2++){
        cont3++;
        c[cont2] = a[cont3];
        c[cont2 + 1] = b[cont3];
        cont2++;
    }
    printf("A sequência do vetor C fica:");
    for(cont1 = 0; cont1 < 10; cont1++){
        printf("%d ", c[cont1]);
    }
        
    return (EXIT_SUCCESS);
}

