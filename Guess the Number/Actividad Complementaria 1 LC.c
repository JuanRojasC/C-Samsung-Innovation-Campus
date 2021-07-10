#include <stdio.h>
#include <stdlib.h>

int numero=0, intentos=0, prueba=0, opcion=0;

int main() {
	while(opcion==0){
		
		system("cls");
		intentos=0;
		prueba=0;
		numero=0;
		puts("Hola, Bienvenido a ADIVINA EL NUMERO\nTendras que adivinar un numero entre 1 y 100 ¡Buena suerte!");
		srand(time(0));
		numero=(rand() % 100)+1;
		puts("ingrese el numero que considera puede ser");
		scanf("%d", &prueba);
		while(numero!=prueba){
			//++intentos;
			if(prueba>numero){
				puts("Oops ese no es, el numero es menor, intente nuevamente");
				scanf("%d", &prueba);
				++intentos;}
			if(prueba<numero){
				puts("Oops ese no es, el numero es mayor, intenta nuevamente");
				scanf("%d", &prueba);
				++intentos;}
		}
		printf("Muy bien, has encontrado el numero, era %d\n", numero);
		printf("Lo has logrado en %d intentos\n", intentos+1);
		puts("Volver a jugar(0)\nSalir(1)");
		scanf("%d", &opcion);
		while(opcion!=0&&opcion!=1){
			puts("Opcion invalida, para volver a jugar(0) Salir(1)\n");
			scanf("%d", &opcion);}
	
	}
	return 0;
}
