//6. Receber dois números e os apresente em ordem crescente.
//Utilize apenas a estrutura de decisão if, ou seja, sem o opcional else.

#include <stdio.h>

int main(){
	int num1, num2, maior, menor;

	printf("Digite num1: ");
	scanf("%i", &num1);

	printf("Digite num2: ");
	scanf("%i", &num2);

	maior = num1;
	menor = num2;

	if(maior < menor)
	{
		maior = num2;
		menor = num1;
	}

	printf("\n %i  %i", menor, maior);

	return 0;
}
