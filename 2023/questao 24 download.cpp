#include <stdio.h>

int main (void){
	float tempo, tamanho, velocidade, minutos;
	
		printf("para saber o tempo de espera informe o tamanho do arquivo em MB e sua velocidade de internet\n");
		scanf ("%f %f", &tamanho, &velocidade);
		
		tempo = velocidade / (8.0 / 60);
		minutos = tamanho / tempo;
		
		printf("seu download estara concluido em: %f min", minutos);
		return 0;
	}