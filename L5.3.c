#include <stdio.h>
#include <math.h>
#define TAM 10

int main()
{
    float v[TAM];
    int i;
    float somatorio = 0, media = 0;
    float s, aux, m, n;
        
    printf("\t\t*** Cálculo de média e desvio padrão ***\n");
    
    for(i = 0; i < TAM; i++){
        printf("\n Digite o º%d de 10 números reais: ", i+1);
        scanf("%f", &v[i]);
    }

    for(i = 0; i < TAM; i++){

        m = m + v[i];
    }

    media = m / TAM;
    somatorio = 0;

    for(i = 0; i < TAM; i++){

        somatorio += pow(v[i] - media, 2);

    }

    n = TAM - 1;
    aux = 1/n * somatorio;
    
    s = sqrt(aux);

    printf("\n\n Média aritmética: %f", media);
    printf("\n\n Desvio padrão: %f", s);

    return 0;
}


