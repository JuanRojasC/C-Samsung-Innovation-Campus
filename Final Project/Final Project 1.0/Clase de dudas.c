#include <stdio.h>
#include <stdlib.h>
#define TAM 20

char fruta1[]="manzana", fruta2[]="melocoton", fruta3[]="guanabana", fruta4[]="ciruela", fruta5[]="maracuya", *frutas[5]={fruta1,fruta2,fruta3,fruta4,fruta5};
char ciudad1[]="beijing", ciudad2[]="ciudad del cabo", ciudad3[]="sao Paulo", ciudad4[]="atenas", ciudad5[]="new york", *ciudades[5]={ciudad1,ciudad2,ciudad3,ciudad4,ciudad5};
char **palabras[2]={frutas,ciudades};
char crc='0', opcion=0, wordnumber=0, palabra[TAM]={}, c=0, i=0, j=0, k=0;
char seleccion(char cadena, char word);




int main() {
	puts("BIENVENIDO A ADIVINA LA PALABRA\nSelecciona un grupo de palabras\nFrutas(F)        Ciudades(C)\n");
/*	scanf("%c", &opcion);
	srand(time(0));
	wordnumber=(rand()%5);
	seleccion(wordnumber,opcion);*/
			for(k=0;k<strlen(palabras[0][1]);++k){
			//	printf("%c\n", palabras[i][j][k]);
			
			palabra[k]=palabras[0][1][k];}
			printf("%s", palabra);
			/*for(k=0;k<strlen(palabra);++k){
				printf("%c", palabra[k]);}*/
	return 0;
}

/*char obtener(char cadena){
	for(i=0;i<strlen(frutas[cadena]);++i){
		string[i]=frutas[cadena][i];}
	}*/
	
/*char seleccion(char cadena, char word){
	if(word=='F'){word=0;}
	if(word=='C'){word=1;}
	for(i=0;i<strlen(palabras[word][cadena]);i++){
		palabra[i]=palabras[word][cadena][i];}
	printf("%s\n", palabras[word][cadena]);
	printf("%s", palabra);}
	*/
