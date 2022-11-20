#include <stdio.h>	// printf, scanf
#include <stdlib.h>	// system
#include <malloc.h> // malloc, realloc
#include <conio.h>	// getch()
#include <string.h>

#define TAM 50

typedef struct aluno {   // 'aluno' complementa struct aluno para uso interno da estrutura
	char nome[TAM];
	int matr;
	struct aluno *prox;
} estudante;

estudante *inicio, *atual;

void insereAluno(void);
void imprimeLista(void);

int main()
{
	char tecla;
	inicio = (estudante *) NULL;

	do {
		insereAluno();
		printf("\nDeseja cadastrar outro estudante (s/n)? ");
		tecla = getchar();
		getchar();
    printf("\n");
	} while (tolower(tecla) != 'n');

	puts("\nLISTA DE ESTUDANTES CADASTRADOS");
	puts("-------------------------------");

	imprimeLista();

  free(inicio);
  free(atual);

   return 0;
}


void insereAluno()
{
	estudante *novoRegistro = (estudante *) malloc(sizeof(estudante));

  if (inicio == NULL)
		inicio = atual = novoRegistro;
	else {
		atual = inicio;

		// Percorre-se a lista encadeada até o último registro
    while (atual->prox != NULL)
			atual = atual->prox;

    // Apontando para o novo último registro
    atual->prox = novoRegistro;
    atual = novoRegistro;

    // O proximo depois do último registro é NULL
    atual->prox = NULL;
	} // Fim else

  //printf("Entre com o nome do estudante: ");
  //fgets(atual->nome, TAM, stdin);
  //printf("Entre com a matricula: ");
  //scanf("%d%*c", &atual->matr);
  //printf("\n");

  printf("Entre com o nome do estudante: ");
  scanf("%[^\n]", novoRegistro->nome);
  getchar();
  
  printf("Entre com a matricula: ");
  scanf("%d", &novoRegistro->matr);
  getchar();
  printf("\n");
}


void imprimeLista()
{
	if (inicio == (estudante *) NULL)
		puts("A lista esta vazia!");
	else {
		atual = inicio;
		do {
			printf("Nome: %s ", atual->nome);
			printf("Matricula: %d\n\n", atual->matr);
      atual = atual->prox;
		} while (atual != NULL);
	}
}
