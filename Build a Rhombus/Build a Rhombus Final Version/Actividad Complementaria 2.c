#include <stdio.h>
#include <stdlib.h>

unsigned char altura=0, i=0, j=0, a=0, h=0;

int main(int argc, char *argv[]) {
	puts("Ingrese la longitud de uno de los lados, un impar entre 3 y 21");
	scanf("%d", &altura);
	while(((altura>21)||(altura<3))||(altura%2==0)){
		puts("Ingrese un valor valido de la longitud de uno de los lados, un impar entre 3 y 21");
		scanf("%d", &altura);}
	for(i=(altura-1);i<altura;i--){
		for(j=0;j<i;j++){
			printf(" ");}
		for(h=altura,a=(j);h>a;a++){
			printf("* ");}
		printf("\n");}
	for(i=0;i<altura;i++){
		for(j=0;j<(i+1);j++){
			printf(" ");}
		for(h=(altura),a=(j);h>a;a++){
			printf("* ");}
		printf("\n");}
	return 0;
}

  
