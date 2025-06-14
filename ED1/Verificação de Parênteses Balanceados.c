Descrição:

Implemente uma função que utilize uma pilha para verificar se os parênteses em uma expressão matemática 
estão corretamente balanceados.

int verificar_parenteses(char *expr)
{
    Pilha *p = criar_pilha();  // Cria a pilha para controle dos parênteses
    if (p == NULL) return 0;   // Se falhar na criação da pilha, retorna erro (0)

    for (int i = 0; expr[i] != '\0'; i++)  // Percorre cada caractere da string
    {
        if (expr[i] == '(')  // Se encontrar um parêntese de abertura
        {
            empilhar(p, '('); // Empilha (pode armazenar qualquer valor, aqui só usamos '(')
        }
        else if (expr[i] == ')')  // Se encontrar um parêntese de fechamento
        {
            int temp;
            if (!desempilhar(p, &temp))  // Tenta desempilhar um '(' correspondente
            {
                liberar_pilha(p);  // Se não conseguir desempilhar, expressão está incorreta
                return 0;
            }
        }
    }

    int resultado = (tamanho_pilha(p) == 0) ? 1 : 0;  // Se pilha vazia, está balanceado

    liberar_pilha(p);  // Libera a pilha antes de retornar o resultado
    return resultado;
}
