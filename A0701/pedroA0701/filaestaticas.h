#ifndef FILAESTATICAS_H
#define FILAESTATICAS_H

#ifdef __cplusplus
extern "C" {
#endif
#define SIM 1
#define NAO 0
#define MAX_ELEM 10
#define FILA_VAZIA -1
#define INICIO 0;

    struct Fila{
        int inicio;
        int fim;
        char elem[MAX_ELEM];
    };
    
    int vazia(struct Fila);
    int cheia(struct Fila);
    void iniciarFila(struct Fila*);
    void fim(struct Fila);
    void inicio(struct Fila);
    void listarElementos(struct Fila);
    void inserir(struct Fila*, char);
    char remover(struct Fila*);



#ifdef __cplusplus
}
#endif

#endif /* FILAESTATICAS_H */

