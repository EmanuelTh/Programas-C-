#include <stdio.h>
#include <math.h>

int main() {
    float area, lt;

    		printf("Digite o tamanho em metros quadrados da area a ser pintada: ");
    scanf("%f", &area);

    	 lt = ceil(area / 6 * 1.1);

   			 int total_latas = ceil(lt / 18);
   		 float custo_latas = total_latas * 80.0;

   
  				  int total_galoes = ceil(lt / 3.6);
  		  float custo_galoes = total_galoes * 25.0;
	
  
   				 int latas = lt / 18;
   		 int galoes = ceil((lt - (latas * 18)) / 3.6);
    		float custo_mistura = (latas * 80.0) + (galoes * 25.0);

    					printf("Quantidade de tinta a ser comprada:\n");
					    printf("Comprando apenas latas de 18 litros: %d lata(s)\n", total_latas);
					    printf("Comprando apenas galoes de 3,6 litros: %d galao(es)\n", total_galoes);
					    printf("Misturando latas e galoes: %d lata(s) e %d galao(es)\n", latas, galoes);

			    printf("Preco em 3 situacoes:\n");
			    printf("Comprando apenas latas de 18 litros: R$ %.2f\n", custo_latas);
			    printf("Comprando apenas galoes de 3,6 litros: R$ %.2f\n", custo_galoes);
			    printf("Misturando latas e galoes: R$ %.2f\n", custo_mistura);

    return 0;
}
