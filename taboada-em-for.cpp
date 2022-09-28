#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese_Brazil");
	int numero, i;
	printf("Digite um numero: ");
	scanf("%i",&numero);
	for(i=0;i<11;i++){
		printf("%ix%i=%i\n", numero, i, numero*i);
	}
	return(0);
}
