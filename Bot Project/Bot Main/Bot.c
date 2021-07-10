#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define TAM 100
#define tam 20
#define PAL 4

int p,r,f,c,a,l;
char palabras[][tam]={"sesion","pagar","configurar"};
char adicion[][tam]={"iniciar","pagos","sistema"};
char respuesta[tam], ayuda[tam];
char pregunta[TAM];

int main() {
	puts("Bienvenido al chat de servicio");
	puts("En que podemos ayudarle");
	gets(pregunta);
	for(p=0,r=0;p<(strlen(pregunta)+1);++p,++r){
		if(pregunta[p]!=' '&&pregunta[p]!='\0'){
			respuesta[r]=pregunta[p];}
		else{
//			printf("%s     ", respuesta);
//			printf("%d\n",strlen(respuesta));
			for(f=0;f<PAL;++f){
				for(c=0,r=0;c<tam;++c,++r){
					ayuda[r]=palabras[f][c];}
				if(strcmp(ayuda,respuesta)==0){
					if(f==0){a=1;}
					if(f==1){a=2;}
					if(f==2){a=3;}}}
		    for(l=0;l<r+1;++l){
				respuesta[l]=0;}
			r=-1;l=0;}}
	printf("%d", a);
	return 0;
}
