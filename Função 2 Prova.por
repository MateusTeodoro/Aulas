programa
{
	
	funcao real calculaSalario(real money[])
	{
		inteiro b
		real salarioA = 0.0, salarioM = 0.0, salarioMenor = 999999999.0

		para(b = 0; b < 5; b++)
		{
			salarioA = money[b]
			se (salarioA > salarioM)
			{
				salarioM = salarioA
				retorne (salarioM)
			}

			senao se (salarioA < salarioMenor)
			{
				retorne(salarioMenor)
			}
		}
		retorne 0.0
	}
	
	funcao diferencaIdade (cadeia compara[], inteiro idades[])
	{
		inteiro a
		cadeia idadeHomem, idadeMulher

		para (a = 0; a < 5; a++)
		{
			se (compara[a] == "Masculino")
			{
		
			}

			senao se (compara[a] == "Feminino")
			{
				
			}
		}
	}
	
	funcao mulherSalario (cadeia mulher[], real dinheiro[])
	{
		inteiro j
		real grana = 0.0, maiorGrana = 0.0
		cadeia nomeMulher

		para (j = 0; j < 5; j++)
		{
			grana = dinheiro[j]
			
			se (grana > maiorGrana)
			{
				maiorGrana = grana
				nomeMulher = mulher[j]
			}
		}
	}
	
	funcao inicio()
	{
		inteiro idade[5], age = 0, i
		real salario[5], valorSalario = 0.0, retornaSalario = 0.0
		cadeia vetorNome[5], nome, sexo, genero[5], resultadoMulher

		para (i = 0; i < 5; i++)
		{
			escreva ("Digite o nome da pessoa:")
			leia (nome)
			vetorNome[i] = nome

			escreva ("Digite a idade da pessoa:")
			leia (age)
			idade[i] = age

			escreva ("Digite o gênero da pessoa: (M para masculino ou F para feminino)")
			leia (sexo)
			genero[i] = sexo

			escreva ("Digite o valor do salário da pessoa:")
			leia (valorSalario)
			salario[i] = valorSalario
		}

		mulherSalario(genero, salario)
		calculaSalario(salario)
		retornaSalario = calculaSalario(salario)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 903; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */