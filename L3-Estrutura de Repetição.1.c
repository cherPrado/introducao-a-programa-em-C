#include <stdio.h>

int main()
{
   int idade, maiorIdade = -1, menorIdade = 999, i = -1, dezoitou = 0;
   float somaMedia = 0;
   
   do
   {
        printf("Digite a idade: ");
        scanf("%i", &idade);
    
        somaMedia = somaMedia + idade;
   
        i++;
    
        if(idade > maiorIdade)
            maiorIdade = idade;
        
        if(idade < menorIdade && idade != 0)
            menorIdade = idade;
    
        if(idade >= 18)
            dezoitou++;
    
    }while( idade != 0);
    
    printf("\nA média das idades: %.1f\n", somaMedia/i);
    printf("A maior idade: %i\n", maiorIdade);
    printf("A menor idade: %i\n", menorIdade);
    printf("A quantidade de maiores de idade: %i\n", dezoitou);
    
    return 0; 
}
