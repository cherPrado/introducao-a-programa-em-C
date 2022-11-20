#include <stdio.h>
#include <stdlib.h>
int ex();

int main()
{
    int aux;
    
    aux = ex(5);
    
    printf("Fatorial de 5 eh: %d", aux);

    return 0;
}

int ex(int p){
    
    if( p == 0)
        return 1;
    else
        return p*ex(p-1);
}


