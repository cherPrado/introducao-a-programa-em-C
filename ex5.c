#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//10 questões de múltipla escolha, referente a 5 alunos

int
main ()
{
  int matriz[5][10];
  int gabarito[5][10];
  srand (time (NULL));
  int aluno[] = { 0, 0, 0, 0, 0 };


  for (int linha = 0; linha < 5; linha++)
    {
        for (int coluna = 0; coluna < 10; coluna++)
	    {
	        int gab = rand () % 5;
	        gabarito[linha][coluna] = gab;
	        printf ("%i ", gabarito[linha][coluna]);
	    }
	    printf("\n");
    }

     printf("\n Nota dos alunos: \n\n");

  for (int linha = 0; linha < 5; linha++)
    {
        int nota = 0;
        for (int coluna = 0; coluna < 10; coluna++)
	    {
	        int num = rand () % 5;
	        matriz[linha][coluna] = num;

	        if (matriz[linha][coluna] == gabarito[linha][coluna]){
	            nota++;
	            aluno[linha] = nota;
	        }
	        printf ("%i ", matriz[linha][coluna]);
	    }
	    printf("\n");
    }

  for (int linha = 0; linha < 5; linha++)
    {
      printf ("\nNota do º%i aluno: %i", linha + 1, aluno[linha]);
    }




  return 0;
}

