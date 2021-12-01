// Exercicio19.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <stdlib.h>

int main()
{
	float salarioInicial, salarioFinal, desconto,taxa;

	printf("Digite seu salario: ");
	scanf_s("%f", &salarioInicial);

	if (salarioInicial < 1317.07) {
		taxa = 8;
	}

	else if (salarioInicial < 2195.12) {
		taxa = 9;
	}

	else {
		taxa = 11;
	}

	desconto = ((taxa / 100) * salarioInicial);
	salarioFinal = salarioInicial - desconto;

	printf("O salario inicial eh: %.2f \n", salarioInicial);
	printf("A taxa do INSS eh: %.0f \n", taxa);
	printf("O valor do desconto eh de: %.2f \n", desconto);
	printf("O salario final eh: %.2f \n", salarioFinal);

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
