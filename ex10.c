#include <stdio.h>
#include <stdlib.h>

/*
    Espelhando matriz de um lado p/ o outro, da para melhorar e fazer p/ qlqr matriz
*/

int main()
{
    int i, j, b, c = 2;
    int vet[3][3] = { 1,4,5,
                      2,9,6,
                      3,7,8 };
    int aux[3][3] = {0,0,0,0,0,0,0,0,0};

    for(i = 0; i <= c; i++){
        for(j = 0; j <= c; j++){
            
            b = 3 - 1 - j;
        
            aux[i][j] = vet[i][j];

            if(j <= 3/2)
                vet[i][j] = vet[i][b];

            if(j > 3/2)
                vet[i][j] = aux[i][b];

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

