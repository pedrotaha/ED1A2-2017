#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
/*
    FILE *arq;
    char linha[100];
    char *result;
    char ch1[50];
    int i, n;

    arq = fopen("nomes.txt","rt");
    if (arq == NULL)
    {
        printf("Problemas na CRIACAO do arquivo\n");
    } 
    i = 1;
*/
/*
    while (!feof(arq))
    {
      result = fgets(linha, 100, arq);  
      if (result) 
	  printf("Linha %d : %s",i,linha);
      i++;
    }
*/
/*
    while ((fscanf(arq,"%s,\n", &ch1))!=EOF)
    {
        fscanf(arq,"%s\n", &ch1);
        printf("%s", ch1);
    }*/
/*
    for(n = 0;n > 10;n++){
        linha[n] = fscanf(arq,"%s\n", &ch1);
    }
    fclose(arq);
    for(n = 0;n > 10;n++){
        printf("Nome[%d] = %c", n, linha[n]);
    }
*/
    char url[]="nomes.txt",
	     ch1[10][10];
	FILE *arq;
	int n = 0;
	arq = fopen(url, "r");
	if(arq == NULL)
			printf("Erro, nao foi possivel abrir o arquivo\n");
	else
		while( (fscanf(arq,"%s\n", &ch1[n]))!=EOF && n < 10){
			printf("%s\n", ch1[n]);
                        n++;
                }
	
	fclose(arq);
	
	return 0;


    return (EXIT_SUCCESS);
}

