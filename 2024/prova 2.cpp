#include <stdio.h>

int main (){
	int lim,n,k,vet[4],soma=-1,sub=-3;
	int i=1,j=2,cont=-2;
	printf("entre com o %i numero de seu RA", i);
	scanf("%i", &lim);
	for(k=4;k >=1;k--){
		printf("entre com o %i numero de seu RA", k+1);
		scanf("%i", &vet[k-1]);
	}
		for(k=0; k<4; k++){
		printf("\n[%i]=%i", k,vet[k]);
		if(vet [k]>=5){
			sub-=vet[k];
		}else{
			soma+=vet[k];
		}
	}
	printf("\n resultado=%i", sub+soma);
	while(1){
		if(((i<0)||(i<=5))||((j<0)||(j>=5))){
			cont++;break;
		} else {
			if((i<4)&&(i>-1)){
			vet[i]+=vet[i+1];}
			if((j<3)&&(j>0)){
			vet[j]=vet[j-1]-vet[j+1];}
			cont++;
			}
			vet[3]--; vet[2]++;
			if(cont > lim -5){
				i=0; j=-2;
				if(cont>=lim){
				break;}
			}
		}
		printf("\n [%i  %i]", vet[3], vet[0]);
		return 0;
	}
              