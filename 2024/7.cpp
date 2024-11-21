#include <stdio.h>
#include <math.h>

int main (void)
{ 
float area, raio, pi;
	printf ("vamos calcular a area deste circulo, qual seu raio");
	scanf ("%f",&raio);
		pi= 3.14;
		area= (pi*(raio*raio));

			printf("seu circulo tem uma area de:%f", area);
return 0;
}