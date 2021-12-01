// Exercicio26.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <stdlib.h>

int main()
{
	int soma = 0, numero;

	for (int i = 0; i < 10; i++) {
		printf("Digite um numero: ");
		scanf_s("%d", &numero);
		soma = soma + numero;
		/*A variavel soma deve ser = 0, toda vez que o loop é ativado
		então a soma atribui o valor digitado e depois zera novamente, 
		fazendo com que ela consiga somar todos os 10 valores digiados
		*/
	}

	
	printf("A soma foi de: %d \n", soma);
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
