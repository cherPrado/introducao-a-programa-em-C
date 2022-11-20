#include <stdio.h>
//espelhando de cima p/ baixo
int main()
{
    int i, j, b, c = 2;
    int vet[3][3] = { 1,4,5,
                      2,9,6,
                      3,7,8 };
    int aux[3][3] = {0,0,0,0,0,0,0,0,0};

    for(i = 0; i <= c; i++){
        for(j = 0; j <= c; j++){
            
            b = 3 - 1 - i;
        
            aux[i][j] = vet[i][j];

            if(i <= 3/2)
                vet[i][j] = vet[b][j];

            if(i > 3/2)
                vet[i][j] = aux[b][j];

        }
    }

    for(i = 0; i <= c; i++){
        for(j = 0; j <= c; j++){
           printf("%i ", vet[i][j]);
        }
        printf("\n");
    }

    return 0;
}


