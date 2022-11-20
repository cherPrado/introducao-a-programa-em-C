#include <stdio.h>   // printf, scanf
#include <malloc.h>  // malloc

struct Aluno {
   char nome[81];
   char sexo;
   float nota;
};

int main()
{
   //struct Aluno turma[5];
   struct Aluno *turma; // O ponteiro funcionará como vetor dinâmico
   int i, n;
   
   printf("Quantidade de alunos: ");
   scanf("%d", &n);
   getchar();  // Evita que a leitura do campo tipo char seja ignorada
   
   turma = malloc(n * sizeof(struct Aluno));
   
   if (turma == NULL) {
      printf("Memória insuficiente!");
   }
   else {
      for (i=0; i<n; i++) {
         printf("Digite o nome: ");
         //fgets(a.nome, 80, stdin);
         scanf("%[^\n]", turma[i].nome);
         getchar();  // Evita que a leitura do campo tipo char seja ignorada
         
         printf("Sexo: ");
         scanf("%c", &turma[i].sexo);
         
         printf("Digite a nota: ");
         scanf("%f", &turma[i].nota); 
         getchar();  // Evita que a leitura do campo tipo char seja ignorada
      }   
    
      float media = 0;
      for(i=0; i<n; i++) {
         media = media + turma[i].nota;
      }
      printf("\n\nRelação de alunos:\n");
      for(i=0; i<n; i++) {
         printf("Nome: %s\t", turma[i].nome);
         printf("Sexo: %c\t", turma[i].sexo);
         printf("Nota: %.1f\n", turma[i].nota);
      }
      printf("\nMédia da turma = %.2f\n", media/n);
   }   
   
   free(turma);   // Libera espaço alocado anteriormente
}
