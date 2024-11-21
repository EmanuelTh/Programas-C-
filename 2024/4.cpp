#include <stdio.h>
#include <math.h>

int main (void)
{
	float a,b,c,d,med;
	printf("digite em sequencia as 4 notas bimestrais:");
	printf("\n nota 1:");
	scanf ("%f", &a);
		printf("\n nota 2:");
	scanf ("%f", &b);
			printf("\n nota 3:");
	scanf ("%f", &c);
				printf("\n nota 4:");
	scanf ("%f", &d);
	
	med = (a+b+c+d)/(4);
	
			printf("\n sua nota media foi de:%f", med);
	return 0;
}