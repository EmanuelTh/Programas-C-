#include <stdio.h>

int main (){
    int a, b, c, i, j, y=0;
    scanf ("%d", &a);
    if(a>10){
        printf("tamanho excedido \n\n");
        scanf ("%d", &a);
    }
    int matriz [a][a];
    for(i=0;i<a;i++){
        for(j=0;j<a;j++){
            scanf("%d",&matriz[i][j]);
        }
    }

    for(i=1;i<a;i++){
        for(j=0;j<i;j++){
            if (matriz[i][j]!=0){
                y=1;
            }
        }
    }
    if (y==0){
        printf("A matriz é triangular superior");
    }
    else{
        printf("A matriz não é triangular superior");
    }
    
}