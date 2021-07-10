#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define TAM 100
#define tam 20
#define PAL 4
#define ADC 8

int p,r,f,c,a,l,fa,ca;
int registrarse,sesion,pagar,configurar;
char registro[][tam]={"registrarse","registrarme","crear","abrir"},cuenta[][tam]={"sesion","opciones","configurar","modificar","ajustes","ajustar","eliminar"};
char servicios[][tam]={"pagar","pagos","servicios","tarjetas","tarjeta","ahorros","ahorro","intereses","interes"};
char palabras[][tam]={"registrarse","sesion","pagar","configurar"};
char adicion[][tam]={"iniciar","cerrar","salir","pagos","recibos","sistema","opciones","movil","cuenta"};
char respuesta[tam], ayuda[tam], adc[tam];
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
					if(f==2){a=3;}
					if(f==3){a=4;}}}
			for(r=0;r<tam;++r){
				ayuda[r]=0;}
			for(fa=0;fa<ADC;++fa){
				for(ca=0,r=0;ca<tam;++ca,++r){
					adc[r]=adicion[fa][ca];}
				if(strcmp(adc,respuesta)==0){
					if(a==1){
						if(fa==5){a+=10104;registrarse=a;}
						if(fa==6){a+=10105;registrarse=a;}
						if(fa==7){a+=10106;registrarse=a;}}}}
		    for(l=0;l<r+1;++l){
				respuesta[l]=0;}
			for(l=0;l<r+1;++l){
				adc[l]=0;}
			r=-1;l=0;}}
	printf("%d\n", a);
	printf("%d", registrarse);
	return 0;
}
