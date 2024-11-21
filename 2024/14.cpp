#include <stdio.h>
#include <math.h>

int main (void)
{
	float a,b,d,e,c,f1,f2,x,z;
	char y[20];
			printf("digite seu nome:");
	scanf("%s", &y);
			printf("digite a o horario de sua entrada em relogio digital (ex:13) hr:");
	scanf("%f", &a);
			printf("\nminutos:");
	scanf("%f", &b);
			printf("\n\ndigite agora seu horario de saida, hora:");
	scanf("%f", &d);
			printf("\nminutos:");
	scanf("%f", &e);
	
		
			//f=min em horas
		f1= b/60;
		f2= e/60;
			//c=quantidade de horas trab
		c=(d+f2)-(a+f1);
		if(c<0)
		{
			c= c+24;
		}
		else
	{
	}
	if(c<=4)
	{
		x=(c*30.0);
			printf("\n\n ola, %s voce tem o perfil a de nossa empresa trabalhou %g horas e seu salario sera de %f reais", y,c,x);
	}
	else
	{
		if(c>4 && c<=8)
		{
			x=(c*70.0);
				printf("\n\n ola, %s voce tem o perfil b de nossa empresa trabalhou %g horas e seu salario sera de %f reais", y,c,x);
		}
		else
		{
			x=(c*90.0);
				printf("\n\n ola, %s voce tem o perfil c de nossa empresa trabalhou %g horas e seu salario sera de %f reais", y,c,x);
		}
	}

return 0;
}