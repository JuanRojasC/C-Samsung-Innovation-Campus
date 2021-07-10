#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int entero = 64;
char caracter = '@';

int main(int argc, char *argv[]) {
 	printf("El entero es %d\n", entero);
 	printf("El caracter es %c\n", caracter);
	printf("El entero 64 como caracter es %c\n", entero);
	printf("El caracter @ como entero es %d\n", caracter);
	puts("Ingrese un numero entre 0 y 250");
	scanf("%d", &entero);
	caracter = entero;
	printf("%d %c", entero, caracter);
	puts("Ingrese dos numeros entre 0 y 250");
	scanf("%d %c", &entero, &caracter);
	printf("%c", caracter);
return 0;
}   
