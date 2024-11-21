#include <stdio.h>
#include <math.h>

int main (void)
{
	float vel, dist, temp, x;
			printf("vamos calcular a velocidade de seu projetil, qual a distancia percorrida em km?");
		scanf("%f",&dist);
			printf("\n e quantos minutos levou para chegar a esta distancia?");
		scanf ("%f",&temp);
		dist=dist*1000;
		temp=temp*60;
			x=(dist/temp);
			printf("\n sua velocidade media era de:%f m/s",x);
		
			
	return 0;
}