#ifndef FECIRCULARES_H
#define FECIRCULARES_H

#ifdef __cplusplus
extern "C" {
#endif
    
#define SIM 1
#define NAO 0
#define MAX_ELEM 10
#define INICIO 0
    
    struct Fila{
        char elem[MAX_ELEM];
        int tamanho, inicio, fim;
    };
    
    void iniciarFila(struct Fila*);
    void inserir(struct Fila*, char);
    void remover(struct Fila*);
    char inicio(struct Fila);
    int vazia(struct Fila);
    int cheia(struct Fila);
    void listarElementos(struct Fila);

#ifdef __cplusplus
}
#endif

#endif /* FECIRCULARES_H */

