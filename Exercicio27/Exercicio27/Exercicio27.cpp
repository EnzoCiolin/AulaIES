// Exercicio27.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <stdlib.h>

int main()
{
	int numero, somap = 0, soman = 0,zero = 0;

	for (int i = 0; i < 20; i++) {

		printf("Digite um numero: ");
		scanf_s("%d", &numero);

		if (numero > 0) {
			somap = somap + numero;
		}

		else if (numero < 0) {
			soman = soman + numero;
		}

		else {
			zero++; // todas vez que for para contar uma variavel, deve se usar o ++ na frente dela e atribuir o valor 0 a ela
		}
	}

	printf("A soma de numeros positivos foi: %d \n", somap);
	printf("A soma de numeros negativos foi: %d \n", soman);
	printf("A quantidade de zero(s) digitadas foi: %d \n", zero);

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
