#include <stdio.h>
 int main() {
 int numFuncionarios = 10;
 char nomes[numFuncionarios][100];
 double salarios[numFuncionarios];
 int i;
 printf("Digite o nome e o salário de %d funcionários:\n", numFuncionarios);
 for (i = 0; i < numFuncionarios; i++) {
 printf("Funcionário %d:\n", i + 1);
 printf("Nome: ");
 scanf("%s", nomes[i]);
 printf("Salário: ");
 scanf("%lf", &salarios[i]);
 }
 printf("\nFuncionários com salário de R$ 500,00 ou mais:\n");
 for (i = 0; i < numFuncionarios; i++) {
 if (salarios[i] >= 500.00) {
 printf("Nome: %s, Salário: R$ %.2f\n", nomes[i], salarios[i]);
 }
 }
 printf("\nFuncionários com aumento de 20%%:\n");
 for (i = 0; i < numFuncionarios; i++) {
 if (salarios[i] < 200.00) {
 salarios[i] *= 1.20;
 printf("Nome: %s, Novo Salário: R$ %.2f\n", nomes[i], salarios[i]);
 }
 }
 return 0;
 }