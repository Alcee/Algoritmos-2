// Aula1810.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <iostream>
int numMaior;
int MaiorQueMedia(int numeros[])
{
	float media = 0;
	float soma = 0;
	int numeroMaior[4];
	for (int i = 0; i < 4; i++)
	{
		printf("Digite o %i numero\n", i + 1);
		scanf_s("%i", &numeros[i]);

		soma = soma + numeros[i];
	}
	media = soma / 4;
	printf("Media: %f \n", media);
	for (int i = 0; i < 4; i++)
	{
		if (numeros[i] > media)
		{
			numeroMaior[i] = numeros[i];
			printf("Maior valor encontrado: %i \n", numeroMaior[i]);
		}
	}
	return numMaior;
}
int main()
{
	system("Color 3f");
	int numeroMaior[4], numeros[4];
	MaiorQueMedia(numeros);
	//for (int i = 0; i < 4; i++)
	//{
	//	numeroMaior[i] = MaiorQueMedia(numeros);
	//}
	//

	//printf("O(s) numero(s) maior(es) que a media: %i %i %i\n", numeroMaior[0], numeroMaior[1], numeroMaior[2]);
	
	system("pause");
    return 0;
	
}

