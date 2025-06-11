int fazer_binario(int numero)
{
    Pilha *p = criar_pilha();
    if (p == NULL) return 0;
    int resultado = 0;

    while(numero != 0)
    {
        resultado = numero % 2;
        empilhar(p, resultado);
        numero = numero / 2;
    }

    int num_desempilhado;
    int numero_binario = 0;
    int fator_multiplicador = 1;

    while (desempilhar(p, &num_desempilhado))
    {
        numero_binario += num_desempilhado * fator_multiplicador;
        fator_multiplicador *= 10;
    }
    liberar_pilha(p);
    return numero_binario;
}
