//8. Desenvolver um programa que recebe a quantidade de alunos que estão cursando
// o 3º semestre. Para cada aluno receber a quantidade de disciplinas que cursou
//no 2º semestre e também a nota final relativa a cada disciplina. Calcular e mostrar
// a média de cada aluno para verificar o aproveitamento do último semestre cursado.

#include<stdio.h>
#include<locale.h>

int main()
{
 setlocale (LC_ALL, "portuguese_Brazil");
 
 int alunos, quantdisciplina, notadisciplina, i, j;
 float mediasegundo, somanotas;
 
 printf("informe a quantidade de alunos cursando o 3º semestre: ");
 scanf("%i", &alunos);
 
 for( i = 1; i <= alunos ; i++ )
  {
  	printf("\ninforme a quantidade de disciplinas cursadas no 2º semestre pelo aluno %i: ", i);
  	scanf("%i", &quantdisciplina);
  	
			somanotas=0;

  	for ( j=1 ; j<=quantdisciplina ; j++ )
					{
				  printf("informe a nota final das disciplinas, disciplina %i: ", j);
						scanf("%i", &notadisciplina);

						somanotas = somanotas + notadisciplina;
						mediasegundo = somanotas / quantdisciplina;
     }
	  printf("a média do aluno %i, no segundo semestre é: %.1f \n", i, mediasegundo);
  }
					 
return 0;}
 
