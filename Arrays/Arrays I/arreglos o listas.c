#include <stdio.h>
#include <stdlib.h>

int arreglo1[10]={9,8,7,6}; //Tiene 10 locaciones pero solo 4 datos asi que rellena con 0 lo que no se define
float arreglo2[10]={8,4,2,6,95};
char arreglo3[10]={'a','b','@'};
char cadena[]="Introduccion";
int matriz[2][3]={{1,2,3},{4,5,64}};
char cadena1[4]={'h','o','l','a'};

int main(int argc, char *argv[]) {
	// iMPRIMIR DATOS DEL ARREGLO DE ENTEROS
	printf("%d\n", arreglo1[0]);
	printf("%d\n", arreglo1[2]);
	printf("%d\n", arreglo1[7]);
	 
	//IMPRIMIR DATOS DEL ARREGLO DE FLOTANTES
	printf("%.3f\n", arreglo2[0]);
	printf("%.4f\n", arreglo2[2]);
	printf("%.5f\n", arreglo2[8]);
	
	//IMPRIMIR DATOS DEL ARREGLO DE CARACTERES
	printf("%c\n", arreglo3[0]);
	printf("%c\n", arreglo3[2]);
	printf("%c\n", arreglo3[9]);
	
	//IMPRIMIR DATOS DE UNA CADENA DE CARACTERES
	printf("%s\n", cadena);
	printf("%c\n", cadena[3]);
	
	//IMPRIMIR DATOS DE UN ARREGLO MULTIDIMENSIONAL O MATRIZ
	printf("%d\n", matriz[1][2]);
	printf("%d\n", matriz[0][1]);
	printf("%c\n", matriz[1][2]);
	
	//IMPRIMIR DATOS DE ARREGLO DE CARACTERES COMO CADENA
	printf("%s\n", cadena1);
	
	return 0;
}
