#include <stdio.h>
#include <stdlib.h>

int altura=0, h=0, i=0, c=0, w=0, r=0, z=0, x=0, game=1;

int main() {
	while(game==1){
		system("cls");altura=0, h=0, i=0, c=0, w=0, r=0, z=0, x=0,
		puts("Ingrese la altura deseada para el rombo (un numero impar entre 3 y 21)");
		scanf("%d", &altura);
		while(((altura%2)==0)||(altura<3)||(altura>21)){
			puts("Ingrese un valor de altura valido (un numero impar entre 3 y 21)");
			scanf("%d", &altura);}
		printf("\n");
		r=altura;
		x=altura/2;
		h=x+1;
		z=h;
		while(w!=h){
			for(c=-5;c<x;++c){printf(" ");}
			for(i=(altura-1);i<r;++i){
				if((r-i)==1){printf("*");}
				else{printf("**");}}
			printf("\n");
			--x;++w;++r;}
		w=1;x=z-1;r=altura/2;
		while(w!=z){		
			for(c=(z-2);c<(x+5);++c){printf(" ");}
			for(i=(altura-1);i>r;--i){
				if((i-r)==1){printf("*");}
				else{printf("**");}}
			printf("\n");++w;++x;++r;}			
		puts("\nVolver a jugar(1)\nSalir(0)");
		scanf("%d", &game);	}	
			
	return 0;
}
