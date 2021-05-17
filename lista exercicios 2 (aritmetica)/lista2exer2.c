#include <stdio.h>
//calculo de salário

int main()
{
	float HORAN;
	float HORAE;
	float salario;
	
	printf("digite a quantidade de horas normais trabalhadas no mes: ");
	scanf("%f", &HORAN);
	printf("digite a quantidade de horas extras trabalhadas no mes: ");
	scanf("%f", &HORAE);

	salario = HORAN*10 +HORAE*15;
	
	printf("o salario de acordo com as horas totais eh de: %0.2f,reais", salario);

return 0;
}
