//8.Faça um programa para calcular o peso ideal de uma pessoa.
//Ao iniciar o programa, peça a idade da pessoa pois o índice não é preciso para crianças
//e pessoas idosas. Assim, não calcule para pessoas maiores que 65 anos e menores que 12
//Através do sexo (1 para masculino, 2 para feminino) e da altura, calcular o peso ideal
//de uma pessoa. Receber também o peso atual dela e indicar se a mesma está no peso ideal
// acima ou abaixo, conforme o cálculo:

//Fórmula do peso ideal do homem: (72.7 * altura) – 62
//Fórmula do peso ideal da mulher: (62.1 * altura) – 48.7

#include<stdio.h>

int main()
{
float idade, sexo, altura, pesoidealMASC, pesoidealFEM, pesoatual;

	printf ("digite sua idade: ");
	scanf ("%f", &idade);
	if (idade < 12 || idade > 65)
		{
			printf(" esse indice nao funciona nessa idade");
			return 0;
  }
  
	printf ("digite seu sexo, 1 para masculino e 2 para feminino: ");
	scanf ("%f", &sexo);

	if (sexo == 1)
			{
			printf("sexo masculino");
			printf ("\ndigite sua altura (use ponto para separar metro de centimetros): ");
	  scanf ("%f", &altura);
	  pesoidealMASC = 72.7 * altura -62;
	  printf("seu peso ideal seria: %.2f kls", pesoidealMASC);
						printf ("\ndigite seu peso atual: ");
						scanf("%f", &pesoatual);
								if(pesoatual > pesoidealMASC)
								  {
									 printf("\nvoce esta acima do peso ideal para homens");
								  }
										  else if(pesoatual < pesoidealMASC)
										  {
									   printf("\nvoce esta abaixo do peso ideal para homens");
								    }
										else
										{
									 printf("\nvoce esta no peso ideal para homens");
								  }
				 }

     else if (sexo == 2)
			  {
				  printf("sexo feminino ");
						printf ("\ndigite sua altura (use ponto para separar metro de centimetros): ");
	     scanf ("%f", &altura);
	     pesoidealFEM = 62.1*altura-48.7;
	     printf("seu peso ideal seria: %.2f kls", pesoidealFEM);
						printf ("\ndigite seu peso atual: ");
						scanf("%f", &pesoatual);
								if(pesoatual > pesoidealFEM)
								  {
									 printf("\nvoce esta acima do peso ideal para mulheres");
								  }
										  else if(pesoatual < pesoidealFEM)
										  {
									   printf("\nvoce esta abaixo do peso ideal para mulheres");
								    }
										else
								    {
									   printf("\nvoce esta abaixo do peso ideal para mulheres");
								    }
							
				 }

return 0;
}
