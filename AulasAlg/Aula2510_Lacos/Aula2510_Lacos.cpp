// Aula2510_Lacos.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	int numeros[5], i = 0;
	for (i = 0; i < 5; i++)
	{
		printf("Digite o %i numero \n", i + 1);
		scanf_s("%i", &numeros[i]);

	}
	int cont = 0;
	for (i = 1; i <5; i++) 
	{
		if (numeros[i] >= numeros[i - 1])
		cont = cont + 1;
	}
	if(cont == 4)
		printf("Numeros crescentes!\n");
	else
		printf("Numeros nao crescentes!\n");

	system("pause");
    return 0;
}

