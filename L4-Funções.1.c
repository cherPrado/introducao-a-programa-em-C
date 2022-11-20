#include <stdio.h>
int primo(int num);

int main()
{
    int numero, aux;
        
    printf("Digite um número inteiro positivo: ");
    scanf("%i", &numero);
    aux = primo(numero);
    
    if(aux == 0)
    printf("O número %i não é primo", numero);
        else
        printf("O número %i é primo", numero);
    
   return 0;
}

int primo(int num)
{
    int i, contadorDiv, pr; 
     
     contadorDiv = 0;
      for (i=1; i <= num; i++) {
         if (num % i == 0) 
            contadorDiv++;
      }
      if (contadorDiv == 2)
            pr = 1;
            else 
                pr = 0;
        
    return pr;
}




