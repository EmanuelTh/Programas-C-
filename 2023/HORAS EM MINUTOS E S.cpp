#include <stdio.h>
#include <math.h>

int main (void)
{
	int M, MR, H;
	float S;

	printf("digite o numero de minutos");
	scanf("%d", &M);
	
	H = M / 60;
	MR = M % 60; 
	S = (M-(H*60+MR))*60;
	

	printf("TEMPO ENCONTRADO COM OS MINUTOS %d = %d horas %d minutos %.1f segundos\n", M, H, MR, S);
	
	
	return 0;
}