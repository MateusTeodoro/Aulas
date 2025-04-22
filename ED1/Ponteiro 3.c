#include <stdio.h>

float calculaPartes(float num, int *inteiro, float *fracao)
{
    *inteiro = (int)num;
    *fracao = num - *inteiro;
}

int main()
{
    float valor = 0.0, fracao = 0.0;
    int inteiro;
    scanf("%f", &valor);
    
    calculaPartes(valor, &inteiro, &fracao);
    
    printf("Parte inteira: %d\n", inteiro);
    printf("Parte fracionaria: %.6f\n", fracao);

    return 0;
}