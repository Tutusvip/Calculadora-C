#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
 float n1,n2;
 
 setlocale(LC_ALL, "Portuguese_Brazil");
 
 printf("\n************************");
 printf("\nCALCULADORA");
 printf("\n************************");
 
 printf("\nDigite o primeiro numero:");
 scanf("%f", &n1);
 printf("\nDigite o segundo numero:");
 scanf("%f", &n2);
 
 printf("\nSOMA= %2.f", n1+n2);
 printf("\nSUBITRAÇÃO %2.f", n1-n2);
 printf("\nMULTIPLICAÇÃO %2.f", n1*n2);
 printf("\nDIVISÃO %2.f", n1/n2);
 printf("\nPOTENCIA %2.f", pow(n1,n2));
 printf("\nREIZ DA SOMA %2.f ", sqrt(n1+n2));
 
return 0;
}
