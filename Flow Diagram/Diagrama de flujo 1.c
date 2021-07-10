#include <stdio.h>
#include <stdlib.h>
#define CAPACIDAD 10

int i=0, valor_buscado, opcion, o, z, c, x, s, d, tamArreglo=10;
int arreglo[CAPACIDAD]={0,1,2,3,4,5,6,7,8,9};
int arreglodesorganizado[CAPACIDAD]={5,6,8,1,2,9,0,7,3,4};
int matriz[CAPACIDAD][CAPACIDAD]={{5,6,8,6,5,9,3,2,2,7},{1,5,6,3,2,8,9,5,6,3}};
int busquedad(int array[CAPACIDAD], int tamArreglo, int valor);
int busquedadm(int m[CAPACIDAD][CAPACIDAD],/* int size, */int valor);
int correr(int m[CAPACIDAD], int p);
int insertar(int m[CAPACIDAD], int a);

int main() {
	do{
		if(o==0){
			puts("BUSCA EL NUMERO\n(1)Buscar un numero en arreglo\n(2)Buscar un numero en matriz\n(3)Eliminar y correr");
			scanf("%d", &opcion);o=1;}
		else{
			puts("Ingrese un opcion valida");
			scanf("%d", &opcion);}
	}while(opcion!=1&&opcion!=2&&opcion!=3);
	
	switch(opcion){
		case 0:
			return 0;
		case 1:
			puts("ingrese el numero a buscar");
			scanf("%d", &valor_buscado);
			busquedad(arreglo,tamArreglo,valor_buscado);
			puts("Desea buscar en un matriz (2)");
			scanf("%d", &opcion);
		case 2:
			puts("ingrese el numero a buscar");
			scanf("%d", &valor_buscado);
			busquedadm(matriz,valor_buscado);
			break;
		case 3:
			puts("Inserte el numero a eliminar");
			for(i=0;i<CAPACIDAD;++i){
				printf("%d", arreglo[i]);}
			printf("\n");
			scanf(" %d", &c);
			correr(arreglo, c);
			for(i=0;i<(CAPACIDAD-1);++i){
				printf("%d", arreglo[i]);}
			break;
		case 4:
			puts("Inserte el numero a insertar y la poscion");
			for(i=0;i<CAPACIDAD;++i){
				printf("%d", arreglo[i]);}
			printf("\n");
			scanf(" %d", &c);
			correr(arreglo, c);
			for(i=0;i<(CAPACIDAD-1);++i){
				printf("%d", arreglo[i]);}
			break;		
}}

int busquedad(int array[CAPACIDAD], int tamArreglo, int valor){
	for(i=0;i<tamArreglo;++i){
		if(arreglo[i]==valor_buscado){printf("Se encontro el elemento en la posicion %d\n",i);return 0;}}
	puts("El valor buscado no se halla en el arreglo");
}

int busquedadm(int m[CAPACIDAD][CAPACIDAD], int valor){
	for(i=0;i<CAPACIDAD;++i){
		for(o=0;o<CAPACIDAD;++o){
			if(m[i][o]==valor){
				printf("Ese numero se encuentra en la fila %d columna %d\n", i, o);++z;}}}
	if(z==0){puts("Ese numero no se encuentra en la matriz");}
//	return 0;
}

int correr(int m[CAPACIDAD], int p){
	for(i=0;i<CAPACIDAD;++i){
		if(m[i]==p){
			x=i;i=CAPACIDAD;}}
	for(x=x;x<CAPACIDAD;++x){
		m[x]=m[x+1];}
}

int insertar(int m[CAPACIDAD], int a){
		for(i=0;i<CAPACIDAD;++i){
			if(i==a){
				x=i;s=m[i];m[i]=a; i=CAPACIDAD;}}
		for(x=x+2;x<CAPACIDAD+1;++x){
			m[x]=m[x-1];}
		m[x+1]=s;	
}
	
	
