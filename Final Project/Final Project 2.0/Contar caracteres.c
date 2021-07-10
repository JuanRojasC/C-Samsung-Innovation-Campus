#include <stdio.h>
#include <stdlib.h>
#define TAM 20
// crc(caracter a buscar)---opcion(grupo de palabras elegido)---wordnumber(el numero de palabra dentro del arreglo de cadena)---palabra(copia de la palabra elegido)---discover(lista para dscubrir la palabra)
// c(recorrido palabra vs discover)---i(recorrido por palabras)---r(conteo y remplazo de palabras en discover)---grupo(asginacion del grupo de palbras escogido)---intentos(veces que se puede equivocar)---win(especifica si gana o pierde)

char fruta1[]="manzana", fruta2[]="melocoton", fruta3[]="guanabana", fruta4[]="ciruela", fruta5[]="maracuya", *frutas[5]={fruta1,fruta2,fruta3,fruta4,fruta5};
char ciudad1[]="beijing", ciudad2[]="ciudad del cabo", ciudad3[]="sao Paulo", ciudad4[]="atenas", ciudad5[]="new york", *ciudades[5]={ciudad1,ciudad2,ciudad3,ciudad4,ciudad5};
char job1[]="abogado", job2[]="piloto", job3[]="electricista", job4[]="administrador", job5[]="programador", *jobs[5]={job1,job2,job3,job4,job5};
char nombre1[]="julian", nombre2[]="david", nombre3[]="laura", nombre4[]="alejandra", nombre5[]="francisco", *nombres[5]={nombre1,nombre2,nombre3,nombre4,nombre5};
char **palabras[4]={frutas,ciudades,jobs,nombres};
char crc=0, opcion=0, wordnumber=0, palabra[TAM]={}, discover[TAM]={}, c=0, i=0, r=0, grupo[]="", intentos=5, win=1, a=1, z=0;
char seleccion(char cadena, char word);
char copia(char cadena);
char comparacion(char cadena, char caracter);

int main() {
	puts("BIENVENIDO A ADIVINA LA PALABRA\nSelecciona un grupo de palabras\nFrutas(F)        Ciudades(C)\nProfesiones(P)   Nombres(N)");
	scanf("%c", &opcion);
	opcion=toupper(opcion);
	while((opcion != 'F')&&(opcion != 'C')&&(opcion != 'P')&&(opcion != 'N')){
		puts("Opcion invalida, seleccione un grupo de palabras");
		scanf(" %c", &opcion);
		opcion=toupper(opcion);}
	srand(time(0));
	wordnumber=(rand()%5);
	seleccion(wordnumber,opcion);
	copia(discover);
	printf("La palabra tiene %d letras y es un(a) %s\n", r, grupo);
	printf("%s\n", discover);
//	printf("%s\n", discover);
//	puts("ingrese una letra");
//	scanf(" %c", &crc);
//	crc=tolower(crc);
//	printf("%s\nIntentos: %d", discover,intentos);
//	crc=tolower(crc);
	comparacion(palabra,crc);
	return 0;
}

char seleccion(char cadena, char word){
	if(word=='F'){word=0;grupo[0]='f';grupo[1]='r';grupo[2]='u';grupo[3]='t';grupo[4]='a';}
	if(word=='C'){word=1;grupo[0]='c';grupo[1]='i';grupo[2]='u';grupo[3]='d';grupo[4]='a';grupo[5]='d';}
	if(word=='P'){word=2;grupo[0]='p';grupo[1]='r';grupo[2]='o';grupo[3]='f';grupo[4]='e';grupo[5]='s';grupo[6]='i';grupo[7]='o';grupo[8]='n';}
	if(word=='N'){word=3;grupo[0]='n';grupo[1]='o';grupo[2]='m';grupo[3]='b';grupo[4]='r';grupo[5]='e';}
	for(i=0;i<strlen(palabras[word][cadena]);i++){
		palabra[i]=palabras[word][cadena][i];}
	//printf("%s\n", palabras[word][cadena]);
	//printf("%s", palabra);
}

char copia(char cadena){
	for(r=0;r<strlen(palabra);++r){discover[r]='-';}
}

char comparacion(char cadena, char caracter){
	while((intentos!=0&&intentos>0)&&(win!=0)){
	a=1;
	puts("Ingrese una letra:");
	scanf(" %c", &caracter);
	caracter=tolower(caracter);
	while(a!=0){
		for(c=0;c<r&&a!=0;++c){
			if(palabra[c]==caracter){
				if(discover[c]==caracter){a=1;z=0;}
				else{discover[c]=caracter;a=0;printf("%s\n", discover);z=1;}}
			else if(palabra[c]!=caracter){
				a=1;z=0;}}
		if((z==0)&&(a==1)){
			for(c=0;c<r&&a!=0;++r){
				if(discover[c]==caracter){
					puts("Esa letra ya la has encontrado");
					a=0;}
				else if(discover[c]!=caracter){a=1;}}
			if(a==1){a=0;}}
	}
	}
}
