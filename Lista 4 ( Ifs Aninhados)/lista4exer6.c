//6. Implementar uma calculadora onde o usu�rio digita dois n�meros e uma op��o
// que deve ser 1 para adi��o, 2 para subtra��o, 3 para multiplica��o e 4 para divis�o
// Mostrar na tela caso seja informada uma op��o inv�lida

#include<stdio.h>

int main()
{
	float num1, num2, adicao, multi, subtracao, divisao, entrada;
	
	printf("digite o primeiro numero: ");
	scanf("%f", &num1);
	printf("digite o segundo numero: ");
	scanf("%f", &num2);
	
	printf("\ndigite um dos seguintes numeros para as respectivas operacoes\n");

	printf("\n1:adicao");
	printf("\n2:subtracao");
	printf("\n3:multiplicacao");
	printf("\n4:divisao\n");
 scanf(" %f", &entrada);

	if (entrada == 1)
	{
		adicao = num1+num2;
		printf("operacao de adicao, entao %.0f + %.0f = %.2f ", num1, num2, adicao);
	}
				else if (entrada == 2)
				{
		   subtracao = num1-num2;
				 printf(" operacao de subtracao, entao %.0f - %.0f = %.2f ", num1, num2,subtracao);
    }
    else if (entrada == 3)
				{
		   multi = num1*num2;
				 printf(" operacao de multiplicacao, entao %.0f * %.0f = %.2f ", num1, num2,multi);
    }
    else if (entrada == 4)
				{
		   divisao = num1/num2;
		   printf(" operacao de divisao, entao %.0f / %.0f = %.2f ", num1, num2, divisao);
    }
  else
  {
   printf("opcao invalida");
		}

return 0;}
