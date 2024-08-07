programa
{
	funcao real calculaMedia (real a, real b, real c)
	{
		retorne (a + b + c) / 3
	}
	
	funcao inicio()
	{
		real nota1 = 0.0, nota2 = 0.0, nota3 = 0.0, resultado = 0.0
		
		escreva("Digite a primeira nota:")
		leia (nota1)
		
		escreva ("Digite a segunda nota:")
		leia (nota2)

		escreva ("Digite a terceira nota:")
		leia (nota3)

		calculaMedia(nota1,nota2, nota3)
		resultado = calculaMedia(nota1, nota2, nota3)
		escreva (resultado)
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 93; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */