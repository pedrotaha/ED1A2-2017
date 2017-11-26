#include <stdio.h>
#include <stdlib.h>
#include "filaencadeada.h"



int main(int argc, char** argv) {
    montarListaSimples();
    listarListaSimples();
    inserirListaSimples();
    listarListaSimples();
    removerListaSimples();
    listarListaSimples();
    
    montarListaDupla();
    listarListaDupla();
    inserirListaDupla();
    listarListaDupla();
    removerListaDupla();
    listarListaDupla();

    return (EXIT_SUCCESS);
}

