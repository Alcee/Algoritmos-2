

#include "stdafx.h"
#include <iostream>


int main()
{
	int numeros[5], i;
	for (i = 0; i > 5; i++)
	{
		printf("Digite o %i numero \n", i + 1);
		scanf_s("%i", numeros[i]);
	}
	if (numeros[0] < numeros[1] && numeros[1] < numeros[2] && numeros[2] < numeros[3] && numeros[3] < numeros[4] && numeros[4] < numeros[5])
		printf("Os numeros estao em forma crescente \n");
	else
		printf("Os numeros nao estao em forma crescente \n");
	system("pause");

}

