#include <stdio.h>
#include <math.h>

int main (void)
{
	float min, hr, s, temp;
	printf("digite seu valor de tempo em minutos");
	scanf("%f", &temp);
	
	s=temp%10;
	printf("%f",s);
	
	return 0;
	
}