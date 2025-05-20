#include <stdio.h>
#include <stdlib.h>
#include "PilhaSequencial.h" //inclui os Prototipos

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

int Pilha_vazia(Pilha* pi)
{
    if (pi == NULL) return -1;
    return (pi->qtd == 0);
}

int Pilha_cheia(Pilha* pi)
{
    if (pi == NULL) return -1;
    return (pi->qtd == MAX);
}

void imprime_Pilha(Pilha* pi)
{
    if (pi == NULL) return;
    int i;

    for (i = pi->qtd - 1; i >= 0; i--)
    {
        imprime_aluno(&pi->dados[i]);
        printf("\n");
    }
}
void imprime_aluno(struct aluno* al)
{
    if (al == NULL) return;
    printf("Matricula: %d\n", al->matricula);
    printf("Nome do aluno: %s\n", al->nome);
    printf("Notas do aluno: %.2f %.2f %.2f\n", al->n1, al->n2, al->n3);
}

