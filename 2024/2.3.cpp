#include <stdio.h>

int main (){
	int numf=10;
	char nome[numf][20];
	int salario [numf];
	int i;
	for(i=0; i<numf; i++){
		printf("nome:");
		scanf("%s", &nome[i]);
		printf("salario:");
		scanf("%d", &salario[i]);
	}
		if (salario[i]>=500){
			printf("%s %d",nome[i], salario[i]);
			}
	
	return 0;
}