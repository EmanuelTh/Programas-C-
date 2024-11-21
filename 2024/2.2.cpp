#include <stdio.h>

int main (){
	int i,n,t,j,med;
	printf("digite quantos valores deseja armazenar");
	scanf("%d", &t);
	int vetor [t];
	for(i=0;i<t;i++){
	printf("digite os valores");
	scanf("%d", &n);	
	vetor [i]=n;
	}
	int min=vetor[0], max=0;
	for(i=0;i<t;i++){
		if(min>vetor[i]){
			min = vetor [i];
		}
		if(vetor[i]>max){
			max=vetor[i];
		}
	}
	int cont=0;
	for(i=0;i<t;i++){
		j+=vetor[i];
		med=j/t;
		if(med<vetor[i]){
			cont++;
		}
	}

	printf("%d %d \n", min, max);	
	printf("%d %d",med,cont);
	
	
	 
	return 0;
}