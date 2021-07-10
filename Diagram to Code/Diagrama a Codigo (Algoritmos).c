#include <stdio.h>
#define CAPACIDAD 100
#define FILAS 2
#define COLUMNAS 2
#define TAM 12

// declaración protitipos de función
int busquedaArreglo(int arreglo[CAPACIDAD], int tamArreglo, int elemento_buscado);
void busquedaMatrix(int matriz[FILAS][COLUMNAS], int elemento_buscado); // para matrices los que quieran
void imprimirArreglo(int arreglo[CAPACIDAD], int tamArreglo);
int matriz[TAM][TAM]={{0,1,2,3,4,5,6,7,8,9}, {0,1,2,3,4,5,6,7,8,9}};

// función principal
int main(){
int arregloOrganizado[CAPACIDAD] = {0,1,2,3,4,5,6,7,8,9};
int arregloDesorganizado[CAPACIDAD] = {0,1,2,3,4,5,6,7,8,9};
int tamActual=10;
int valor;
int respuesta;
int opcion;
printf("arreglo organizado: ");
imprimirArreglo(arregloOrganizado,tamActual);
printf("ingrese una opcion:\n");
printf("1. buscar en un arreglo\n");
printf("2. buscar en una matriz\n");
scanf("%d", &opcion);

// menu para seleccionar funciones
switch(opcion){
case 1: // buscar en un arreglo
printf("ingrese el valor a buscar\n");
scanf("%d", &valor);
respuesta = busquedaArreglo(arregloOrganizado,tamActual, valor);
// en respuesta puedo tener un -1 si no encontro nada y si encontro algo el valor del indice
if(respuesta==-1){
printf("El valor no se encuenta en el arreglo");
}else{
printf("El valor esta en la posicion %d",respuesta);
}

break;
case 2:
printf("ingrese el valor a buscar\n");
scanf("%d", &valor);
busquedaMatrix(matriz,valor);
break;
default:
printf("opcion no valida");
}
}

// definición de funciones

/*
retorna -1 si no encontro el elemento, si encontro el elemento
retorna el indice del arreglo donde se encuentra
*/
int busquedaArreglo(int arreglo[CAPACIDAD], int tamArreglo, int elemento_buscado){
int i;
for(i=0;i<tamArreglo;i++){
if(elemento_buscado==arreglo[i]){
return i;// retorno indice
}
}
return -1;
}

void busquedaMatrix(int matriz[FILAS][COLUMNAS], int elemento_buscado){
	int b,z,i;
	for(i=0;i<TAM;++i){
		for(z=0;z<TAM;++z){
			if(matriz[i][z]==elemento_buscado){
				++b;printf("se encontro en fila %d columna %d\n", i,z);}}}
	if(b==0){puts("El numero no se encuentra en la matriz");}}
return;
}


void imprimirArreglo(int arreglo[CAPACIDAD], int tamArreglo){
int i;
for(i=0;i<tamArreglo;++i){
printf("%d ",arreglo[i]);
}
printf("\n");
return;
}
