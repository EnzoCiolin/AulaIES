// InicializandoVariaveis.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <stdlib.h>

int main()
{
	//declaração das variáveis
	int numero = 46;
	float valor = 8.37;
	char letra = 'X';

	printf("Variavel numero....: %d \n",numero);
	// %d número inteiro
	printf("Variavel valor....: %f \n", valor);
	// %f número com vírgula
	printf("Variavel valor....: %10.2f \n", valor);
	// %10.2f variavel de 10 dígitos, com somente duas casas depois da virgula
	printf("Variavel valor....: %.2f \n", valor);
	// %.2f variavel com somente duas casas depois da virgula
	printf("Variavel numero....: %c \n", letra);
	// %c para caracter

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
