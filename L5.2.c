#include <stdio.h>
#define TAM 5

int main()
{
    int v1[TAM];
    int v2[TAM];
    int v3[10];
    int i;
    int p = 0, t = 0;
    
    printf("\t\tIntercalação de elementos de 2 vetores em outro vetor.\n");
    
    for(i = 0; i < TAM; i++){
    printf("\n Digite o %dº valor do V1: ", i+1);
    scanf("%d", &v1[i]);
    }
    
    printf("\n -----------------------\n");
    
    for(i = 0; i < TAM; i++){
    printf("\n Digite o %dº valor do V2: ", i+1);
    scanf("%d", &v2[i]);
    }

    for(i = 0; i < TAM; i++){

        v3[p] = v1[t];
        p++;

        v3[p] = v2[t];
        p++;
        t++;
    }
    
    printf("\n\n V1 = ");
    for(i = 0; i < TAM; i++)
        printf("%d ", v1[i]);
        
    printf("\n\n V2 = ");
    for(i = 0; i < TAM; i++)
        printf("%d ", v2[i]);
        
    printf("\n\n V3 = ");
    for(i = 0; i < TAM*2; i++)
        printf("%d ", v3[i]);

    return 0;
}



