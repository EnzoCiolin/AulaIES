// Exercicio36.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <stdlib.h>
#include <conio.h>

int main()
{
	int codigo, qtd = 0, qtdMais = 0, qtdMenos = 0;

	do {
		system("cls");
		printf("Menu de Opcoes \n");
		printf("0 - Encerrar o programa; \n");
		printf("1 - Incluir uma unidade no estoque; \n");
		printf("2 - Excluir uma unidade no estoque; \n");
		printf("3 - Mostrar o total disponivel no estoque; \n");
		printf("4 - Mostrar o total de entradas no estoque; \n");
		printf("5 - Mostrar o total de saidas no estoque. \n");
		printf("Digite um codigo: ");
		scanf_s("%d", &codigo);

		switch (codigo) {
		case 0:
			printf("Encerrando o programa \n");
			break;
		case 1:
			printf("Unidade adicionada \n");
			qtdMais++;
			break;
		case 2:
			printf("Unidade Removida \n");
			qtdMenos++;
			break;
		case 3:
			qtd = qtdMais - qtdMenos;
			printf("%d Disponivel em estoque \n",qtd);
			break;
		case 4:
			printf("%d de entradas no estoque \n",qtdMais);
			break;
		case 5:
			printf("%d de saidas do estoque \n", qtdMenos);
			break;
		default:
			printf("Codigo Invalido \n");
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
