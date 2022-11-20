#include <stdio.h>
#include <string.h>

struct Aluno {
   char nome[81];
   float nota;
};

int main()
{
   struct Aluno a, b;
   
   printf("Digite o nome: ");
   //fgets(a.nome, 80, stdin);
   scanf("%[^\n]", a.nome);
   
   printf("Digite a nota: ");
   scanf("%f", &a.nota); 
   getchar();
   
   printf("Digite o nome: ");
   scanf("%[^\n]", b.nome);
   
   printf("Digite a nota: ");
   scanf("%f", &b.nota);
   getchar();
   
   printf("a.nome = %s, a.nota = %.1f\n", a.nome, a.nota);
   printf("b.nome = %s, b.nota = %.1f\n", b.nome, b.nota);
}