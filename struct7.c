#include <stdio.h>

struct Aluno {
   char nome[81];
   char sexo;
   float nota;
   char *lingsProg[3];  // Vetor de string => matriz de string: char nomesPets2[3][20];
};


void imprimeAluno(struct Aluno a)
{
   int i;
   //printf("Dados de um aluno --- ");
   
   printf("Nome: %s\tNota: %.2f\n", a.nome, a.nota);
   printf("Linguagens de Programacao conhecidas: ");
   for (i=0; i<3; i++) {
      printf("%s, ", a.lingsProg[i]);
      if (i == 2)
   			printf("\b\b ");
	 }
   
   printf("\n\n");
}

void listarTurma(struct Aluno turma[], int n)
{
   printf("Imprimindo dados de alunos da turma\n");
   int i;
   
   for(i=0; i<n; i++)
      imprimeAluno(turma[i]);
}


int main ()
{
	 // Exemplos de vetores de char e de string
   char Letras[] = {'a', 'b', 'c'};	// Vetor de char
   char *MeusPets[] = {"Barak", "Doki", "Dolly"};	// Vetor de string
   
   
   struct Aluno turma[3] = {
      {"JOSE", 'M', 9.0, {"C", "Pascal", "Java"}}, 
      {"MARIA", 'F', 9.2, {"C#", "Object Pascal", "Javascript"}}, 
      {"ILARIO", 'M', 9.5, {"Visual Basic", "Bash", "Ocaml"}}
   };

   listarTurma(turma, 3);
   
   return 0;
}

