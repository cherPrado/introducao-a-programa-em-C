#include <stdio.h>
#define TAM 7

int main()
{
    int A[TAM];
    int troca[TAM];
    int i, p = 0;
    
    printf("\t\t Inversão de elementos de vetor. \n");        
        
    for(i = 0; i < TAM; i++ ){
    printf("\nDigite o º%d número de 7 inteiros: ", i+1);
    scanf("%d", &A[i]);
    }
    
    for(i = 6; i > -1; i-- ){

        troca[p] = A[i];
        p++;
    }
    
    printf("\n\nEstado do vetor antes da troca: ");
    printf("(");
    for(i = 0; i < TAM; i++ ){
        printf("%d", A[i]);
        if(i < TAM - 1)
            printf(", ");
    }
    printf(")");
    
    printf("\n\nEstado do vetor depois da troca: ");
    printf("(");
    for(i = 0; i < TAM; i++ ){
        printf("%d", troca[i]);
        if(i < TAM - 1)
            printf(", ");
        
    }
    printf(")\n");

    return 0;
}
