#include <stdio.h>
#include <math.h>

float const pi = 3.14;
int main (void)

{
	float O1, O2, L1, R, A1, A2, VOL;
	printf("\n 01 - produto cilindrico");
	printf("\n 02 - produto retangular");
	printf("\n selecione uma das opcoes abaixo sobre seu produto:");
	scanf("%f", &O1);

	if (O1 == 01)
		{
			printf("digite a altura do produto:");
			scanf("%f", &A1);
			printf("agora digite o raio do seu produto:");
			scanf("%f", &R);
			
			VOL = (pow(R,2)) * (A1) * pi;
						
			printf("o volume de seu produto e: %f", VOL);
	}
	else
	{
		if (O1 == 02)
		{
			printf("digite a altura do seu produto");
			scanf("%f", &A2);
			printf("agora digite qual a largura do seu produto");
			scanf("%f", &L1);
			printf("por fim digite o comprimento do seu produto");
			scanf("%f", &O2);
			
			VOL = (A2) * (L1) * (O2);
			
			printf("o volume do seu produto e: %f", VOL);
		}
		else
		{
			printf("erro");
		}
	}
	return 0;
}