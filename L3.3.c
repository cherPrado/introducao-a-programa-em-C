#include <stdio.h>

int main()
{
    float pesoGelo = 50000, tempoDerreti = 0;
    
    while(pesoGelo > 0)
    {
        tempoDerreti = tempoDerreti + 3;
        pesoGelo = pesoGelo - 500;
    }
    
    printf("quantidade de horas: %f", tempoDerreti/60);
    
    return 0;
}
