//7. Um triângulo pode ser classificado de acordo com as medidas de seus lados:
//Um triângulo equilátero possui todos os lados de mesma medida.
//Um triângulo isósceles possui dois lados de mesma medida.
//Um triângulo escaleno possui as medidas dos três lados diferentes.
//Receber os três lados de um triângulo em qualquer ordem (chame de lado1, lado2 e lado3)
//e classificá-lo em equilátero, isósceles ou escaleno.

#include<stdio.h>

int main()
{
float lado1, lado2, lado3;

	printf ("digite as 3 medidas dos lados do triangulo\n");
	printf ("lado 1: ");
	scanf ("%f", &lado1);
	printf ("lado 2: ");
	scanf ("%f", &lado2);
	printf ("lado 3: ");
	scanf ("%f", &lado3);
	
	if (lado1 == lado2 && lado2 == lado3)
		{
			printf(" esse triangulo tem as tres mediadas iguais, portanto eh um equilatero");
  }
				else if (lado1 == lado2 || lado1== lado3 || lado2 == lado3)
					{
						printf(" esse triangulo tem as duas mediadas iguais, portanto eh um isoceles");
     }
	else
		{
			printf(" esse triangulo nao tem lados iguais, portanto eh um escaleno");
  }
	
return 0;
}
