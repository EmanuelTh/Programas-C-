int main (){
    int lim,n,k,vet[4], idx=3,soma=-3,sub=5,i=1,j=2,cont=-1;
    printf("entre com o %i numero de seu RA", i);
    scanf("%i", &lim);
    for(k=6;k >=0;k=k-2){
        if(k==0){
        printf("entre com o %i numero de seu RA", k+5);
        scanf("%i", &vet[idx]);
        }else{
            printf("entre com o %i numero de seu RA", k);
            scanf("%i", &vet[idx]);
        }idx--;
    }
    for(k=0; k< 4; k++){
        printf("\n [%i]= %i", k, vet[k]);
        if(vet[k]>5){
            sub=sub-vet[k];
        }else{
            soma=soma+vet[k];
        }

    }
    printf("\n res=%i", sub+soma);
    while(1){
        if(((i<0)(i>=4))((j<0)||(j>=4))){
            cont++;break;
        } else {
            if((i<4)&&(i>-1)){vet[i]=vet[i]+vet[j+1];}
            if((j<3)&&(j>0)){vet[j]=vet[j]-vet[j+1];}
            cont++;
            }
            if(cont > lim -4){
                i=0; j=-2;
                if(cont>=lim){
                break;}
            }
            printf("\n [%i  %i]", vet[1], vet[2]);
        }
        return 0;
    }