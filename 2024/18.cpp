#include <stdio.h>
#include <math.h>
float pi= 3.14;
int main (void)
{
	float a,b,d,e,y;
	int c;
		printf("digite o raio para calcular a area de um circulo:");
	scanf("%f", &a);
		b= pi * pow(a,2);
		printf("a area de um circulo de raio %f é %f", a,b);
		printf("quer continuar calculando a area de outros circulos?\n 1-sim 2-nao");
				scanf("%d",&c);
				
		while(c==1)
		{
			printf("qual o raio do circulo");
			scanf("%f",&d);
			e= pi * pow(d,2);
			printf("a area de um circulo de raio %f é %f", d,e);
			printf("quer continuar calculando a area de outros circulos?\n 1-sim 2-nao");
				scanf("%d",&c);		
			
		}
			printf("obrigado");
		
	return 0;
}