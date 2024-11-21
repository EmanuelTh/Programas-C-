#include <stdio.h>
#include <math.h>

int main (void)

{
	float Celsius, Fahr, C1;
		
		printf("informe qual a temperatura em Cesius");
		scanf ("%f", &Celsius);
		Fahr = (32);
		
		C1 = (Celsius * 1.8) + (Fahr);
		
			printf("\nsua temperatura em F = %f", C1);
			
	return 0;
}