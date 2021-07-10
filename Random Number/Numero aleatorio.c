#include <stdio.h>
#include <stdlib.h>
#define TAM 20

char fruta1[]="manzana", fruta2[]="melocoton", fruta3[]="guanabana", fruta4[]="ciruela", fruta5[]="maracuya", *frutas[5]={fruta1,fruta2,fruta3,fruta4,fruta5};
char ciudad1[]="beijing", ciudad2[]="ciudad del cabo", ciudad3[]="sao Paulo", ciudad4[]="atenas", ciudad5[]="new York", *ciudades[5]={ciudad1,ciudad2,ciudad3,ciudad4,ciudad5};
char job1[]="abogado", job2[]="piloto", job3[]="electricista", job4[]="administrador", job5[]="programador", *jobs[5]={job1,job2,job3,job4,job5};
char nombre1[]="julian", nombre2[]="david", nombre3[]="laura", nombre4[]="alejandra", nombre5[]="francisco", *nombres[5]={nombre1,nombre2,nombre3,nombre4,nombre5};
char c=0, i =0, carac=0, wordnumber=0, string[TAM]={}, (**palabras[4])[5]={frutas,ciudades,jobs,nombres};
char obtener(char cadena);


int main() {
	puts("ingrese un caracter para buscar");
	scanf("%c", &c);
	srand(time(0));
	wordnumber=(rand()%5);
	printf("%d\n", wordnumber);
	obtener(wordnumber);
	//if(seleccion(string,c)){
	//	printf("el caracter %c esta %d veces en %s", c,carac, fruta1);}
	return 0;
}

char obtener(char cadena){
	for(i=0;i<strlen(frutas[cadena]);++i){
		string[i]=frutas[cadena][i];}
	printf("%d", i);
	}
	



//FUNCIONAL
/*char fruta1[]="manzana", fruta2[]="melocoton", fruta3[]="guanabana", fruta4[]="ciruela", fruta5[]="maracuya", *frutas[5]={fruta1,fruta2,fruta3,fruta4,fruta5};
char c=0, i =0, carac=0, wordnumber=0, string[TAM]={};
char obtener(char cadena);
//char seleccion(char cadena, char caracter);

int main() {
	puts("ingrese un caracter para buscar");
	scanf("%c", &c);
	srand(time(0));
	wordnumber=(rand()%5);
	printf("%d\n", wordnumber);
	obtener(wordnumber);
	//if(seleccion(string,c)){
	//	printf("el caracter %c esta %d veces en %s", c,carac, fruta1);}
	return 0;
}

/*char seleccion(char cadena, char caracter){
	for(i=0;i<strlen(cadena);++i){
		if(c == cadena[i]){
			++carac;}
	}
	
}

char obtener(char cadena){
	for(i=0;i<strlen(frutas[cadena]);++i){
		string[i]=frutas[cadena][i];}
	}
*/
