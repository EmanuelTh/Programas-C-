#include <stdio.h>
#include <math.h>

int main (void)
{
	float Numero1, Numero2, ex, media;
	
	printf ("digite Numero1:");
	scanf ("%f", &Numero1);
	printf ("digite Numero2:");
	scanf ("%f", &Numero2);
	printf ("digite ex:");
	scanf ("%f", &ex);
	
	
	media= (0.3*Numero1) + (0.6*Numero2) + (0.1*ex);
	
	printf ("\nMedia=%f", media);
	
	if (media >= 6)
	{
		printf ("\n aprovado");
	}	
	else 
	{	
		if (media < 5)
			{
			printf ("\n reprovado");
			}
		else
			{
			printf ("\n REC");
			}
}
return 0;
}