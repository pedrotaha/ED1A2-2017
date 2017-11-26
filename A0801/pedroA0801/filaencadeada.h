#ifndef FILAENCADEADA_H
#define FILAENCADEADA_H

#ifdef __cplusplus
extern "C" {
#endif
    #include <stdio.h>
    #include <stdlib.h>
    struct No{
        int dado;
        struct No *prox;
    };
    struct No2{
        int dado;
        struct No2 *prox;
        struct No2 *ant;
    };
    struct No3{
        int dado;
        struct No3 *prox;
    };
    void montarListaSimples();
    void listarListaSimples();
    void inserirListaSimples();
    void removerListaSimples();
    
    void montarListaDupla();
    void listarListaDupla();
    void inserirListaDupla();
    void removerListaDupla();
    
    void montarListaCircular();
    void listarListaCircular();
    void inserirListaCircular();
    void removerListaCircular();
    

#ifdef __cplusplus
}
#endif

#endif /* FILAENCADEADA_H */

