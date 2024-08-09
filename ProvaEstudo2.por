programa
{
	funcao verificaMatriz(inteiro mat2[][])
		{
			inteiro a, b, c, d, valorA = 0, valorM = 0, posicaoLinha = 0, posicaoColuna = 0

			para (a = 0; a < 3; a++)
				{
					para (b = 0; b < 3; b++)
					{
						valorA = mat2[a][b]

						se (valorA > valorM)
						{
							valorM = valorA
							posicaoLinha = a
							posicaoColuna = b
							
						}
					}
				}
			escreva ("O maior valor da matriz é:", valorM)
			escreva ("\nEle está posicionado na linha e coluna, respectivamente: ", posicaoLinha)
			escreva (" | ", posicaoColuna)
		}
	
	funcao calculaMatriz(inteiro mat1[][])
	{
		inteiro i, j

		para (i = 0; i < 3; i++)
			{
				para (j = 0; j < 3; j++)
					{
						escreva ("Digite um valor da matriz:")
						leia (mat1[i][j])
					}
			}
	}
	
	funcao inicio()
	{
		inteiro mat[3][3], maiorValor, linhaPosicao, linhaColuna
		calculaMatriz(mat)
		verificaMatriz(mat)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 548; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = {valorA, 5, 23, 6}-{valorM, 5, 35, 6}-{mat1, 27, 30, 4};
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */