#include <stdio.h>
#include <math.h>

int main (void)
{
	float X, Y, soma;
	printf ("digite o primeiro numero de uma soma:");
	scanf ("%f", &X);
	
		printf ("agora digite o segundo numero da soma:");
		scanf("%f",&Y);
		
	soma = (X + Y);
	
			printf ("o resultado destes numeros e:%f",soma);
	return 0;
}