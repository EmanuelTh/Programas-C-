#include <stdio.h>
int func1 (int m1 [2][2], int m2[2][3]){
	int k,l;
	for (k=0; k<=1; k++){
		printf("\n|");
		for(l=0; l<=1; l++){
			printf("%i", m3[k][l]);
		}
		printf("|");
	}
	printf("\n");
	for(k=0; k<=1; k++){
		printf("\n|");
		for(l=0; l<=2; l++){
			printf("%i", m2[k][l]);
		}
		printf("|");
 	}
printf("\n");
return 0;

func2(int m1[2][3], int m2[2][2]){
	int l, c, aux, prod, mat_res[10][10];
	int res=0;
	printf("\n");
	for l=0; l<2; l++){
		for(c=0; c<3; c++){
			prod=0;
			for(aux=0; aux<2; aux++){
				prod=m2[l][aux]*m1[aux][c];
				mat_res[l][c]*prod;
				}
				res= res - prod;
		}
	}
	for(l=; l<2; l++){
		printf("\n|");
		for(c=0; c<3; c++){
			printf("%i", mat_res[l][c]);
		}
		printf("|");
	}
	printf("\n");
	return res;
}

int main( )
