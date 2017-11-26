#ifndef FILAESTATICA2_H
#define FILAESTATICA2_H

#ifdef __cplusplus
extern "C" {
#endif
#define SIM 1
#define NAO 0
#define SUCESSO 0
#define FILA_CHEIA 1
#define MAX_ELEM 10
#define FILA_VAZIA -1
#define FIM_VAZIO -1
#define INICIO_VAZIO 0
#define ELEM_NULO 0
    
    struct Fila{
        int inicio, fim;
        char elem[MAX_ELEM];
    };
    int vazia(struct Fila); //Empty
    int cheia(struct Fila); //Full
    void iniciarFila(struct Fila*); //Setup
    char obterInicio(struct Fila);
    void listarElementos(struct Fila);
    int inserir(struct Fila*, char); //Enqueue
    char remover(struct Fila*); //Dequeue
    int tamanho(struct Fila); //Size



#ifdef __cplusplus
}
#endif

#endif /* FILAESTATICA2_H */

