#include <stdio.h>
#include <math.h>

int main (){
int N, T, i;
int contador=0;
printf("escreva o tamanho do seu vetor");
scanf("%d", &T);

if(T>50){
    printf("voce excedeu o tamanho de vetor digite novamente o tamanho \n");
    scanf("%d", &T);
}

int vetor[T], vetor_a[T], vetor_b[T];
int j=0;
int k=0;
for(i=0;i<T;i++){
    printf("digite o valor \n");
    scanf("%d", &N);
    vetor[i]=N;
}
for(i=0;i<T;i++){
    if(vetor[i]>0){
        vetor_a[j++]=vetor[i];//vetor_a [0]= vetor[0]=1 vetor
       
    }
    else if(vetor[i]<0){
        vetor_b[k]=vetor[i];
        k++;
    }
    else{
        contador++;
    }
}
printf("vetor:");
for(i=0;i<T;i++){
    printf("%d ",vetor[i]);
}

printf("\n");
printf("vetor a:");
for(i=0;i<j;i++){

    printf("%d ",vetor_a[i]);
}

printf("\n");
printf("vetor b:");

for(i=0;i<k;i++){
    printf("%d",vetor_b[i]);
}
printf("\n");
printf("O numero de zeros nos vetor é: %d", contador);
return 0;
}