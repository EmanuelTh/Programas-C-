#include <stdio.h>
#include <math.h>

int main (void)
{	
	float L1, LT, LD;
		printf("informe qual o tamanho de um dos lados: ");
		scanf("%f", &L1);
		
	LT = (L1*L1);
	LD = (LT*2);
		
		printf("\n a area total do quadrado e igual a: %f", LT);
		printf("\n\n e o dobro da sua area e: %f", LD);
	return 0;
}