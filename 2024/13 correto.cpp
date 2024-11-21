#include <stdio.h>
#include <math.h>

int main (void)
{
	float temp;
	int min,hr,s,t;
	printf("digite seu valor de tempo em minutos");
	scanf("%f", &temp);

	int rhr,rmin;
	s = temp*60;
	hr = s/3600; //so aparece antes da virgula
	rhr= s%3600; // so aparece depois da virgula
	min = rhr/60;
	rmin= rhr%60;
	t = rmin;
	
	printf("%dh %dmin %ds",hr,min,t);
	
	return 0;
}