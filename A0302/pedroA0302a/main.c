#include <stdio.h>
#include <stdlib.h>
#include "ContaBancaria.h"
/*
ContBank* abrirConta(int num, char* nome){ ContBank *cb = malloc(sizeof(ContBank));
cb->numC = num;
cb->nomeC = malloc((NOMEC_MAX_SIZE+1)*sizeof(char));
 * strcpy(c->nomeC,nome;
 * c->saldo = 0.0;
 return c;
 }
*/

void accountOpen(ContBank *cb){
    //ContBank *cb = malloc(sizeof(ContBank));
    //cb->numC = num;
    //cb->nomeC = malloc((NOMEC_MAX_SIZE+1)*sizeof(char));
    cb->saldo = 0;
    printf("A conta foi criada com sucesso\nSeu nome é: %s\nNúmero da conta: %d\nSeu saldo é de: %2.0f", cb->nomeC, cb->numC, cb->saldo);
}
void launchCredit(ContBank *cb){//(ContBank* cb, float valor)
    float credit;
    printf("Informe um valor a ser creditado:");//Valor pego no main
    scanf("%f",&credit);
    cb->saldo = cb->saldo + credit;
}
void launchDebit(ContBank *cb){//(ContBank* cb, float valor)
    float dedit;
    printf("Informe um valor a ser debitado:");//Valor pego no main
    scanf("%f", &dedit);
    cb->saldo = cb->saldo - dedit;
} 

void showBalance(ContBank *cb){//(ContBank cb)
    printf("Nome: %s\nNúmero da conta: %d\nSaldo Atual: %2.2f", cb->nomeC, cb->numC, cb->saldo);//(cb.nomeC,cb.numC,cb.saldo)
    
}

int main(int argc, char** argv) {
    ContBank cb;
    int op;
    printf("Informe seu nome: ");
    fgets(cb.nomeC, 50, stdin);
    printf("Informe o número da conta:");
    scanf("%d", &cb.numC);
    accountOpen(&cb);
    do{
        printf("\n\nInforme qual operação deseja realizar:\n");
        printf("Lançar Crédito - Digite c\n");
        printf("Lançar Débito - Digite d\n");
        printf("Exibir Saldo - Digite e\n");
        printf("Para Encerrar - Digite f\n");
        scanf("%s", &op);
        switch (op){
            case 'a':
                launchCredit(&cb);
                break;
            case 'b':
                launchDebit(&cb);
                break;
            case 'c':
                showBalance(&cb);
                break;
            default:
                if(op != 'd'){
                    printf("Comando inválido.\n");
                }
                break;
        }
    }while(op != 'd');
    

    return (EXIT_SUCCESS);
}

