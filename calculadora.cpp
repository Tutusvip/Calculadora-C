#include<math.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");
	float calculo,n1,n2;

	printf("\n ----------- \n");
	printf("\t\n CALCULADORA \n");
	printf("\n ----------- \n");

	printf("Digite o 1� n�mero:");
	scanf("%f",&n1);
	printf("Digite o 2� n�mero:");
	scanf("%f",&n2);

	printf("\nEscolha a opera��o:\n");
	printf("\n (1) \t adi��o \n (2) \t subtra��o \n (3) \t multiplica��o \n (4) \t divis�o \n");
	scanf("%f",&calculo);

		if(calculo==1){
		float operacao;
		operacao = n1+n2;
		printf("a soma de %4.2f + %4.2f � : %4.2f",n1,n2,operacao); 
			} if(calculo==2){
			float operacao; 
			operacao = n1-n2;
			printf("a subtra��o de %4.2f - %4.2f � : %4.2f",n1,n2,operacao); 
				} if(calculo==3){
				float operacao;
				operacao = n1*n2;
				printf("a multiplica��o de %4.2f � %4.2f � : %4.2f",n1,n2,operacao); 
					} if(calculo==4){
					float operacao;
					operacao = n1/n2;
					printf("a divis�o de %4.2f � %4.2f � : %4.2f",n1,n2,operacao); 
						} else{
						printf("\n opera��o efetuada");
}        
}
