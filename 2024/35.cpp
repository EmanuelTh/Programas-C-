#include <stdio.h>

int main()
{
  int a,i;
  float soma=0;
  printf("digite n numeros para a serie harmonica");
  scanf("%d", &a);

  for(i=1;i<=a;i++)
{
	soma=soma+1.0/i;
}

 printf("a soma da serie e: %f", soma);
 return 0;
}