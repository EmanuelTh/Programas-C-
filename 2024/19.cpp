#include <stdio.h>
#include <math.h>

int main (void)
{
	char c;
	int a,d;
	printf("digite um conjunto de dados:");	
	scanf("%d", &a);
	printf("\n deseja sair? (s/n)");
	scanf(" %c", &c);
	
	int x=a;	
	while(c!='s')
	{
		printf("\n\n digite um conjunto de dados:");
		scanf(" %d ", &a);
		
		if(a<x)
		{
			x=a;
		}
		printf("deseja sair? (s/n)");
		scanf(" %c", &c);
	}
	
	printf("o menor dado digitado foi: %d",x);
	return 0;
}