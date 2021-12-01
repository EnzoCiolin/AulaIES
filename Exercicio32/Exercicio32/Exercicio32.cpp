// Exercicio32.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <stdlib.h>
#include <conio.h>

int main()
{
	float nota1, nota2, nota3, media, soma = 0;
	char resposta = 's';

	while (resposta == 's') {

		system("cls");
		printf("Digite uma nota: ");
		scanf_s("%f", &nota1);
		printf("Digite outra nota: ");
		scanf_s("%f", &nota2);
		printf("Digite outra nota: ");
		scanf_s("%f", &nota3);

		soma = nota1 + nota2 + nota3;

		media = soma / 3;

		printf("A media eh: %.2f \n",media);

		if (media >= 6) {
			printf("O aluno foi aprovado \n");
		}
		else {
			printf("O aluno foi reprovado \n");
		}

		printf("Deseja digitar outro numero ? (s/n) \n");
		resposta = _getwche();
		printf("\n");

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
