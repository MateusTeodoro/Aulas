Pilha* copiar_pilha(Pilha *p) {
    if (p == NULL) return NULL;

    Pilha *aux = criar_pilha();
    Pilha *copia = criar_pilha();

    if (aux == NULL || copia == NULL) return NULL;

    int valor;

    // Etapa 1: mover original -> auxiliar (inverte a ordem)
    Pilha *temp = criar_pilha();
    while (desempilhar(p, &valor)) {
        empilhar(temp, valor);  // manter a ordem original depois
        empilhar(aux, valor);
    }

    // Etapa 2: restaurar original e construir cópia
    while (desempilhar(temp, &valor)) {
        empilhar(p, valor);     // restaura original
        empilhar(copia, valor); // constrói cópia na ordem correta
    }

    liberar_pilha(aux);
    liberar_pilha(temp);
    return copia;
}
