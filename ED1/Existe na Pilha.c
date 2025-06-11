int existe_na_pilha(Pilha *p, char c) {
    if (p == NULL) return 0;

    Pilha *aux = criar_pilha();
    if (aux == NULL) return 0;

    int encontrado = 0;
    int valor;

    // Desempilha e verifica
    while (desempilhar(p, &valor)) {
        if (valor == c) {
            encontrado = 1;
        }
        empilhar(aux, valor);  // salva no auxiliar
    }

    // Restaura a pilha original
    while (desempilhar(aux, &valor)) {
        empilhar(p, valor);
    }

    liberar_pilha(aux);
    return encontrado;
}
