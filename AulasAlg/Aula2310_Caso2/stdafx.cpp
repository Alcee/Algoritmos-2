// stdafx.cpp : arquivo de origem que inclui apenas as inclusões padrões
// Aula2310_Caso2.pch será o cabeçalho pré-compilado
// stdafx.obj conterá as informações de tipo pré-compiladas

#include "stdafx.h"
#include <iostream>

int CincoNumeros()
{
	int numeros[5];
	for (int i = 0; i > 5; i++)
	{
		printf("Digite o %i numero \n", i + 1);
		scanf_s("%i", numeros[i]);
	}
	if (numeros[0] < numeros[1] && numeros[1] < numeros[2] && numeros[2] < numeros[3] && numeros[3] < numeros[4] && numeros[4] < numeros[5])
		printf("Os numeros estao em forma crescente \n");
	else
		printf("Os numeros nao estao em forma crescente \n");
}


int main()
{
	CincoNumeros();
	system("pause");

}
