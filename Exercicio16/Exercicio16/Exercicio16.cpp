// Exercicio16.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <stdlib.h>

int main()
{
	float numero1, numero2,resultado;

	printf("Digite um numero: ");
	scanf_s("%f", &numero1);
	printf("Digite outro numero: ");
	scanf_s("%f", &numero2);

	if (numero1 > numero2) {

		resultado = numero1 / numero2;
		printf("O resultado eh: %.1f \n",resultado);

	}

	else {

		resultado = numero2 / numero1;
		printf("O resultado eh: %.1f \n",resultado);
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
