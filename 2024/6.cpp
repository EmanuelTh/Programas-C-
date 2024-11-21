#include <stdio.h>
#include <math.h>

int main (void)
{
	float cent, metro;
	printf ("vamos tranformar seus cm em metros, diga o valor:");
	scanf("%f", &cent);
	
	metro = (cent/100);
	
		printf("voce tem em metros %f", metro);
	return 0;
}