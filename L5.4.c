#include <stdio.h>
#define tamVET 5

int main()
{
    int A[tamVET];
    int B[tamVET];
    int D[tamVET];
    int t = 0;
    int i, p;

    printf("\t\tDiferença entre elementos de dois vetores.\n");

    for(i = 0; i < tamVET; i++){

        printf("\n Digite o º%i valor do vetor A: ", i+1);
        scanf("%d", &A[i]);
    }
    
    printf("\n --------------------------------\n");
    
    for(i = 0; i < tamVET; i++){

        printf("\n Digite o º%i valor do vetor B: ", i+1);
        scanf("%d", &B[i]);
    }

    int k = 0; 

    for(i = 0; i < tamVET; i++){

        for(p = 0; p < tamVET; p++ ){

            if(A[i] == B[p]){

               k = 1;
            }
         }

        if( k == 0){ // usado quando tem elemento de A que não esta contido em B.

            D[t] = A[i];
            t++;
        }
        
        k = 0;
    }

    printf("\n\n Elementos do vetor D: ");
    printf("(");
    
    for(i=0; i<t; i++){
    printf("%d", D[i]);
    
    if(i < t-1)
        printf(", ");
    }
    
    printf(")\n");
    
    return 0;
}