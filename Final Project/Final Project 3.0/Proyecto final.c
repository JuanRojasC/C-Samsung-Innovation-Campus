#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#define TAM 20
// crc(caracter a buscar)---opcion(grupo de palabras elegido)---wordnumber(el numero de palabra dentro del arreglo de cadena)---palabra(copia de la palabra elegido)---discover(lista para dscubrir la palabra)
// c(recorrido palabra vs discover)---i(recorrido por palabras)---r(conteo y remplazo de palabras en discover)---grupo(asginacion del grupo de palbras escogido)---intentos(veces que se puede equivocar)---win(especifica si gana o pierde)

char fruta1[]="manzana", fruta2[]="melocoton", fruta3[]="guanabana", fruta4[]="ciruela", fruta5[]="maracuya", 	*frutas[5]={fruta1,fruta2,fruta3,fruta4,fruta5};
char ciudad1[]="beijing", ciudad2[]="ciudaddelcabo", ciudad3[]="saopaulo", ciudad4[]="atenas", ciudad5[]="newyork", *ciudades[5]={ciudad1,ciudad2,ciudad3,ciudad4,ciudad5};
char job1[]="abogado", job2[]="piloto", job3[]="electricista", job4[]="administrador", job5[]="programador", *jobs[5]={job1,job2,job3,job4,job5};
char nombre1[]="julian", nombre2[]="david", nombre3[]="laura", nombre4[]="alejandra", nombre5[]="francisco", *nombres[5]={nombre1,nombre2,nombre3,nombre4,nombre5};
char **palabras[4]={frutas,ciudades,jobs,nombres};
char crc=0, opcion=0, wordnumber=0, palabra[TAM]={}, discover[TAM]={}, c=0, i=0, r=0, grupo[TAM]="", intentos=5, win=1, a=1, z=0, opj=3, game=0, act=1;
char seleccion(char cadena, char word);
char copia();
char comparacion(char caracter);
void gotoxy(int,int);

int main() {
	while(act==1){
	while(opj!=0&&opj!=1&&opj!=2){
		gotoxy(0,0);
		puts("BIENVENIDO A ADIVINA LA PALABRA\n");
		puts("          JUGAR(1)\n      INSTRUCCIONES(2)");
		scanf("%d", &game);opj=game;gotoxy(0,4);printf(" \r");}
	while(game==2){
		system("cls");
		puts("BIENVENIDO A ADIVINA LA PALABRA\n\nInstrucciones de juego:\n1.Selecciona un grupo de palabras de tu preferencia.");
		puts("2.Una vez seleccionado el grupo, se te informara cuantas letras tiene la palabra y se te recordara la categoria.");
		puts("3.En la parte superior derecha se posicionaran los intentos disponibles que tendras, si llegan a 0 perderas.");
		puts("4.Ingresa una letra que consideres pueda estar.");
		puts("5.Recuerda que debes adivinar letra por letra (si una letra esta varias veces deberas adivinarlo).");
		puts("6.Divierte, y adivina cuantas palabras puedas.");
		puts("\n         JUGAR(1)\n         SALIR(0)");scanf(" %d", &game);gotoxy(0,11);printf(" \r");
		if(game==0){return ;}}
	while(game==1){
	system("cls");
	puts("BIENVENIDO A ADIVINA LA PALABRA\n\nSelecciona un grupo de palabras:\n\n-Frutas(F)        -Ciudades(C)\n-Profesiones(P)   -Nombres(N)");
	gotoxy(0,7); scanf(" %c", &opcion); gotoxy(0,7);printf(" \b\n");
	opcion=toupper(opcion);
	while((opcion != 'F')&&(opcion != 'C')&&(opcion != 'P')&&(opcion != 'N')){
		gotoxy(0,7);printf("\rOpcion invalida, seleccione un grupo de palabras\n");
		scanf(" %c", &opcion);
		gotoxy(0,8);printf(" \r");
		opcion=toupper(opcion);}
	srand(time(0));
	wordnumber=(rand()%5);
	seleccion(wordnumber,opcion);
	copia();
	gotoxy(0,7);printf("\rLa palabra tiene %d letras y es un(a) %s: \"%s\"\n", r, grupo, discover);
	comparacion(crc);
	system("cls");
	}}
	return 0;}

