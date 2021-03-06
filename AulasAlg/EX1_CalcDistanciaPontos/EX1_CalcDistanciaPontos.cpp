// EX1_CalcDistanciaPontos.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>

float CalcDistancia(int x1, int y1, int x2, int y2)
{
	float expr1 = 0, expr2 = 0, distancia = 0;
	expr1 = x2 - x1;
	expr1 = pow(expr1, 2);
	expr2 = y2 - y1;
	expr2 = pow(expr2, 2);
	distancia = expr1 + expr2;
	distancia = sqrt(distancia);

	return distancia;
}

int main()
{
	int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
	float distancia;
	printf("Digite o valor de X1: \n");
	scanf_s("%i", &x1);

	printf("Digite o valor de Y1: \n");
	scanf_s("%i", &y1);

	printf("Digite o valor de X2: \n");
	scanf_s("%i", &x2);

	printf("Digite o valor de Y2: \n");
	scanf_s("%i", &y2);

	distancia = CalcDistancia(x1, y1, x2, y2);

	printf("Distancia dos dois pontos: %.2f \n", distancia);
	system("pause");
    return 0;
}

