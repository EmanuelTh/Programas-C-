#include <stdio.h>
#include <math.h>

int main (void)
{
	float FROG, SUN, resultado = FROG*SUN;;
	printf ("quanto voce ganha por hora?");
	scanf ("%f", &FROG);
	printf("quantas horas voce trabalhou no mes?");
	scanf ("%f", &SUN);

	
	printf("seu salario e: %f", resultado);
}