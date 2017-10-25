#ifndef PILHAESTATICA_H
#define PILHAESTATICA_H

#ifdef __cplusplus
extern "C" {
#endif
#define SIM 1//Usando como boolean, já q o C n oferece o tipo
#define NAO 0
#define SUCESSO 0//Apelido para sucesso da execução
#define MAX_ELEM 10//N°Máximo de elementos na pilha
#define PILHA_VAZIA -1//Valor que indica pilha vazia. Pode ser associado ao topo. Logo se topo = -1 => Pilha vazia.
#define PILHA_CHEIA -2//Um apelido para um valor que expresse pilha cheia.
    struct Pilha{
        int topo;
        char elem[MAX_ELEM];
    };
    int vazia(struct Pilha);
    int cheia(struct Pilha);
    void iniciarPilha(struct Pilha*);
    char obterTopo(struct Pilha);
    void listarElementos(struct Pilha);
    int inserir(struct Pilha*, char);
    char remover(struct Pilha*);
    

#ifdef __cplusplus
}
#endif

#endif /* PILHAESTATICA_H */

