#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#define AZUL_T     "\x1b[34m"
#define ROJO_T     "\x1b[31m"
#define NEGRO_T        "\x1b[30m"
#define VERDE_T        "\x1b[32m"
#define AMARILLO_T "\x1b[33m"
#define MAGENTA_T  "\x1b[35m"
#define CYAN_T     "\x1b[36m"
#define TAM 20

// crc(caracter a buscar)---opcion(grupo de palabras elegido)---wordnumber(el numero de palabra dentro del arreglo de cadena)---palabra(copia de la palabra elegido)---discover(lista para dscubrir la palabra)
// c(recorrido palabra vs discover)---i(recorrido por palabras)---r(conteo y remplazo de palabras en discover)---grupo(asginacion del grupo de palbras escogido)---intentos(veces que se puede equivocar)---win(especifica si gana o pierde)

char fruta1[]="manzana", fruta2[]="melocoton", fruta3[]="guanabana", fruta4[]="ciruela", fruta5[]="maracuya", 	*frutas[5]={fruta1,fruta2,fruta3,fruta4,fruta5};
char ciudad1[]="beijing", ciudad2[]="elcairo", ciudad3[]="saopaulo", ciudad4[]="atenas", ciudad5[]="newyork", *ciudades[5]={ciudad1,ciudad2,ciudad3,ciudad4,ciudad5};
char job1[]="abogado", job2[]="piloto", job3[]="ingeniero", job4[]="farmaceuta", job5[]="programador", *jobs[5]={job1,job2,job3,job4,job5};
char nombre1[]="julian", nombre2[]="david", nombre3[]="laura", nombre4[]="alejandra", nombre5[]="francisco", *nombres[5]={nombre1,nombre2,nombre3,nombre4,nombre5};
char **palabras[4]={frutas,ciudades,jobs,nombres};
char crc=0, opcion=0, wordnumber=0, palabra[TAM]={}, discover[TAM]={}, c=0, i=0, r=0, grupo[TAM]="", intentos=5, win=1, a=1, z=0, opj=3, game=0, act=1, historial[5]={}, h=0, hr=0, hra=0, hh=0;
char seleccion(char cadena, char word);
char copia();
char comparacion(char caracter);
void gotoxy(int,int);

