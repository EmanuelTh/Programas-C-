#include <stdio.h>

int main (void){

float peso, excesso, valor;
int pr = 50, multa = 4;

	printf("informe o peso obtido em peixes:");
	scanf("%f", &peso);
	
		excesso = peso - pr;
		valor = excesso * multa;
	
	printf("excesso de peso = %f \n voce deve pagar o valor de R$%f em multa", excesso, valor);
return 0;
}