char seleccion(char cadena, char word){
	if(word=='F'){word=0;grupo[0]='f';grupo[1]='r';grupo[2]='u';grupo[3]='t';grupo[4]='a';}
	if(word=='C'){word=1;grupo[0]='c';grupo[1]='i';grupo[2]='u';grupo[3]='d';grupo[4]='a';grupo[5]='d';}
	if(word=='P'){word=2;grupo[0]='p';grupo[1]='r';grupo[2]='o';grupo[3]='f';grupo[4]='e';grupo[5]='s';grupo[6]='i';grupo[7]='o';grupo[8]='n';}
	if(word=='N'){word=3;grupo[0]='n';grupo[1]='o';grupo[2]='m';grupo[3]='b';grupo[4]='r';grupo[5]='e';}
	for(i=0;i<strlen(palabras[word][cadena]);i++){
		palabra[i]=palabras[word][cadena][i];}
}

char copia(){
	for(r=0;r<strlen(palabra);++r){discover[r]='-';}
}

char comparacion(char caracter){
	while((intentos!=0&&intentos>0)&&(win!=0)){
	a=1;
	gotoxy(0,8);puts("Ingrese una letra:");
	gotoxy(90,1);printf("Intentos disponibles: %d", intentos);
	gotoxy(0,9);printf(" \b"); 	scanf(" %c", &caracter);
	caracter=tolower(caracter);
	while(a!=0){
		for(c=0;c<r&&a!=0;++c){
			if(palabra[c]==caracter){
				if(discover[c]==caracter){a=1;z=0;}
				else{discover[c]=caracter;a=0;
					gotoxy(0,7);printf("La palabra tiene %d letras y es un(a) %s: \"%s\"\n", r, grupo, discover);
					z=1;
					gotoxy(0,10);puts("Muy bien, has adivinado una letra (Recuerda que puede estar mas veces)");sleep(2);
					gotoxy(0,10);printf("                                                                         ");}}
			else if(palabra[c]!=caracter){
				a=1;z=0;}}
		if((z==0)&&(a==1)){
			for(c=0;c<r&&a!=0;++c){
				if(discover[c]==caracter){
					--intentos;
					puts("Esa letra ya la has encontrado");
					gotoxy(90,1);printf("Intentos disponibles: %d", intentos);
					sleep(2);
					gotoxy(0,10);printf("                               \b\r");
					a=0;}
				else if(discover[c]!=caracter){a=1;}}
			if(a==1){
				--intentos;
				printf("Esa letra no esta en la palabra");a=0;
				gotoxy(90,1);printf("Intentos disponibles: %d", intentos); sleep(2);
				gotoxy(0,10);printf("                                       \r");}}
        if(strcmp(palabra,discover)==0){a=0;win=0;
			gotoxy(0,9);printf(" \r"); 
			gotoxy(0,7);printf("Bien hecho descubriste la palabra oculta                             \nFELICITACIONES GANASTE =)\n");
			puts("\n         VOLVER A JUGAR(1)\n              SALIR(0)");scanf(" %c", &opj);game=0;
			if(opj==1){opj=3;}if(opj==0){return 0;}}
        if(intentos==0){
			gotoxy(0,9);printf(" \r"); 
			gotoxy(0,7);printf("Intentalo de nuevo, la palabra oculta era \"%s\"      \n", palabra);
			gotoxy(0,8);printf("                                   ");
			puts("\n         VOLVER A JUGAR(1)\n              SALIR(0)");scanf(" %c", &opj);game=0;
			if(opj==1){opj=3;}if(opj==0){return 0;}}
    	}}
}

void gotoxy(int x, int y){
	HANDLE Manipulador;
	COORD Coordenadas;
	Manipulador= GetStdHandle(STD_OUTPUT_HANDLE);
	Coordenadas.X=x;
	Coordenadas.Y=y;
	SetConsoleCursorPosition(Manipulador,Coordenadas);
}
