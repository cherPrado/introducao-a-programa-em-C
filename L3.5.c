#include <stdio.h>

int main()
{
    int limSup, limInf, i, p;
    
    printf("Digite o limite inferior: " );
    scanf("%i", &limInf);
    printf("Digite o limite superior: " );
    scanf("%i", &limSup);
    
    for(i = limInf; i <= limSup; i++)
    {
        for(p = 1; p <= i; p++){
            if( p * p == i){
                printf("%i ", i);
            }
        }
    }
    
    return 0;
}

