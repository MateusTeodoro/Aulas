programa
{
	inclua biblioteca Util --> u
	
	funcao calculaVetor(inteiro vetor[])
	{
		inteiro numeroVetor = 0, i = 0

		para(i = 0; i < 5; i++)
			{
				escreva ("Digite os valores do vetor:")
				leia (numeroVetor)
				vetor[i] = numeroVetor
			}
	
		escreva ("Vetor salvo!\n")
	}

	funcao vetorAleatorio(inteiro vetor2[])
	{
		inteiro j
		
		para (j = 0; j < 5; j++)
			{
				vetor2[j] = u.sorteia(1, 20)
			}

		escreva ("O vetor foi aleatoriamente criado!\n")
	}

	funcao exibeVetor(inteiro vetor[])
	{
		inteiro i = 0
		
		escreva ("O vetor atual é:")
		
		para (i = 0; i < 5; i++)
			{
				escreva (" | ", vetor[i])
				
				se (vetor[i] == 5)
					{
						escreva (" | ")
					}
			}
		
		escreva ("\n")
	}
	
	funcao inteiro sairPrograma(inteiro v)
		{
			v = 0
			retorne (v)
		}
	
	funcao inicio()
	{
		inteiro vet[5], menu = 10, valor = 0

		enquanto (menu != 0)
		{
			escreva ("Olá! Digite um número para continuar:")
			escreva ("\n1 - Ler vetor")
			escreva ("\n2 - Gerar vetor aleatório")
			escreva ("\n3 - Imprimir vetor")
			escreva ("\n4 - Sair\n")
			leia (valor)

			se (valor == 1)
				{
					calculaVetor(vet)
				}
			
			se (valor == 2)
				{
					vetorAleatorio(vet)
				}
			
			se (valor == 3)
				{
					exibeVetor(vet)
				}
			
			se (valor == 4)
				{
					sairPrograma(valor)
					menu = sairPrograma(valor)
				}
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 326; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = {vetor, 5, 29, 5}-{vet, 58, 10, 3};
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */