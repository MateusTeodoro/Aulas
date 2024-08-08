programa
{
	funcao real multiplicaReal(real &valor1, real &valor2)
	{
		real resultado
		resultado = valor1 * valor2
		retorne resultado
	}
	
	funcao inicio()
	{
		real valor1 = 0.0, valor2 = 0.0, total = 0.0
		leia(valor1)
		leia(valor2)

		total = multiplicaReal(valor1, valor2)
		escreva (total)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 303; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */