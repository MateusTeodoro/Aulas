#include <stdio.h>
#include <string.h>

#define MAX 15
#define TIME_QUANTUM 2  // Quantum para Round Robin (pode ser alterado)

// Estrutura para representar um processo
typedef struct {
    char nome[10];      // Nome do processo (ex: P1, P2)
    int chegada;        // Tempo de chegada
    int duracao;        // Duração total do processo
    int restante;       // Tempo restante para terminar
    int finalizado;     // Flag para indicar se foi finalizado
} Processo;

// Função para ler os dados dos processos
void lerProcessos(Processo p[], int *n) {
    do {
        printf("Quantidade de processos (2 a 15): ");
        scanf("%d", n);
    } while (*n < 2 || *n > MAX);

    for (int i = 0; i < *n; i++) {
        printf("\nProcesso %d:\n", i + 1);
        printf("Nome: ");
        scanf("%s", p[i].nome);
        printf("Tempo de chegada: ");
        scanf("%d", &p[i].chegada);
        printf("Tempo de processamento: ");
        scanf("%d", &p[i].duracao);

        // Inicialização dos atributos auxiliares
        p[i].restante = p[i].duracao;
        p[i].finalizado = 0;
    }
}

// Algoritmo SRT (Shortest Remaining Time)
void executarSRT(Processo p[], int n) {
    int tempo = 0, completados = 0;

    printf("\n--- Timeline SRT ---\n");

    // Enquanto nem todos os processos estiverem completos
    while (completados < n) {
        int menor = -1;

        // Selecionar o processo com menor tempo restante que já chegou
        for (int i = 0; i < n; i++) {
            if (p[i].chegada <= tempo && p[i].restante > 0) {
                if (menor == -1 || p[i].restante < p[menor].restante)
                    menor = i;
            }
        }

        if (menor != -1) {
            // Executa o processo por 1 unidade de tempo
            printf("|%d %s ", tempo, p[menor].nome);
            p[menor].restante--;

            // Se terminou, marca como finalizado
            if (p[menor].restante == 0) {
                p[menor].finalizado = 1;
                completados++;
            }
        } else {
            // Nenhum processo pronto para executar
            printf("|%d IDLE ", tempo);
        }

        tempo++;
    }

    printf("|%d\n", tempo);
}

// Algoritmo Round Robin
void executarRR(Processo p[], int n) {
    int tempo = 0, completados = 0;
    int fila[MAX], inicio = 0, fim = 0;
    int visitado[MAX] = {0}; // Para evitar re-enfileirar antes da hora

    printf("\n--- Timeline Round Robin ---\n");

    // Inserir processos que chegam no tempo 0
    for (int i = 0; i < n; i++) {
        if (p[i].chegada == 0) {
            fila[fim++] = i;
            visitado[i] = 1;
        }
    }

    while (completados < n) {
        if (inicio == fim) {
            // Nenhum processo na fila, CPU ociosa
            printf("|%d IDLE ", tempo);
            tempo++;

            // Verificar se algum processo chegou nesse tempo
            for (int i = 0; i < n; i++) {
                if (!visitado[i] && p[i].chegada <= tempo) {
                    fila[fim++] = i;
                    visitado[i] = 1;
                }
            }

            continue;
        }

        int i = fila[inicio++]; // Pegar próximo da fila
        int exec = (p[i].restante >= TIME_QUANTUM) ? TIME_QUANTUM : p[i].restante;

        // Executa o processo por até TIME_QUANTUM unidades
        for (int t = 0; t < exec; t++) {
            printf("|%d %s ", tempo, p[i].nome);
            tempo++;

            // Verifica se novos processos chegaram
            for (int j = 0; j < n; j++) {
                if (!visitado[j] && p[j].chegada <= tempo) {
                    fila[fim++] = j;
                    visitado[j] = 1;
                }
            }
        }

        p[i].restante -= exec;

        // Se ainda não terminou, volta para o fim da fila
        if (p[i].restante > 0) {
            fila[fim++] = i;
        } else {
            completados++;
        }
    }

    printf("|%d\n", tempo);
}

int main() {
    Processo processos[MAX];
    int n, escolha;

    lerProcessos(processos, &n);

    // Escolha do algoritmo a ser executado
    printf("\nEscolha o algoritmo:\n1 - SRT (Shortest Remaining Time)\n2 - Round Robin\nOpcao: ");
    scanf("%d", &escolha);

    if (escolha == 1)
        executarSRT(processos, n);
    else if (escolha == 2)
        executarRR(processos, n);
    else
        printf("Opcao invalida.\n");

    return 0;
}