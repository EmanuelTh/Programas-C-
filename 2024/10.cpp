#include <stdio.h>
#include <math.h>

int main (void)
{
	float vol,cil,ret,raio,pi,alt,comp,larg,x;
	pi=3.14;
			printf("qual caixa voce tem em maos?\n(selecione apenas um numero valido abaixo)");
			printf("\n 1- retangular \n 2-cilindrica\n");
		scanf("%f",&x);
			
			if(x==1)
			{
					printf("digite o comprimento:");
				scanf("%f",&comp);
					printf("digite a largura:");
				scanf("%f",&larg);
					printf("digite a altura:");
				scanf ("%f",&alt);
				
					vol=(comp*larg*alt);
					printf("o volume da sua caixa e: %fcm3", vol);
			}
			else
			{
					printf("digite a altura:");
				scanf("%f",&alt);
					printf("digite seu raio:");
				scanf("%f",&raio);
				
				vol= (pi*pow(raio,2)*alt);
				printf("o volume de sua caixa e:%fcm3", vol);
			}
	return 0;
}