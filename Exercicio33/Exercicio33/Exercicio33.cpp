// Exercicio33.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <stdlib.h>
#include <conio.h>

int main()
{
	int codEstadoCivil, idade, qtdSolteiro = 0, qtdCasado = 0, qtdDivorciado = 0;
	float mediaIdadeSolteiro = 0, mediaIdadeCasado = 0, mediaIdadeDivorciado = 0;
	char resposta = 's';
	int somaIdadeSolteiro = 0, somaIdadeCasado = 0, somaIdadeDivorciado = 0;

	while (resposta == 's') {
		
		system("cls");
		printf("Digite a sua idade: ");
		scanf_s("%d", &idade);
		printf("Digite o codigo de estado civil: ");
		scanf_s("%d", &codEstadoCivil);

		if (codEstadoCivil == 1) {

			
			somaIdadeSolteiro += idade;
			qtdSolteiro++;
		}

		else if (codEstadoCivil == 2) {
			
			somaIdadeCasado += idade;
			qtdCasado++;
		}

		else {
			
			somaIdadeDivorciado += idade;
			qtdDivorciado++;
		}

		printf("Deseja digitar os dados de outra pessoa ? (s/n) \n");
		resposta = _getwche();
		printf("\n");

	}
	
	
	if (qtdSolteiro != 0) {
		mediaIdadeSolteiro = somaIdadeSolteiro / qtdSolteiro;
	}
	 if (qtdCasado != 0) {
		mediaIdadeCasado = somaIdadeCasado / qtdCasado;
	}
	 if (qtdDivorciado != 0) {
		mediaIdadeDivorciado = somaIdadeDivorciado / qtdDivorciado;
	}
	
	printf("A media da idade dos solteiros eh: %.2f \n",mediaIdadeSolteiro);
	printf("A media da idade dos casados eh: %.2f \n",mediaIdadeCasado);
	printf("A media da idade dos divorciados eh: %.2f \n",mediaIdadeDivorciado);
	

	system("pause");
}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
