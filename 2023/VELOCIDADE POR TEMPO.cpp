#include <stdio.h>
#include <math.h>

int main (void)
{
	float D, T, V1, V2;
	printf("digite a distancia percorrida em KM");
	scanf ("%f", &D);
	printf("\n digite o tempo em minutos");
	scanf ("%f", &T);
	
	V1 = D / T;
	V2 = (V1) / (3.6);
	
	printf("\n\n sua velocidade e de %f m/s", V2);
	
	return 0;
}