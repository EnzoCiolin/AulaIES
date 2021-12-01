// Exercicio22.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <stdlib.h>

int main()
{
	int numero;

	printf("Digite um numero entre 0 e 10: ");
	scanf_s("%d", &numero);

	switch (numero)
	{
	case 0:
		printf("O numero digitado eh: zero \n");
		break;
	case 1:
		printf("O numero digitado eh: um \n");
		break;
	case 2:
		printf("O numero digitado eh: dois \n");
		break;
	case 3:
		printf("O numero digitado eh: tres \n");
		break;
	case 4:
		printf("O numero digitado eh: quatro \n");
		break;
	case 5:
		printf("O numero digitado eh: cinco \n");
		break;
	case 6:
		printf("O numero digitado eh: seis \n");
		break;
	case 7:
		printf("O numero digitado eh: sete \n");
		break;
	case 8:
		printf("O numero digitado eh: oito \n");
		break;
	case 9:
		printf("O numero digitado eh: nove \n");
		break;
	case 10:
		printf("O numero digitado eh: dez \n");
		break;
	default:
		printf("O numero digitado eh: invalido \n");
		break;
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
