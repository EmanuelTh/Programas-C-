#include <stdio.h>
#include <math.h>

int main (void)
{
	int a,b,c;
	printf("digite o penultimo e ultimo digito de seu r.a:");
	scanf("%d %d", &a,&b);
	
	if((a > b && 2 < a && 5 > b) || ((13 + b) > ( 10 + a) && (b!=2)) || !(a > 2))
	{
		printf("parabens voce e esta na turma a");
	}
	else
	{
		if((a < b && 3 == a && 5 < b) || ((100 + b)>(101 + a)) || (b == 3 && a < 4))
		{
		printf("parabens vc esta na turma b");
		}
		else
		{
		
		}
	}
	return 0;
}