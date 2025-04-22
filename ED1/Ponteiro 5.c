#include <stdio.h>

int fazCalculo(int vet[], int tam, int *var1, int *var2)
{
    int j, menor = vet[1], maior = vet[2];
    
    for(j = 0; j < tam; j++)
    {
        if (vet[j] > maior)
        {
            maior = vet[j];
        }
        
        if (vet[j] < menor)
        {
            menor = vet[j];
        }
    }
    *var1 = maior;
    *var2 = menor;
}

int main()
{
    int var1, var2, tamanho,i;
    scanf("%d", &tamanho);
    
    int vet[tamanho];
    
    for (i = 0; i < tamanho; i++)
    {
        scanf("%d", &vet[i]);
    }
    
    fazCalculo(vet, tamanho, &var1, &var2);
    printf("O maior valor do vetor é:%d\nO menor valor do vetor é:%d\n", var1, var2);
    return 0;
}