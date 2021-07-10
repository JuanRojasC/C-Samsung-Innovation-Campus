#include <stdio.h>
#include <stdlib.h>

char i = 0, cadena[10]={}, n=0, v=0;

int main()
{
	puts("ingrese el texto (despues presione enter-ctrl+z-enter)(max 10 caracteres)");
	while((cadena[i] = getchar()) != EOF)
	{	i++;
		if(i>11){
			fflush(stdin);
			i=0;
			puts("ingrese un texto valido (max 10 caracteres)(despues presione enter-ctrl+z-enter)");}
	}
	for(n=0;n<i;n++){
		cadena[n]=tolower(cadena[n]);
		if((cadena[n]=='a')||(cadena[n]=='e')||(cadena[n]=='i')||(cadena[n]=='o')||(cadena[n]=='u')){
			++v;
			printf("el valor de v es %d y el de n es %d\n", v,n);}}
		
	if(i==0 || i==1){
		puts("La cadena tiene 0 caracteres");}		
	else{
		printf("La cadena tiene %d caracteres\n", i-1);
		printf("La cadena tiene %d vocales\n", v);}
    return 0;
}

