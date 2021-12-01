// Exercicio37.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <stdlib.h>
#include <conio.h>

int main()
{
	int codigo, pessoasEntrando = 0, pessoasSaindo = 0, lugaresDisponiveis = 40;

	do {
		
		system("cls");
		printf("Menu de Opcoes \n");
		printf("0 - Encerrar o programa; \n");
		printf("1 - Entrar uma pessoa no restaurante; \n");
		printf("2 - Sair uma pessoa no restaurante; \n");
		printf("3 - Mostrar quantos lugares estao disponiveis; \n");
		printf("4 - Mostrar o total de pessoas que entraram; \n");
		printf("5 - Mostrar o total de pessoas que sairam. \n");
		printf("Digite um codigo: ");
		scanf_s("%d", &codigo);

		switch (codigo) {
		case 0:
			printf("Encerrando o programa \n");
			break;
		case 1:
			if (lugaresDisponiveis > 0) {
				printf("Entrou uma pessoa no restaurante \n");
				pessoasEntrando++;
				lugaresDisponiveis--;
			}
			else {
				printf("restaurante lotado \n");
			}
			break;
		case 2:
			printf("Saiu uma pessoa do restaurante \n");
			pessoasSaindo++;
			lugaresDisponiveis++;
			break;
		case 3:
			printf("%d lugares disponiveis \n",lugaresDisponiveis);
			break;
		case 4:
			printf("%d pessoas entraram no restaurante \n",pessoasEntrando);
			break;
		case 5:
			printf("%d pessoas sairam do restaurante \n",pessoasSaindo);
			break;
		default:
			printf("Codigo invalido \n");
			break;
		}

		system("pause");

	} while (codigo != 0);

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
