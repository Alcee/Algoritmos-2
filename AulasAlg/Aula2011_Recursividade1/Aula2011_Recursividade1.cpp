// Aula2011_Recursividade1.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"

int soma(int n)
{
	if (n == 1)
		return 1;
	else
		return n + soma(n - 1);
}

int main()
{
    int n = 0;
	printf("Digite um numero inteiro \n");
	scanf_s("%d", &n);
	printf("Soma: %d", soma(n));
}

