#include <stdio.h>

int main (void){
	float mtq, valor, quantidade;
	int tinta = 18 / 6 , lata = 80;
	
		printf ("quantos metros quadrados tem a area a ser pintada?");
		scanf("%f", &mtq);
		
		quantidade = mtq / 54;
		valor = quantidade * lata;
		
		if (mtq <= 18){
			printf("quantidade de latas a serem compradas equivale a 1 e o valor total sera de 18 reais");
		}
		else
		{	
		printf("quantidade de latas a serem compradas equivale a %f \n e o valor total e de %f", quantidade, valor);
		}
	return 0;
	}	