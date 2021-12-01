// Exercicio20.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <stdlib.h>

int main()
{
	float salarioHora, salarioBruto, salarioLiquido, taxa, taxafinal;
	int qtdFilho, qtdHoras;

	printf("Digite seu salario hora: ");
	scanf_s("%f", &salarioHora);
	printf("Digite a quantidade de horas trabalhadas: ");
	scanf_s("%d", &qtdHoras);
	printf("Digite a quantidade de filhos menores de 14 anos: ");
	scanf_s("%d", &qtdFilho);

	salarioBruto = salarioHora * qtdHoras;

	if (salarioBruto <= 700) {
		taxa = 8.50;
	}

	else if (salarioBruto <= 1000) {
		taxa = 6.50;
	}

	else {
		taxa = 2.50;
	}

	taxafinal = taxa * qtdFilho;
	salarioLiquido = salarioBruto + taxafinal;

	printf("O salario bruto eh: %.2f \n",salarioBruto);
	printf("O salario familia eh: %.2f \n", taxafinal);
	printf("O salario liquido eh: %.2f \n", salarioLiquido);

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
