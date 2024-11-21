#include <stdio.h>
#include <math.h>

int main (void)
{
	float h,m,t;
			printf("vamos calcular seu salario mensal, digite quanto voce ganha por hora:");
		scanf("%f", &m);
			printf("\n digite quantas horas voce trabalhou no mes:");
		scanf("%f", &h);
		
		t=m*h;
		printf("seu salario neste mes sera %f reais",t);
	return 0;
	
}