int main() {
	while(act==1){
		system("cls");
		system("color 73");
		while(opj!=1&&opj!=2){
			game=0;
			gotoxy(15,6);
//		gotoxy(21,6);puts(VERDE_T"A");gotoxy(22,6);puts(MAGENTA_T"D");gotoxy(23,6);puts(AZUL_T"I");gotoxy(24,6);puts(ROJO_T"V");gotoxy(25,6);puts(AMARILLO_T"I");gotoxy(26,6);puts(CYAN_T"N");gotoxy(27,6);puts(AMARILLO_T"A");gotoxy(29,6);puts(MAGENTA_T"L");
//		gtoxy(30,6);puts(ROJO_T"A");gotoxy(32,6);puts(AZUL_T"P");gotoxy(33,6);puts(AMARILLO_T"A");gotoxy(34,6);puts(VERDE_T"L");gotoxy(35,6);puts(CYAN_T"A");gotoxy(36,6);puts(ROJO_T"B");gotoxy(37,6);puts(VERDE_T"R");gotoxy(38,6);puts(MAGENTA_T"A");
			puts(AZUL_T"BIENVENIDO A ");
			gotoxy(28,6);puts(VERDE_T"A");gotoxy(29,6);puts(MAGENTA_T"D");gotoxy(30,6);puts(AZUL_T"I");gotoxy(31,6);puts(ROJO_T"V");gotoxy(32,6);puts(AMARILLO_T"I");gotoxy(33,6);puts(CYAN_T"N");gotoxy(34,6);puts(AMARILLO_T"A");gotoxy(36,6);puts(MAGENTA_T"L");
			gotoxy(37,6);puts(ROJO_T"A");gotoxy(39,6);puts(AZUL_T"P");gotoxy(40,6);puts(AMARILLO_T"A");gotoxy(41,6);puts(VERDE_T"L");gotoxy(42,6);puts(CYAN_T"A");gotoxy(43,6);puts(ROJO_T"B");gotoxy(44,6);puts(VERDE_T"R");gotoxy(45,6);puts(MAGENTA_T"A");
			gotoxy(26,8);puts(NEGRO_T"JUGAR(1)\n");
			gotoxy(22,9);puts(NEGRO_T"INSTRUCCIONES(2)");
//		gotoxy(24,8);puts(AZUL_T"Programmed by");gotoxy(25,10);puts(NEGRO_T"Juan Rojas");gotoxy(24,11);puts(NEGRO_T"Julian Rojas");
			scanf("%d", &game);opj=game;gotoxy(0,10);printf(" \r");}
		
		while(game==2){
			system("color 73");
			system("cls");
			puts(AZUL_T"BIENVENIDO A ADIVINA LA PALABRA\n");
			puts(AMARILLO_T"Instrucciones de juego:");
			puts(NEGRO_T"1.Selecciona un grupo de palabras de tu preferencia.");
			puts("2.Una vez seleccionado, se te informara cuantas letras");puts("  tiene la palabra y se te recordara la categoria.");
			puts("3.En la parte superior derecha se posicionaran los intentos");puts("  disponibles.");
			puts("4.Tambien alli se posicionara el historial de letras usadas.");
			puts("5.Ingresa una letra que consideres pueda estar.");
			puts("6.Recuerda que debes adivinar letra por letra,");puts("  si una letra esta varias veces deberas adivinarlo.");
			puts("7.Divierte, y adivina cuantas palabras puedas.");
			gotoxy(26,14);puts("JUGAR(1)\n");gotoxy(26,15);puts("SALIR(0)");scanf(" %d", &game);gotoxy(0,16);printf(" \r");
			if(game==0){return ;}}
		while(game==1){
			system("cls");
			system("color 73");
			gotoxy(21,2);puts(VERDE_T"A");gotoxy(22,2);puts(MAGENTA_T"D");gotoxy(23,2);puts(AZUL_T"I");gotoxy(24,2);puts(ROJO_T"V");gotoxy(25,2);puts(AMARILLO_T"I");gotoxy(26,2);puts(CYAN_T"N");gotoxy(27,2);puts(AMARILLO_T"A");gotoxy(29,2);puts(MAGENTA_T"L");
			gotoxy(30,2);puts(ROJO_T"A");gotoxy(32,2);puts(AZUL_T"P");gotoxy(33,2);puts(AMARILLO_T"A");gotoxy(34,2);puts(VERDE_T"L");gotoxy(35,2);puts(CYAN_T"A");gotoxy(36,2);puts(ROJO_T"B");gotoxy(37,2);puts(VERDE_T"R");gotoxy(38,2);puts(MAGENTA_T"A");
			gotoxy(15,5);puts(NEGRO_T"Selecciona un grupo de palabras:");
			gotoxy(15,7);puts(MAGENTA_T"-Frutas(F)");gotoxy(38,7);puts(ROJO_T"-Ciudades(C)");gotoxy(15,8);puts(AMARILLO_T"-Profesiones(P)");gotoxy(38,8);puts(VERDE_T"-Nombres(N)");
			scanf(" %c", &opcion); gotoxy(0,8);printf(" \b\n");
			opcion=toupper(opcion);
			while((opcion != 'F')&&(opcion != 'C')&&(opcion != 'P')&&(opcion != 'N')){
				gotoxy(0,10);printf(NEGRO_T"\rOpcion invalida, seleccione un grupo de palabras\n");
				scanf(" %c", &opcion);
				gotoxy(0,11);printf(" \r");
				opcion=toupper(opcion);}
			srand(time(0));
			wordnumber=(rand()%5);
			wordnumber=2;
			seleccion(wordnumber,opcion);
			copia();
			system("cls");system("color 73");
			gotoxy(21,2);puts(VERDE_T"A");gotoxy(22,2);puts(MAGENTA_T"D");gotoxy(23,2);puts(AZUL_T"I");gotoxy(24,2);puts(ROJO_T"V");gotoxy(25,2);puts(AMARILLO_T"I");gotoxy(26,2);puts(CYAN_T"N");gotoxy(27,2);puts(AMARILLO_T"A");gotoxy(29,2);puts(MAGENTA_T"L");
			gotoxy(30,2);puts(ROJO_T"A");gotoxy(32,2);puts(AZUL_T"P");gotoxy(33,2);puts(AMARILLO_T"A");gotoxy(34,2);puts(VERDE_T"L");gotoxy(35,2);puts(CYAN_T"A");gotoxy(36,2);puts(ROJO_T"B");gotoxy(37,2);puts(VERDE_T"R");gotoxy(38,2);puts(MAGENTA_T"A");
			gotoxy(0,4);printf(NEGRO_T"\rLa palabra tiene %d letras y es un(a) %s:\"%s\"\n", r, grupo, discover);
			comparacion(crc);
			puts(NEGRO_T"\n         VOLVER A JUGAR(1)\n              SALIR(0)");scanf(" %c", &opj);
			if(opj=='1'){opj=3;game=0;crc=0;wordnumber=0;opcion=0;intentos=5;h=0;win=1;r=0;}if(opj=='0'){gotoxy(0,12);printf(" \r");return 0;}}
	}}

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
		hra=0;
		gotoxy(0,6);puts(AZUL_T"Ingrese una letra:");
		gotoxy(37,14);printf(AMARILLO_T"Intentos disponibles:");gotoxy(59,14);printf(NEGRO_T"%d",intentos);
		gotoxy(37,15);printf(AMARILLO_T"Historial:");gotoxy(48,15);printf(NEGRO_T"%c-%c-%c-%c-%c",historial[0],historial[1],historial[2],historial[3],historial[4]);
		gotoxy(0,7);printf("         \r"); 	scanf(" %c", &caracter);
		caracter=tolower(caracter);
		hr=strlen(historial);
		gotoxy(37,15);printf(AMARILLO_T"Historial:");gotoxy(48,15);printf(NEGRO_T"%c-%c-%c-%c-%c",historial[0],historial[1],historial[2],historial[3],historial[4]);
		for(h=0;h<(hr+1)&&hra!=1;++h){if(historial[h]==0){historial[h]=caracter;gotoxy(37,15);printf(VERDE_T"Historial:");gotoxy(48,15);printf(NEGRO_T"%c-%c-%c-%c-%c",historial[0],historial[1],historial[2],historial[3],historial[4]);hra=1;}}h=0;sleep(1);
		for(hh=hh;h<(hr+1)&&hra!=1;++hh){if((historial[hh]!=0)&&(historial[4]!=0)){historial[hh]=caracter;gotoxy(37,15);printf(VERDE_T"Historial:");gotoxy(48,15);printf(NEGRO_T"%c-%c-%c-%c-%c",historial[0],historial[1],historial[2],historial[3],historial[4]);hra=1;}}sleep(1);
		gotoxy(37,15);printf(AMARILLO_T"Historial:");gotoxy(48,15);printf(NEGRO_T"%c-%c-%c-%c-%c",historial[0],historial[1],historial[2],historial[3],historial[4]);
		if(hh==5){hh=0;}
		while(a!=0){
			for(c=0;c<r&&a!=0;++c){
				if(palabra[c]==caracter){
					if(discover[c]==caracter){a=1;z=0;}
					else{discover[c]=caracter;a=0;
						gotoxy(0,4);printf(NEGRO_T"La palabra tiene %d letras y es un(a) %s:\"%s\"\n", r, grupo, discover);
						z=1;
						gotoxy(0,9);puts(AZUL_T"Muy bien, has adivinado una letra (Puede estar mas veces)");sleep(2);
						gotoxy(0,9);printf("                                                                         ");}}
				else if(palabra[c]!=caracter){
						a=1;z=0;}}
			if((z==0)&&(a==1)){
				for(c=0;c<r&&a!=0;++c){
					if(discover[c]==caracter){
						--intentos;
						gotoxy(0,9);puts(ROJO_T"Esa letra ya la has encontrado");
						gotoxy(37,14);printf(ROJO_T"Intentos disponibles:");gotoxy(59,14);printf(NEGRO_T"%d",intentos);
						sleep(2);
						gotoxy(0,9);printf("                               \b\r");
						a=0;}
					else if(discover[c]!=caracter){a=1;}}
				if(a==1){
					--intentos;
					gotoxy(0,9);printf(ROJO_T"Esa letra no esta en la palabra");a=0;
					gotoxy(37,14);printf(ROJO_T"Intentos disponibles:");gotoxy(59,14);printf(NEGRO_T"%d",intentos); sleep(2);
					gotoxy(0,9);printf("                                       \r");}}
	        if(strcmp(palabra,discover)==0){a=0;win=0;
				gotoxy(0,9);printf(" \r"); 
				gotoxy(0,6);printf(AZUL_T"\rBien hecho descubriste la palabra oculta                             \nFELICITACIONES GANASTE =)\n");fflush(stdout);}
			//	puts("\n         VOLVER A JUGAR(1)\n              SALIR(0)");scanf(" %c", &opj);}
			//	if(opj=='1'){opj=3;game=0;}if(opj=='0'){return 0;}}
	        if(intentos==0){
				gotoxy(0,7);printf(" \r"); 
				gotoxy(0,6);printf(ROJO_T"\rIntentalo de nuevo, la palabra oculta era");gotoxy(42,6);printf(MAGENTA_T"\"%s\"         ", palabra);
				gotoxy(0,8);printf("                                   ");fflush(stdout);}
		//		puts("\n         VOLVER A JUGAR(1)\n              SALIR(0)");scanf(" %c", &opj);}
		//		if(opj=='1'){opj=3;game=0;}if(opj=='0'){return 0;}}
			if(win==0||intentos==0){for(h=0;h<5;++h){historial[h]=0;}
									for(h=0;h<TAM;++h){palabra[h]=0;}
									for(h=0;h<TAM;++h){discover[h]=0;}
									for(h=0;h<TAM;++h){grupo[h]=0;}}
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
