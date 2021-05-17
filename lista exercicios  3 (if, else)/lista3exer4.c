// Calcular a média de um aluno em um semestre com duas provas,
//onde M = (P1 + P2) / 2. Se a média for maior ou igual a 5
//escreva “aprovado”, senão calcule e mostre quanto faltou para atingir 5.
#include <stdio.h>

int main()
{
		float p1, p2, media, mediafaltante;
		
printf (" digite a nota da prova 1: ");
scanf ("%f", &p1);
printf (" digite a nota da prova 2: ");
scanf ("%f", &p2);
media=(p1+p2)/2;
mediafaltante=(mediafaltante+media-5)*-1;

if (media >= 5){
   printf ("\n aprovado");}
			else {
   printf ("\npara atingir media 5 faltou %.2f pontos", mediafaltante);}

return 0;}

