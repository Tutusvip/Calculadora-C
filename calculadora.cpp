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

	printf("Digite o 1° número:");
	scanf("%f",&n1);
	printf("Digite o 2° número:");
	scanf("%f",&n2);

	printf("\nEscolha a operação:\n");
	printf("\n (1) \t adição \n (2) \t subtração \n (3) \t multiplicação \n (4) \t divisão \n");
	scanf("%f",&calculo);

		if(calculo==1){
		float operacao;
		operacao = n1+n2;
		printf("a soma de %4.2f + %4.2f é : %4.2f",n1,n2,operacao); 
			} if(calculo==2){
			float operacao; 
			operacao = n1-n2;
			printf("a subtração de %4.2f - %4.2f é : %4.2f",n1,n2,operacao); 
				} if(calculo==3){
				float operacao;
				operacao = n1*n2;
				printf("a multiplicação de %4.2f × %4.2f é : %4.2f",n1,n2,operacao); 
					} if(calculo==4){
					float operacao;
					operacao = n1/n2;
					printf("a divisão de %4.2f ÷ %4.2f é : %4.2f",n1,n2,operacao); 
						} else{
						printf("\n operação efetuada");
}        
}
