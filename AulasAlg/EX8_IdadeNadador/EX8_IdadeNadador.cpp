// EX8_IdadeNadador.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <iostream>

void ClassificarNadador(int idade)
{
	if (idade >= 5)
	{
		if (idade >= 5 && idade <= 7)
			printf("Infantil A\n");
		else if(idade >= 8 && idade <= 10)
			printf("Infantil B\n");
		else if(idade >= 11 && idade <= 13)
			printf("Juvenil A\n");
		else if(idade >= 14 && idade <= 17)
			printf("Juvenil B\n");
		else
			printf("Adulto\n");
	}
	else
		printf("Idade invalida\n");
}


int main()
{
	int idade = 0;
	printf("Digite a idade do nadador\n");
	scanf_s("%i", &idade);
	ClassificarNadador(idade);
	system("pause");
}

