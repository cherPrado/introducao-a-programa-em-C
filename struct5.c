#include <stdio.h>

struct Aluno {
   char nome[81];
   char sexo;
   float nota;
};

struct Aluno leAluno()
{
   struct Aluno aux;
   printf("Digite o Nome: ");
   scanf("%[^\n]", aux.nome);
   getchar();
   
   printf("Sexo: ");
   scanf("%c", &aux.sexo);
   getchar();
   
   printf("Digite a Nota: ");
   scanf("%f",&aux.nota);
   getchar();
   return aux;
}

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
   struct Aluno turma[3]; 
   
   int i;
   for (i=0; i<3; i++) {
      turma[i] = leAluno();  
   }
   
   listarTurma(turma, 3);

   return 0;
}
