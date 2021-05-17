#include <stdio.h>
//calculo de salario menos imposto

int main()
{
	float salariobruto;
	float salarioliquido;

	printf("digite o salario bruto: ");
	scanf("%f", &salariobruto);

	salarioliquido = salariobruto * 0.63;
 printf("o salario com descontos eh de: %0.2f reais", salarioliquido);

	return 0;
}
