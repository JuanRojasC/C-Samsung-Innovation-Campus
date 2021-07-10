#include <stdio.h>
#include <stdlib.h>

char i = 0;
int j = 100;

int main(int argc, char *argv[]) {
	for(i=2,j=101; ((i!=j)&&(i<j)); i++, j--){
		printf("i = %d  j = %d\n", i, j);}
	printf("El valor final de i es %d y el valor final de j es %d\n", i, j);
	return 0;
}
