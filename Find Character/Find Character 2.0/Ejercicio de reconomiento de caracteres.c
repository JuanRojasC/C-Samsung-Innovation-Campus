#include <stdio.h>
#include <stdlib.h>
#define SIZE 1000


char l=0, c=0, cadena[SIZE]={}, i=0;
int n=0;


int main() {
	puts("ingrese el caracter a buscar");
	scanf("%c",&c);
	puts("ingrese el texto(finalice con enter-ctrl+z-enter)");
	while((cadena[l] = getchar()) != EOF){
		++i;
		if(cadena[l]==c){
			++n;}
	
	}
	printf("El texto tiene %d veces el caracter %c\n", n, c);
	printf("El texto tiene %d caracteres", i );
	return 0;
}

