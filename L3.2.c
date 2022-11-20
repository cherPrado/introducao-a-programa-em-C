#include <stdio.h>

int main()
{
    int N, numerador; 
    float S = 0, denominador;
    
    printf("Digite o valor de N: ");
    scanf("%i", &N);
    
    denominador = N;
    
    for(numerador = 1; numerador <= N; numerador ++)
    {
        S = S + (numerador/denominador);
        
        denominador = denominador - 1;
    }
    
    printf("\nValor de S: %.1f", S);
    
    return 0;
}


