#include <stdio.h>
#include <math.h>

int main (void)
{
	float Far, Cel, X, Y;
		printf ("Ola, diga sua temperatura em fahrenheit para obte-la em celsius:");
		scanf("%f", &Far);
		
		Cel=((Far - 32)*(5.0/9.0));
		
		printf ("sua temperatura em graus celsius e:%f",Cel);
	return 0;
}

// celsius 33,8 fahr