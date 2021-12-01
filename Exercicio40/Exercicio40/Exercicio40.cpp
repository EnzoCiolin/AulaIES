// Exercicio40.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>

int main()
{
	int idadePrimeiraPessoa, idadeSegundaPessoa;
	char nomePrimeiraPessoa[40];
	char nomeSegundaPessoa[40];
	float media;

	printf("Dados da primeira pessoa: \n");
	printf("Nome: ");
	gets_s(nomePrimeiraPessoa);
	printf("Idade: ");
	scanf_s("%d \n", &idadePrimeiraPessoa);

	printf("Dados da segunda pessoa: \n");
	printf("Nome: \n");
	gets_s(nomeSegundaPessoa);
	printf("Idade: \n");
	scanf_s("%d \n", &idadeSegundaPessoa);

	media = (idadePrimeiraPessoa + idadeSegundaPessoa) / 2;

	printf("A idade media de %c e %c eh de %f anos \n", nomePrimeiraPessoa, nomeSegundaPessoa, media);

	//getch();
	system("pause");
	return 0;
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
