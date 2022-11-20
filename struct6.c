#include <stdio.h>

struct Aluno {
   char nome[81];
   char sexo;
   float nota;
};


void imprimeAluno(struct Aluno a)
{
   //printf("Dados de um aluno --- ");
   printf("Nome: %s\tNota: %.2f\n", a.nome, a.nota);
}

void listarTurma(struct Aluno turma[], int n){
   printf("Imprimindo dados de alunos da turma\n");
   int i;
   
   for(i=0; i<n; i++)
      imprimeAluno(turma[i]);
}


int main ()
{
   struct Aluno turma[3] = {{"JOSÉ", 'M', 9.0}, {"MARIA", 'F', 9.2}, {"IL", 'M', 9.5}};
   
   listarTurma(turma, 3);

   return 0;
}
