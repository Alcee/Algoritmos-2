// EX2_TresNumerosInt.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>

int CalcR(int a, int b)
{
	int r = 0;
	return r = pow((a + b), 2);
}

int CalcS(int b, int c)
{
	int s = 0;
	return s = pow((b + c), 2);
}

int CalcD(int r, int s)
{
	int d = 0;
	return d = (r + s) / 2;
}


int main()
{
	int a = 0, b = 0, c = 0, d = 0, r = 0, s = 0;
	printf("Digite o primeiro numero: \n");
	scanf_s("%i", &a);

	printf("Digite o segundo numero: \n");
	scanf_s("%i", &b);

	printf("Digite o terceiro numero: \n");
	scanf_s("%i", &c);

	r = CalcR(a, b);
	s = CalcS(b, c);
	d = CalcD(r, s);

	printf("Valor da expressao D: %i \n", d);

	system("pause");
	return 0;
}

