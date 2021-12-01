// Exercicio18.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <stdlib.h>

int main()
{
	float salarioInicial, salarioFinal, porcentagem;

	printf("Digite seu salario: ");
	scanf_s("%f", &salarioInicial);

	if (salarioInicial <= 1000) {
		porcentagem = 15;
	}

	else if (salarioInicial <= 2000) {
		porcentagem = 10;
	}

	else {
		porcentagem = 5;
	}

	salarioFinal = salarioInicial + (salarioInicial * (porcentagem / 100));

	printf("O seu salario inicial era %.2f reais \n", salarioInicial);
	printf("A taxa de reajuste eh de %.0f%% \n", porcentagem);
	printf("O seu salario final eh %.2f reais \n", salarioFinal);

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
