// Aula2310_Caso.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <iostream>

float CalculaImposto(float salario)
{
	float ir;
	if (salario > 0 && salario > 1903.99 && salario < 2826.65)
	{
		ir = (salario * 0.075) - 142.80;
	}
	else if (salario > 2826.66 && salario < 3751.05)
	{
		ir = (salario * 0.15) - 354.80;
		printf("Valor do imposto: %.2f \n", ir);
	}
	else if (salario > 3751.06 && salario < 4664.68)
	{
		ir = (salario * 0.225) - 636.13;
		printf("Valor do imposto: %.2f \n", ir);
	}
	else if (salario > 4664.68)
	{
		ir = (salario * 0.275) - 869.36;
		printf("Valor do imposto: %.2f \n", ir);
	}
	else
		printf("Digite um valor correto\n");
	return ir;
}


int main()
{
	system("Color 3f");
	float salario, salLiq, ir;
	printf("Digite o valor do seu salario bruto: \n");
	scanf_s("%f", &salario);
	ir = CalculaImposto(salario);
	salLiq = salario - ir;
	printf("Valor do salario com imposto: %.2f \n", salLiq);
	system("pause");
    return 0;
}

