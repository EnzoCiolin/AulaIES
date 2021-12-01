// ManipulandoMatrizes.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <stdlib.h>

int main()
{
	int matrizes[5][5]{ { 1, 2, 3, 4, 5},
	                    { 6, 7, 8, 9,10},
	                    {11,12,13,14,15},
	                    {16,17,18,19,20},
	                    {21,22,23,24,25}};

	for (int i = 0; i < 5; i++) {
		for (int ii = 0; ii < 5; ii++) {
			printf("%d ", matrizes[i][ii]);
		}

		printf("\n");
	}

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
