#include <stdio.h>
//Calculo dp per�metro da circunfer�ncia

int main()
{
	float C;
	float raio;
	
	printf("informe o valor do raio: ");
	scanf("%f", &raio);
	
	C =  2 * 3.14 * raio;
	
	printf("perimetro da circunferencia do raio informado eh: %0.2f ", C);

return 0;
}
