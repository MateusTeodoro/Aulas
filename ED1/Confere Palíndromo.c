int confere_palindromo(char palavra[])
{
    Pilha *p = criar_pilha();
    if (p == NULL) {
        printf("Erro ao criar a pilha.\n");
        return 0;
    }

    int i, tamanho = strlen(palavra);

    // Empilha todos os caracteres
    for (i = 0; i < tamanho; i++) {
        empilhar(p, palavra[i]);  // caractere tratado como int
    }

    // Compara cada caractere com o que for desempilhado
    int c_desempilhado;
    for (i = 0; i < tamanho; i++) {
        if (!desempilhar(p, &c_desempilhado)) {
            liberar_pilha(p);
            return 0;
        }

        if (palavra[i] != (char)c_desempilhado) {
            liberar_pilha(p);
            return 0; // Não é palíndromo
        }
    }

    liberar_pilha(p);
    return 1; // É palíndromo
}