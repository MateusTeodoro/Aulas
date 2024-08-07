programa
{
	
	funcao inteiro contaPar(inteiro a)
	{

		se (a % 2 == 0)
		{
			retorne 1
		}
		
		senao
		{
			retorne 0
		}
	}
	
	funcao inicio()
	{
		inteiro numero = 0, valorSaida = 1, resultado = 0

		enquanto (valorSaida == 1)
			{
				escreva ("Digite um valor ou pressione 0 para terminar:")
				leia (numero)
				
				se (numero == 0)
				{
					valorSaida = 0
				}

				senao 
				{
					contaPar(numero)
					resultado = resultado + contaPar(numero)
				}
				
			}
		escreva (resultado)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 502; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */