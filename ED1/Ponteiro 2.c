#include <stdio.h>

int main()
{
    int i, j;
    float vet[10];

    for (i = 0; i < 10; i++)
    {
        scanf("%f", &vet[i]);
    }
    
    printf("Os valores do array sao:\n");
    
    for (j = 0; j < 10; j++)
    {
        printf("%p\n", &vet[j]);
    }
    
    return 0;
}