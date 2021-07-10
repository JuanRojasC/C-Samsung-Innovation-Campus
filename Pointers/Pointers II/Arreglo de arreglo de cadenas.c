#include <stdio.h>
#include <stdlib.h>

char fruta1[]="manzana", fruta2[]="melocoton", fruta3[]="guanabana", fruta4[]="ciruela", fruta5[]="maracuya", *frutas[5]={fruta1,fruta2,fruta3,fruta4,fruta5};
char ciudad1[]="beijing", ciudad2[]="ciudad del cabo", ciudad3[]="sao Paulo", ciudad4[]="atenas", ciudad5[]="new York", *ciudades[5]={ciudad1,ciudad2,ciudad3,ciudad4,ciudad5};
char job1[]="abogado", job2[]="piloto", job3[]="electricista", job4[]="administrador", job5[]="programador", *jobs[5]={job1,job2,job3,job4,job5};
char nombre1[]="julian", nombre2[]="david", nombre3[]="laura", nombre4[]="alejandra", nombre5[]="francisco", *nombres[5]={nombre1,nombre2,nombre3,nombre4,nombre5};

char (**palabras[4])[5]={frutas,ciudades,jobs,nombres};


int main(int argc, char *argv[]) {
	printf("%s", palabras[3][4]);
    
	
	return 0;
}

