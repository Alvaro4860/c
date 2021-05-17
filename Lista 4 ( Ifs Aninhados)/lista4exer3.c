//3. Calcular o IMC de uma pessoa através da fórmula IMC = Peso (kg)/ (Altura * Altura) (m)
//. Informe a classificação do IMC na tela de acordo com as regras abaixo:
//< 18,5 Abaixo do peso
//De 18,5 a menor que 25,0 Saudável
//De 25,0 a menor que 30,0 Sobrepeso
//De 30,0 a menor que 35,0 Obesidade Grau I
//De 35,0 a menor que 40,0 Obesidade Grau II (severa)
//De 40,0 em diante Obesidade Grau III (mórbida)

#include<stdio.h>

int main()
{
float IMC, peso, altura;

printf("digite o peso: ");
scanf ("%f", &peso);
printf("digite a altura (use ponto para separar centimetro de metro): ");
scanf ("%f", &altura);

IMC = peso/(altura*altura);
printf("\nseu IMC eh de: %.2f ",IMC );

if (IMC < 25)
   {
   printf ("\n IMC saudavel");
			}

		   else if (IMC < 30)
			  {
     printf ("\nesse IMC indica sobrepeso");
			  }

			  else if(IMC < 35)
			  {
			  printf ("\nesse IMC indica Obesidade Grau I");
     }
			  
     else if(IMC < 40)
			  {
			  printf ("\nesse IMC indica Obesidade II (severa)");
     }
		 else
			{
			printf ("\nesse IMC indica Obesidade Grau III (morbida)");
			}

return 0;}

