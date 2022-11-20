#include <stdio.h>
#include <string.h>
#include <strings.h>
//https://www.onlinegdb.com/

int main()
{
    int a = 0, e = 0, contador = 0, i;
    char texto[100] = "Hoje em Goiania chaovu muito essa semana.";
    
    for( i = 0; texto[i] != '\0'; i++){
        
        if( tolower(texto[i]) == 'a' ){
        a += 1;
        }
        if( tolower(texto[i]) == 'e' ){
        e += 1;
        }
        
        contador += 1;
    }
    
    printf("Quantidade de \na: %i\ne: %i\nquantidade de caracteres: %i", a, e, contador);
    
    return 0;
}
