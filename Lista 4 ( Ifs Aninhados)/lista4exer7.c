//7. Um tri�ngulo pode ser classificado de acordo com as medidas de seus lados:
//Um tri�ngulo equil�tero possui todos os lados de mesma medida.
//Um tri�ngulo is�sceles possui dois lados de mesma medida.
//Um tri�ngulo escaleno possui as medidas dos tr�s lados diferentes.
//Receber os tr�s lados de um tri�ngulo em qualquer ordem (chame de lado1, lado2 e lado3)
//e classific�-lo em equil�tero, is�sceles ou escaleno.

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
