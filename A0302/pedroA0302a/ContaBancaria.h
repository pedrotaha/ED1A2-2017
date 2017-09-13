#ifndef CONTABANCARIA_H
#define CONTABANCARIA_H

#ifdef __cplusplus
extern "C" {
#endif
#define NOMEC_MAX_SIZE 100
typedef struct {
    char nomeC[NOMEC_MAX_SIZE+1];
    int numC;
    float saldo;
} ContBank;

#ifdef __cplusplus
}
#endif
void accountOpen(ContBank*);//(int,char*)
void launchCredit(ContBank*);//(ContBank*,float)
void launchDebit(ContBank*);//(ContBank*,float)
void showBalance(ContBank*);//(ContBank)

#endif /* CONTABANCARIA_H */

