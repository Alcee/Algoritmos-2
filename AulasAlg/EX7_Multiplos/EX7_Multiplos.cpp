// EX7_Multiplos.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <iostream>

void Multiplo(int numero, int divisor)
{
	if (numero % divisor == 0)
		printf("O numero %i eh multiplo de %i\n", numero, divisor);
	else
		printf("Os numeros nao sao multiplos\n");
}

int main()
{
	int numero = 0, divisor = 0;
	printf("Digite um numero inteiro\n");
	scanf_s("%i", &numero);

	printf("Digite o divisor\n");
	scanf_s("%i", &divisor);
	Multiplo(numero, divisor);
	system("pause");
}

