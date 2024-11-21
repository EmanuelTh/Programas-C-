#include <stdio.h>
#include <math.h>

int main (void)
{
	float A1, a2=1;
	printf("digite o numero desejado para realizar seu fatorial:");
	scanf("%f", &A1);
	
	for(int n=1; n <= A1; n++ )
	{
	
	a2 = a2*n;
	}
	printf("\n resultado do fatorial calculado: %f", a2);
	return 0;
}