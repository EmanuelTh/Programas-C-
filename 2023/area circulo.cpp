#include <stdio.h>
#include <math.h>

int main (void)
{
	float raio, pi, area;
	printf ("informe o raio do circulo para descobrir a area:");
	scanf("%f", &raio);
	pi=(3.14);
	
	area = (pi)*(raio*raio);
	
	printf("\n a area do circulo e igual a: %f", area);
	
	return 0;
}