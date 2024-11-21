#include <stdio.h>
#include <math.h>

int main (void)
{
 int N1=3;
 int N2=6;
 
 if (N1>N2 && 2 < N1 && 5 > N2 || (13 + N2) > (10 + N1) && (N2!=2) || !(N1 > 2))
 {
	printf("opcao a verdadeira \n\n");
 }
 else
 {
 	printf("opcao falsa \n\n");
 	}
 	if (N1 < N2 && 3 == N1 && 5 < N2 || 100 + N2 > 101 + N1 || N2 == 3 && N1 < 4)
 	{
 		printf("opcao b verdadeira");
 		}
 		else {
 			printf("opcao b falsa");
		 }
		 
		 
		 return 0;
		 
	}