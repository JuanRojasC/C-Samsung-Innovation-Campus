#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char ctr=' ', cadena[10]={}, n=0, verify[]="";
int main(int argc, char *argv[]) {
	/*puts("ingrese un caracter");
	scanf("%c", &ctr); se puede con scanf
	ctr = getchar(); o con getchar(sin parametro)
	printf("El caracter ingresado fue %c", ctr);*/
	
	/*puts("ingrese una palabra");
	scanf("%s", &cadena);
	printf("la palabra ingresada fue: %s\n", cadena);
	for(i=0;i<10;i++){
		printf("%c", cadena[i]);}*/
		
	/*puts("ingrese una palabra (menor a 10 caracteres)");
	scanf("%s", &verify);
	int longitude = strlen(verify);
	while(longitude>10)
	{
		puts("ingrese una palabra valida(menor a 10 caracteres)");
		scanf("%s", &verify);
		longitude = strlen(verify);
	}*/
	
	int i=0;
	puts("ingrese el texto (despues presione enter-ctrl+z-enter)(max 10 caracteres)");
	while((cadena[i] = getchar()) != EOF)
	{	if(i<11){
			i++;}	
		else{
			i=0;
			puts("\ningrese un texto valido(max 10 caracteres)(despues presione enter-ctrl+z-enter)");
			scanf("%s", &cadena);}
	}
	if(i==0 || i==1){
		puts("La cadena tiene 0 caracteres");}		
	else{
		printf("La cadena tiene %d caracteres\n", i-1);}

	/*for(i=0;i<l;i++){}
	while(i>9){
		puts("ingrese una palabra valida(menor a 10 caracteres)");
		scanf("%s", &cadena);
		for(i=0;i<l;i++){}}*/
	return 0;
}
