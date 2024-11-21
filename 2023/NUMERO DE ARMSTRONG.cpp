#include <stdio.h>
#include <math.h>


int main (void)
{
	int n1,Y, exp, temp, digito, n2, soma;
	printf("INFORME O NUMERO:");
	scanf("%d", &n1);
	printf("INFORME QUANTOS DIGITOS ESSE NUMERO TEM");
	scanf("%f", exp);
	
	temp = n1;
		
	while (temp != 0) {
        int digito = temp % 10;
        soma += pow(digito, exp);
        temp /= 10;
    }

		if (Y = n1)
		{ 
		printf("seu numero pertence aos numeros de armstrong");
		}
		else
		{
		printf("seu numero nao pertence aos numeros de armstrong");
		}
		
	return 0;
}