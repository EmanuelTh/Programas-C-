#include <stdio.h>
#include <math.h>

int main (void)
{
	float area,dobro,lado;
	printf("hoje iremos calcular o dobro da area de um quadrado, qual o tamanho do lado do seu quadrado?");
	scanf("%f",&lado);
	
		area= pow(lado,2);
		dobro= area*2;
		
			printf("a area dobrada de seu quadrado e de:%f", dobro);
	return 0;
	
}