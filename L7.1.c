#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j;
    int a = 1, cont = 0;
    int **v;

    printf("\tSoma dos valores contidos na matriz");
    printf("\n\n Digite o tamanho da matriz: ");
    scanf("%d", &n);

    printf("\n");

    v = malloc(n * sizeof(int *));

    for(i = 0; i < n; i++)
    {
        v[i] = malloc(n * sizeof(int));
    }

    for(i = 0; i < n; i++)
    {
         for(j = 0; j < n; j++)
         {
             v[i][j] = a;

             if((i + j) > (n-1) && j > i)
             {
                 cont += a;
             }
              a++;
         }
    }

    for(i = 0; i < n; ++i)
    {
        printf("\t\t"); 
         for(j = 0; j < n; ++j)
         {
             printf("%2.d ", v[i][j]);
         }
         printf("\n");
    }

    printf("\n Soma dos elementos é: %d", cont);

    return 0;
}
