// EX5_ValorCarro.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <iostream>

float CalcImposto(int ValorFabrica)
{
	float valorDist = 0, valorImp = 0, valorTotal = 0;
	valorDist = ValorFabrica * 0.28;
	valorImp = ValorFabrica * 0.45;
	valorTotal = valorDist + valorImp + ValorFabrica;
	return valorTotal;
}

int main()
{
	float ValorFabrica = 0, valorTotal = 0;
	printf("Digite o valor de fabrica do carro\n");
	scanf_s("%f", &ValorFabrica);

	valorTotal = CalcImposto(ValorFabrica);
	printf("Valor total do carro %.2f \n", valorTotal);
	system("pause");
}

