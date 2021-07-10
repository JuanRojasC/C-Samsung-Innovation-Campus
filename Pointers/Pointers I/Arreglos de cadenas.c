#include <stdio.h>
#include <stdlib.h>
#define TAM 8

char cad1[]="tomate", cad2[]="mango", cad3[]="aguacate", cad4[]="granadilla", cad5[]="mamoncillo", cad6[]="manzana", cad7[]="pera", cad8[]="carambolo", *frutas[TAM]={cad1,cad2,cad3,cad4,cad5,cad6,cad7,cad8}, i=0;
//char cadena[TAM]={"tomate","mango","aguacate"}; esto esta mal porque cadena[1] es "tomate" y eso son 6 caracteres, y solamente puede ir uno

int main(int argc, char *argv[]) {
	for(i=0;i<TAM;++i){
		printf("%s\n", frutas[i]);	}
	return 0;
}
