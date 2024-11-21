#include <stdio.h>
#include <math.h>

int main(void)

{
	float pi = 3.14;
	float area, raio, expoente = 2;
	char SS;
	printf("informe o valor do raio:");
	scanf("%f", &raio);
	
	area = pow(raio, expoente)*pi;
	
	printf("a area do circulo e:%f \n\n", area);
	printf("deseja continuar?");
	scanf("%s", &SS);
	
	while (SS == 'y' || SS == 'Y')
	{
		printf("informe o valor do raio:");
	scanf("%f", &raio);
	
	area = pow(raio, expoente)*pi;
	
	printf("a area do circulo e:%f", area);
	printf("\n\ndeseja continuar?");
	scanf("%s", &SS);
	}
	
return 0;
}