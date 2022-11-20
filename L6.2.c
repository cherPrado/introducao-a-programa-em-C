#include <stdio.h>
#include <string.h>
#include <ctype.h>

int func(char st[], char c);

int main()
{
    char string[200];
    char caract;

    printf("\t\t*** Contagem de ocorrências de um caractere na string ***\n");

    printf("\n Digite a string: ");
    scanf("%[^\n]", string);
    
    printf("\n Digite o caracter: ");
    scanf("%*c%c", &caract);
    
    printf("\n Foi digitado %d vezes", func(string, caract));
    
    return 0;
}

int func(char st[], char c)
{
    int cont = 0;
    
    for(int i = 0; i < strlen(st); i++ )
    {
        
        if(toupper(st[i]) == toupper(c))
        {
            cont ++;
        }
    }
    
    return cont;
}