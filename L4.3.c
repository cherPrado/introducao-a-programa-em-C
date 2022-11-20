#include <stdio.h> 
#include <math.h>

int quadrado(int num);

int main(){
   int num, aux;
   
    printf("Digite o número: ");
    scanf("%i", &num);
    aux = quadrado(num);
    
    if(aux == 1)
        printf("Número é quadrado perfeito");
        else
            printf("Número não é quadrado perfeito");
    
    return 0;
}

int quadrado(int num)
{
  int p, resultado;
    
   for(p = 1; p <= num; p++){
        if( p * p == num){
            resultado = 1;
            continue;
            }
    }
    return resultado;
}



