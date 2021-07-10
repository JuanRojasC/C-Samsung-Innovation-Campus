#include <stdio.h>
#include <stdlib.h>

unsigned char altura=0, i=0, j=0, cadena[10]={}, opcion=0, h=0, al=0;

int main(int argc, char *argv[]) {
	puts("Desea construir un triangulo vertical (0) u invertido (1)");
	scanf("%d", &opcion);
	while((opcion != 0)&&(opcion != 1)){
	puts("Ingrese una opcion valida** desea esea construir un triangulo vertical (0) u invertido (1)");
	scanf("%d", &opcion);}	
	if(opcion==0){	
		puts("ingrese un valor para la altura");
		scanf("%d", &altura);
		for(i=0;i<altura;i++){
			for(j=0;j<(i+1);j++){
				printf("* ");}
			printf("\n");}}
	else{
		puts("ingrese un valor para la base invertida");
		scanf("%d", &altura);
		for(i=0;i<altura;i++){
			for(j=altura;j>i;j--){
				printf("* ");}
			printf("\n");}}
	puts("Desea construir medio rombo (0) o un rombo completo (1)\n");
	scanf("%d", &opcion);
	while((opcion!=0)&&(opcion!=1)){
	puts("Ingrese una opcion valida** desea construir medio rombo (0) o un rombo completo (1)\n");
	scanf("%d", &opcion);}
	if(opcion==0){
		puts("ingrese un valor para la altura");
		scanf("%d", &altura);
		for(i=0;i<altura;i++){
			for(j=0;j<(i+1);j++){
			printf("* ");}
			printf("\n");}
		for(i=1;i<altura;i++){
			for(j=altura;j>i;j--){
				printf("* ");}
			printf("\n");}}
	if(opcion==1){
		puts("ingrese el valor de la altura");
		scanf("%d", &altura);
		for(i=0;i<altura;i++){
			for(j=(altura-1);j>i;j--){
				printf(" ");}
		printf("*\n");}}
	return 0;
}
