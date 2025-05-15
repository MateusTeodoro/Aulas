#include <stdio.h>
#include <stdlib.h>
#include "PilhaSequencial.h" //inclui os Protótipos

//Definição do tipo Pilha
struct pilha{
    int topo;
    int dados[MAX];
};

Pilha* cria_Pilha(){
    Pilha *pi;
    pi = (Pilha*) malloc(sizeof(struct pilha));
    if(pi != NULL)
        pi->topo = 0;
    return pi;
}

void libera_Pilha(Pilha* pi){
    free(pi);
}

int consulta_topo_Pilha(Pilha* pi, int *num){
    if(pi == NULL || pi->topo == 0)
        return 0;
    *num = pi->dados[pi->topo-1];
    return 1;
}

int insere_Pilha(Pilha* pi, int num){
    if(pi == NULL)
        return 0;
    if(pi->topo == MAX)//pilha cheia
        return 0;
    pi->dados[pi->topo] = num;
    pi->topo++;
    return 1;
}

int remove_Pilha(Pilha* pi){
    if(pi == NULL || pi->topo == 0)
        return 0;
    pi->topo--;
    return 1;
}

int tamanho_Pilha(Pilha* pi){
    if(pi == NULL)
        return -1;
    else
        return pi->topo;
}

int pilha_cheia(Pilha* pi){
    if(pi == NULL)
        return -1;
    return (pi->topo == MAX);
}

int pilha_vazia(Pilha* pi){
    if(pi == NULL)
        return -1;
    return (pi->topo == 0);
}

void imprime_Pilha(Pilha* pi){
    if(pi == NULL)
        return;
    int i;
    for(i=pi->topo-1; i >=0; i--){
        printf("Valor pos %d: %d\n", i,pi->dados[i]);
    }
    printf("------------------\n");
}
