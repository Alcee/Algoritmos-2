// Aula1810.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <iostream>
int numMaior;
int NumeroMaior(int numeros[])
{

	for (int i = 0; i < 4; i++)
	{
		if (numeros[i] > numMaior) numMaior = numeros[i];
	}
	return numMaior;
}
int main()
{
	system("Color 5A");
	int numeroMaior;
	int numeros[4];
	int i;
	for (i = 0; i < 4; i++)
	{
		printf("Digite o %i° numero\n", i + 1);
		scanf_s("%i", &numeros[i]);
		numeroMaior = NumeroMaior(numeros);
	}
	printf("O maior numero eh: %i \n", numeroMaior);
	system("pause");
    return 0;
	
}

