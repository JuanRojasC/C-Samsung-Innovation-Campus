#include <stdio.h>
#include <stdlib.h>

FILE *file1, *file2;
char buffer[]="hola curso ", vacio = ' ', dato = 0;


int main() {
	puts("El programa crea o abre un archivo y aniade en el\n");
	file1 = fopen("Archivo_de_prueba.txt", "w");
	if(file1 == NULL){
		printf("Error en la apertura del archivo");
		return 0;}
	fprintf(file1,"%s", buffer);
	fprintf(file1, "%s", "Aca va la cadena que quiere guardar");
	fprintf(file1, "%d", 123456);
	fprintf(file1, "%c", vacio);
	printf("Por favor ingrese un nombre para el archiv (despues presione enter-ctrl+z-enter)\n");
	while((dato = getchar()) != EOF){
		fputc(dato, file1);
	}
	fclose(file1);
	file1 = fopen("Archivo_de_prueba.txt", "r");
	file2 = fopen("Lectura.txt", "r");
	if((file1 == NULL) || (file2==NULL)){
		printf("Error en la apertura del archivo");
		return 0;}
	printf("El siguiente archivo contiene:\n");
	while((dato = fgetc(file1)) != EOF){
		if(dato == '\n'){
			printf("\n");}
		else{
			putchar(dato);} 
	}
	while((dato = fgetc(file2)) != EOF){
	if(dato == '\n'){
		printf("\n");}
	else{
		putchar(dato);} 
	}
	fclose(file1);
	fclose(file2);
	return 0;
}
