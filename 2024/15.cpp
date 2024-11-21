#include <stdio.h>
#include <math.h>

int main (void)
{
	int n,num,a,soma=0;
		printf("digite o numero:");
	scanf("%d",&num);
	
	n=num;
	
	int numdigitos;
	while(n!=0)
	{
		n = n/10;
		numdigitos ++;
	}
	
	n=num;
	
	while(n!=0)
	{
		a= n%10;
		n=n/10;
		soma = soma + pow(a,numdigitos);
	}
	if(soma==num)
	{
		printf("seu numero e um numero de armstrong");
	}
	else
	{
		printf("seu numero nao e um numero de armstrong");
	}
	
	
	return 0;
}