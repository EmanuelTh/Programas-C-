#include <stdio.h>

int main (void)
{
	char nome[20];
	float ent, sai, quant, PA, PB, PC,vv;
	
		printf("digite seu nome e em formato 24hrs digite a hora que entrou e a hora que saiu do trabalho");
		printf("\nse trabalhou em um dia e saiu no outro digitar horario completo na saida ex: 12:00 as 12:00 = 36 horas\n");
		scanf("%s %f %f", &nome, &ent, &sai);
		
		 quant = sai-ent;
			printf("voce trabalhou %f\n\n", quant);
		
		PA = quant * 30;
		PC = quant * 90;
		PB = quant * 60;
		
		if (quant < 4)
		{ 
		printf("\n %s voce se enquadra no perfil A seu salario e %f\n", nome, PA);
		}
		
		else {
		}
		if (quant > 8)
		{ 
		printf("\n %s voce se enquadra em perfil C seu salario e %f\n", nome, PC);
		}
		else
		{ 
		printf ("\n %s Perfil B seu salario e %f", nome, PB);
		}
		
	return 0; 
}