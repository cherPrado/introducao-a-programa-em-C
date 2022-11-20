#include <stdio.h>
#include <stdlib.h>

int contador = 0;
int fib(int n);

int main()
{
    int n, x, e;

    scanf("%d", &e);
    
    for(int i = 1; i <= e; i++){
        scanf("%d", &n);
        
        x = fib(n);
        if(n == 1)
            printf("fib(%d) = %d calls = %d\n", n, contador, x);
        else
            printf("fib(%d) = %d calls = %d\n", n, contador - 1, x);
            
        contador = 0;
    }
    
    return 0;
}

int fib(int n){
    contador++;
    
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    else
        return fib(n-1) + fib(n-2);
}
