#include <stdio.h>

int mostraValor(int num1, int num2, int *end1, int *end2)
{
	if (end1 > end2)
	{
		printf("O primeiro C) maior, endereco %p e valor: %d", end1, num1);
	}

	else
	{
		printf("O segundo C) maior, endereco %p e valor: %d", end2, num2);
	}
}

int main() 
{
	int valor1, valor2;
	scanf("%d %d", &valor1, &valor2);

	mostraValor(valor1, valor2, &valor1, &valor2);

	return 0;
}
