#include <stdio.h>
#include <stdlib.h>
#include "PilhaSequencial.h" //inclui os Prot�tipos

//Definicao do tipo Pilha
struct pilha
{
    int qtd;
    struct aluno dados[MAX];
};

Pilha* cria_Pilha()
{
    Pilha *pi;
    pi = (Pilha*) malloc(sizeof(struct pilha));
    if (pi != NULL) pi->qtd = 0;
    return pi;
}

void libera_Pilha(Pilha* pi)
{
    free (pi);
}

int consulta_topo_Pilha(Pilha* pi, struct aluno *al)
{
    if (pi->qtd == NULL || pi->qtd == 0) return 0;
    *al = (pi->dados[pi->qtd -1]);
    return 1;
    //*num = pi->dados[pi->topo-1];
}

int insere_Pilha(Pilha* pi, struct aluno al)
{
    if (pi == NULL) return 0;
    if (pi->qtd == MAX) return 0;
    pi->dados[pi->qtd] = al;
    pi->qtd++;
    return 1;
}

int remove_Pilha(Pilha* pi)
{
    if (pi == NULL || pi->qtd == 0) return 0;
    pi->qtd--;
    return 1;
}

int tamanho_Pilha(Pilha* pi){}
int Pilha_vazia(Pilha* pi){}
int Pilha_cheia(Pilha* pi){}
void imprime_Pilha(Pilha* pi){}
void imprime_aluno(struct aluno* al){}

