#include <stdio.h>
#include <math.h>

int main (void)
{
	float N1, N2, N3, N4, media;
	
		printf ("digite a nota do 1 bimestre");
			scanf ("%f", &N1);
		printf ("\ndigite a nota do 2 bimestre");
			scanf ("%f", &N2);
		printf ("\ndigite a nota do 3 bimestre");
			scanf ("%f", &N3);
		printf ("\ndigite a nota do 4 bimestre");
			scanf ("%f", &N4);
		
		media = (N1 + N2 + N3 + N4);
		
		printf ("\nsua media geral e %f", media);
	
	return 0;
}