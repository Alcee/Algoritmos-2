// EX9_CalcTipoMedia.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <iostream>

float CalcularMedia(float n1, float n2, float n3, int tipoMedia)
{
	float media;
	if (tipoMedia == 1 || tipoMedia == 2 || tipoMedia == 3)
	{
		if (tipoMedia == 1)
		{
			media = (n1 + n2 + n3) / 3;
		}
		else if (tipoMedia == 2)
		{
			media = ((n1 * 3) + (n2 * 3) + (n3 * 4)) / (3 + 3 + 4);
		}
		else if (tipoMedia == 3)
		{
			media = (3 / ((1 / n1) + (1 / n2) + (1 / n3)));
		}
	}
	else
		printf("Digite um tipo de media valido\n");
	return media;
}

int main()
{
	float n1 = 0, n2 = 0, n3 = 0, media = 0;
	int tipoMedia = 0;

	printf("Digite o valor da primeira nota:\n");
	scanf_s("%f", &n1);
	printf("Digite o valor da segunda nota:\n");
	scanf_s("%f", &n2);
	printf("Digite o valor da terceira nota:\n");
	scanf_s("%f", &n3);

	printf("Informe o tipo de media desejada:\n");
	printf("1 para media aritmetica simples\n");
	printf("2 para media aritmetica ponderada\n");
	printf("3 para media harmonica\n");
	scanf_s("%i", &tipoMedia);

	media = CalcularMedia(n1, n2, n3, tipoMedia);
	printf("Media: %.2f\n", media);
	system("pause");
}

