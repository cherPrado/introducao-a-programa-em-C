
#include <stdio.h>

int main()
{
    int i, j;
    int c[2][3];
    int ct[3][2];
    
    printf("\t\t\tTranspor matriz\n");

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("\n Valor da Matriz C na linha %d, coluna %d: ", i + 1, j + 1);
            scanf("%d", &c[i][j]);
        }
    }

    printf("\n");

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            ct[j][i] = c[i][j];
        }
    }
    
     printf("\n C = ");
    
    for(i = 0; i < 2; i++)
    {
        printf("\t");
        for(j = 0; j < 3; j++)
        {
           printf("%2.d ",  c[i][j]);
        }
        printf("\n");
    }
    
    printf("\n Ct = ");

     for(i = 0; i < 3; i++)
    {
        printf("\t");
        for(j = 0; j < 2; j++)
        {
            printf("%2.d ", ct[i][j]);
        }
        printf("\n");
    }

    return 0;
}
