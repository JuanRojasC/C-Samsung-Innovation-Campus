#include <stdio.h>
#include <stdlib.h>

int numero = 0;
int opcion = 0;

int main(int argc, char *argv[]) {
	do{
		puts("ingrese un numero entero");
		scanf("%d", &numero);
		if((numero % 2 == 0) && (numero != 0)){
			printf("el numero %d es un numero par\n", numero);}
		else{
			if(numero != 0){
				printf("el numero %d es un numero impar\n", numero);}
			else{
				printf("la operacion del numero %d es una operacion no definida\n", numero);}}
		puts("Apagar programa (0) comprobar otro numero (1)");
		scanf("%d", &opcion);
		while((opcion != 0) && (opcion != 1)){
			puts("Ingrese una opcion valida apagar(0) reiniciar (1))");
			scanf("%d", &opcion);}
	}while(opcion == 1);
	
	return 0;
}
