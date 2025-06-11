#include "PilhaDinamicaInt.h"  // Inclusão do arquivo de cabeçalho com as definições de tipos e funções

// Função para criar uma nova pilha
Pilha* criar_pilha()
{
    Pilha *p = (Pilha *)malloc(sizeof(Pilha));  // Aloca dinamicamente memória para a estrutura da pilha
    if (p != NULL) p->topo = NULL;              // Se a alocação foi bem-sucedida, inicializa o topo como NULL (pilha vazia)
    return p;                                   // Retorna o ponteiro para a pilha criada
}

// Função para liberar a memória alocada da pilha
void liberar_pilha(Pilha *p)
{
    if(p == NULL) return;                       // Verifica se a pilha é válida (não nula)

    No* aux = (No *)malloc(sizeof(No));         // Aloca memória para um nó auxiliar (não necessário aqui, pode ser eliminado)
    if (aux == NULL) return;                    // Se a alocação falhar, encerra a função

    while (p->topo != NULL)                     // Enquanto a pilha não estiver vazia
    {
        aux = p->topo;                          // Auxiliar aponta para o topo da pilha
        p->topo = aux->prox;                    // Avança o topo para o próximo nó
        free(aux);                              // Libera a memória do nó anterior
    }

    free(p);                                    // Libera a memória da estrutura da pilha
}

// Função para empilhar um valor na pilha
int empilhar(Pilha *p, int valor)
{
    if(p == NULL) return 0;                     // Verifica se o ponteiro da pilha é válido
    No *no = (No *)malloc(sizeof(No));          // Aloca memória para um novo nó
    if(no == NULL) return 0;                    // Verifica se a alocação foi bem-sucedida
    no->dado = valor;                           // Armazena o valor no campo 'dado' do nó
    no->prox = p->topo;                         // Faz o novo nó apontar para o antigo topo da pilha
    p->topo = no;                               // Atualiza o topo da pilha para o novo nó
    return 1;                                   // Retorna sucesso
}

// Função para desempilhar um valor da pilha
int desempilhar(Pilha *p, int *valor)
{
    if (p == NULL) return 0;                    // Verifica se a pilha é válida
    if (p->topo == NULL) return 0;              // Verifica se a pilha não está vazia

    No* aux = p->topo;                          // Aponta o auxiliar para o nó do topo
    p->topo = aux->prox;                        // Atualiza o topo para o próximo nó
    *valor = aux->dado;                         // Armazena o valor desempilhado no ponteiro fornecido
    free(aux);                                  // Libera a memória do nó removido
    return 1;                                   // Retorna sucesso
}

// Função para retornar o valor do topo da pilha (sem remover)
int retornar_topo(Pilha *p, int *valor)
{
    if (p == NULL) return 0;                    // Verifica se a pilha é válida
    if (p->topo == NULL) return 0;              // Verifica se a pilha não está vazia

    *valor = p->topo->dado;                     // Armazena o valor do topo no ponteiro fornecido
    return 1;                                   // Retorna sucesso
}

// Função para retornar o número de elementos na pilha
int tamanho_pilha(Pilha *p)
{
    if (p == NULL) return -1;                   // Verifica se a pilha é válida
    int cont = 0;                               // Inicializa o contador de elementos
    No* aux = p->topo;                          // Aponta o auxiliar para o topo da pilha

    while (aux != NULL)                         // Enquanto houver nós na pilha
    {
        cont++;                                 // Incrementa o contador
        aux = aux->prox;                        // Avança para o próximo nó
    }
    return cont;                                // Retorna o número de elementos na pilha
}

// Função para imprimir todos os elementos da pilha
void imprimir_pilha(Pilha *p)
{
    if (p == NULL) return;                      // Verifica se a pilha é válida
    No* aux = p->topo;                          // Aponta o auxiliar para o topo da pilha

    while (aux != NULL)                         // Enquanto houver nós na pilha
    {
        printf("%d\n", aux->dado);              // Imprime o valor do nó atual
        aux = aux->prox;                        // Avança para o próximo nó
    }
    return;                                     // Fim da função
}

// Função que inverte os dígitos de um número utilizando a pilha
int inverte_valor (int valor)
{
    if(valor == 0) return 0;                    // Se o valor for zero, retorna zero diretamente

    Pilha *p = criar_pilha();                   // Cria uma nova pilha
    int temp = valor;                           // Variável temporária para manipular o valor
    int num;

    while(temp > 0)                             // Enquanto houver dígitos a processar
    {
        num = temp % 10;                        // Obtém o último dígito do número
        empilhar(p, num);                       // Empilha o dígito
        temp = temp / 10;                       // Remove o último dígito do número
    }

    int num_desempilhado;                       // Variável para armazenar dígitos ao desempilhar
    int total_invertido = 0;                    // Armazena o número invertido
    int fator_multiplicador = 1;                // Multiplicador para reconstruir o número invertido

    while(desempilhar(p, &num_desempilhado))    // Enquanto conseguir desempilhar dígitos
    {
        total_invertido += num_desempilhado * fator_multiplicador;  // Constrói o número invertido
        fator_multiplicador *= 10;              // Aumenta o fator multiplicador (unidade, dezena, centena, etc.)
    }

    return total_invertido;                     // Retorna o número invertido
}
