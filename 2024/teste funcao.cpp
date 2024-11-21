#include <stdio.h>
int media(int x,int y){
	return (x+y)/2;
}
int main (){
	int m, o, p;
	o=4;
	p=4;
	m=media (o,p);
	printf("%d", m);
	return 0;
}
