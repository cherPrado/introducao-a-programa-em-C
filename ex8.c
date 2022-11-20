#include <stdio.h>

int main()
{
    int av;
    
    printf("\n Digite a quantidade de avaliações: ");
    scanf("%d", &av);
    
    float notas[av];
    float media = 0;
    
    for(int i = 0; i < av; i++)
    {
    printf("\n\n Digite as notas da º%d avaliação: ", i + 1 );
    scanf("%f", &notas[i]);
    media += notas[i];
    }
    
    printf("\n\n A media do aluno foi: %.2f", media/av );
    
    return 0;
}
