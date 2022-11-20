#include <stdio.h>
#include<limits.h>
//melhor aluno, coluna até 4, 3 alunos

void main() {
  
  int n_alunos = 3;
  
  char nomes[n_alunos][30];//Matriz de nomes.
  
  int informacoes[n_alunos][4];//Matriz que armazena as informacoes de cada aluno
  
  int maior_nota = INT_MIN;
  int indice_melhor_aluno = -1;//Defino coo indice -1 para pertencer ao indice de nenhum aluno
  
  int soma_notas_finais = 0;
  
  /*Preenchimento das informacoes dos alunos*/
  for(int aluno = 0; aluno < n_alunos; aluno++)
  {
    printf("Digite o seu nome: ");
    fgets(nomes[aluno], 30, stdin);
    
    printf("\nDigite o numero de sua matricula: ");
    scanf("%i", &informacoes[aluno][0]);
    
    getchar();
    
    printf("\nDigite a sua media nas provas: ");
    scanf("%i", &informacoes[aluno][1]);
    
    getchar();
    
    printf("\nDigite a sua media nos trabalhos: ");
    scanf("%i", &informacoes[aluno][2]);
    
    getchar();
    
    informacoes[aluno][3] = informacoes[aluno][1] + informacoes[aluno][2]; //A quarta coluna eh a soma das colunas 1 e 2
    
    soma_notas_finais += informacoes[aluno][3];
    
    /*Atualiza a maior nota*/
    if(informacoes[aluno][3] > maior_nota)
    {
      maior_nota = informacoes[aluno][3];
      indice_melhor_aluno = aluno;
    }
  }
  
  printf("%s de matricula %i foi o melhor aluno com media %i.\n", nomes[indice_melhor_aluno], informacoes[indice_melhor_aluno][0], informacoes[indice_melhor_aluno][3]);
  
  printf("A media da turma foi %i.", soma_notas_finais/n_alunos);
  
}
