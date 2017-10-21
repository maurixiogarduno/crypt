#include <string.h>
#include <crypt.h>
#include <stdio.h>
int main(){
	FILE *f=fopen ("diccionario.txt", "r");
	char a[512]; char b[512]; char c[512]; char *d;
	
	printf("Introduzca contraseña cifrada:");
	scanf("%s",a);
	printf("Introduzca algoritmo:");
	scanf("%s",b);
	
	do {
		fscanf(f,"%s",c);
		d=crypt(c,b);
		printf("%s\n",d);
	}
	
	while (strcmp(a, d) != 0);
	printf("LA CONTRASEÑA ES!: %s\n\a", c);
}
