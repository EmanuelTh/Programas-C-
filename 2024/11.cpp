#include <stdio.h>
#include <math.h>

int main (void)
{
	int n,i,x,fat;
			printf("escreva um numero para ver qual seu resultado fatorial:");
		scanf ("%d", &n);
	fat=1;
			for(i=n;i>1;i--)
		{
			fat=fat*i;	
		}
	
	printf("o fatorial de %d e: %d",n,fat);
	return 0;
	
}