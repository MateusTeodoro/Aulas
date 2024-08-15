programa
{
	
	funcao inteiro leiaPar (inteiro numero)
	{
		inteiro numeroPar = 0

		se (numero % 2 == 0)
		{
			numeroPar = numeroPar + 1
			retorne (numeroPar)
		}
		senao
		{
			retorne 0
		}
	
	}
	
	funcao inicio()
	{
		inteiro menu = 1, valor = 0, resultado = 0

		enquanto (menu != 0)
		{
			escreva ("Entre com um valor ou digite 0 para terminar e mostrar o resultado:")
			leia (valor)

			se (valor == 0)
			{
				menu = 0
			}

			senao
			{
				leiaPar(valor)
				resultado = resultado + leiaPar(valor)
			}
			
		}
		escreva ("A quantidade de números pares digitados foi:", resultado)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 474; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = {numero, 4, 33, 6}-{numeroPar, 6, 10, 9}-{menu, 22, 10, 4}-{valor, 22, 20, 5}-{resultado, 22, 31, 9};
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */