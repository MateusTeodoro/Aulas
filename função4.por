programa
{
	
	funcao fazQuadrado (inteiro valor, caracter b)
	{
		inteiro i, i2
		
		para (i = 0; i < valor; i++)
			{
				para (i2 = 0; i2 < valor; i2++)
					{
						escreva (b)
					}
				
				escreva ("\n")
			}
	}
	
	funcao inicio()
	{
		inteiro lado = 4
		caracter a = 'b'
		
		fazQuadrado(lado, a)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 82; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = {b, 4, 45, 1}-{i, 6, 10, 1}-{lado, 21, 10, 4}-{a, 22, 11, 1};
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */