//8. Desenvolver um programa que recebe a quantidade de alunos que est�o cursando
// o 3� semestre. Para cada aluno receber a quantidade de disciplinas que cursou
//no 2� semestre e tamb�m a nota final relativa a cada disciplina. Calcular e mostrar
// a m�dia de cada aluno para verificar o aproveitamento do �ltimo semestre cursado.

#include<stdio.h>
#include<locale.h>

int main()
{
 setlocale (LC_ALL, "portuguese_Brazil");
 
 int alunos, quantdisciplina, notadisciplina, i, j;
 float mediasegundo, somanotas;
 
 printf("informe a quantidade de alunos cursando o 3� semestre: ");
 scanf("%i", &alunos);
 
 for( i = 1; i <= alunos ; i++ )
  {
  	printf("\ninforme a quantidade de disciplinas cursadas no 2� semestre pelo aluno %i: ", i);
  	scanf("%i", &quantdisciplina);
  	
			somanotas=0;

  	for ( j=1 ; j<=quantdisciplina ; j++ )
					{
				  printf("informe a nota final das disciplinas, disciplina %i: ", j);
						scanf("%i", &notadisciplina);

						somanotas = somanotas + notadisciplina;
						mediasegundo = somanotas / quantdisciplina;
     }
	  printf("a m�dia do aluno %i, no segundo semestre �: %.1f \n", i, mediasegundo);
  }
					 
return 0;}
 
