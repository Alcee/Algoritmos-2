// Aula0910.cpp : define o ponto de entrada para o aplicativo do console.


//Variaveis globais
#include "stdafx.h"
#include <iostream>
int a;			//inteiro
float b;		//real com pouca precisao decimal
double c;		//real com grande precisao decimal

int main()
{
	
	//Variaveis locais
	char d;		//caractere
	bool e;		//true/false
	printf_s("Hello world ! \n\n"); // \t = tab
	printf("Mostrando o inteiro %i \n", 6);
	printf("A soma de %i e %i eh: %i \n", 15, 5, 15+5);
	printf("Mostrando valor real: %.2f \n", 4.3);
	int f = 8;
	a = f * 2;
	printf("Resultado da multiplicacao de %i por 2 eh: %i \n", f, a);
	printf("Digite um valor: \n");
	scanf_s("%i", &a);
	printf("Valor: %i \n", a);
	system("pause");
}

