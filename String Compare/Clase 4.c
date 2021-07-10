#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

char p[]="juandavid", c[9]={'j','u','a','n','d','a','v','i','d'};
int f=2, a;

int main(int argc, char *argv[]) {
	if(strcmp(p,c)==0){
		if(f==0||f==1){a=1;}
		if(f==2){a=2;}
		if(f==3){a=3;}}
	printf("%d", a);
	return 0;
}
