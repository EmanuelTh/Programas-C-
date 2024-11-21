#include <stdio.h>
#include <math.h>

int main (void)
{
    char c;
    int a, x;
    
    printf("digite um conjunto de dados:");    
    scanf("%d", &a);
    
    x = a;
    
    printf("\ndeseja sair? (s/n): ");
    scanf(" %c", &c); // Adicionando um espaço antes de %c para ignorar espaços em branco
    
    while(c != 's')
    {
        printf("\n\ndigite um conjunto de dados: ");
        scanf("%d", &a);
        
        if(a < x)
        {
            x = a;
        }
            
        printf("deseja sair? (s/n): ");
        scanf(" %c", &c); // Adicionando um espaço antes de %c para ignorar espaços em branco
    }
    
    printf("o menor dado digitado foi: %d\n", x); // Imprimindo o menor valor
    
    return 0;
}
