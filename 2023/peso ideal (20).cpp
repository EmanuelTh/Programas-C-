#include <stdio.h>

int main (void)
{
	float a,i;
	
	printf("digite a altura do usuario:");
	scanf("%f", &a);
	
		i = (72.7 * a) - 58;
	
	printf("\n seu peso ideal seria de %f Kg", i);
	
	return 0;
}