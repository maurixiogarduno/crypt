#include <string.h>
#include <crypt.h>
#include <stdio.h>
int main(){
	FILE *f=fopen ("dic.txt", "r");
	char a[512]="$#$salt$hashpass";
	char b[512]="$#$salt$"; 
  char c[512]; 
  char *d;
	
	do {fscanf(f,"%s",c);
		d=crypt(c,b);
		
	}while (strcmp(a, d) != 0);
	printf("PASS!: %s\n\a", c);
}
