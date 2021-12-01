// Exercicio35.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <stdlib.h>
#include <conio.h>

int main()
{
	int codigo, contPanelas, contChaleiras, contVassouras;

	contPanelas = contChaleiras = contVassouras = 0;

	do {
		system("cls");

		printf("Menu de opcoes: \n");
		printf("0 - Encerrar o programa; \n");
		printf("1 - Incluir uma panela no estoque; \n");
		printf("2 - Incluir uma cheleira no estoque; \n");
		printf("3 - Incluir uma vassoura no estoque; \n");
		printf("4 - Relatorio de inclusoes. \n");
		printf("Escolha uma opcao: ");
		scanf_s("%d", &codigo);

		//tratamento das opções do menu

		switch (codigo) {
		case 0:
			printf("Encerrando o programa \n");
			break;
		case 1:
			printf("Incluindo uma panela no estoque \n");
			contPanelas++;
			break;
		case 2:
			printf("Incluindo uma chaleira no estoque \n");
			contChaleiras++;
			break;
		case 3:
			printf("Incluindo uma vassoura no estoque \n");
			contVassouras++;
			break;
		case 4:
			printf("Relatorio de inclusoes \n");
			printf("%d Panelas no estoque \n",contPanelas);
			printf("%d Chaleiras no estoque \n", contChaleiras);
			printf("%d Vassouras no estoque \n", contVassouras);
			break;
		default:
			printf("Codigo invalido \n");
			break;
		}

		system("pause");
	
	} while (codigo != 0);

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
