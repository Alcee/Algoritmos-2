// Aula1110_FuncaoCalcular.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <iostream>

int CalcularAdicao(int x, int y)
{
	int ad;
	ad = x + y;
	return ad;
}
int CalcularSubtracao(int x, int y)
{
	int sub;
	sub = x - y;
	return sub;
}
int CalcularMultiplicacao(int x, int y)
{
	int mult;
	mult = x * y;
	return mult;
}
int CalcularDivisao(int x, int y)
{
	int div;
	div = x / y;
	return div;
}
int LerNumeros()
{
	int num;
	printf("Favor digitar um numero inteiro:\n");
	scanf_s("%i", &num);
	return num;
}
int main()
{
	int a = LerNumeros();
	int b = LerNumeros();
	int adicao = CalcularAdicao(a, b);
	int subtracao = CalcularSubtracao(a, b);
	int multiplicacao = CalcularMultiplicacao(a, b);
	int divisao = CalcularDivisao(a, b);
	printf("\nValor da Adicao: %i \nValor da Subtracao: %i \nValor da Multiplicacao: %i \nValor da Divisao: %i \n\n", adicao, subtracao, multiplicacao, divisao);
	system("pause");
}

