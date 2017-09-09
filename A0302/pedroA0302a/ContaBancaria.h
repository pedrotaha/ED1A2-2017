#ifndef CONTABANCARIA_H
#define CONTABANCARIA_H

#ifdef __cplusplus
extern "C" {
#endif
typedef struct {
    char nomeC[50];
    int numC;
    float saldo;
} ContBank;

#ifdef __cplusplus
}
#endif
void accountOpen(ContBank*);
void launchCredit(ContBank*);
void launchDebit(ContBank*);
void showBalance(ContBank*);

#endif /* CONTABANCARIA_H */

