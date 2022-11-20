#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char string[50];
    int cont = 0;

    printf("\t\t\t>> Verificador de palíndromo <<\n");

    printf("\n Digite a palavra: ");
    scanf("%s", string);

    int p = strlen(string) - 1;
    int aux = (strlen(string)/2);
    int aux2 = 0;

    for(int i = 0; i < (strlen(string)/2); i++ )
    {
        if(tolower(string[i]) == tolower(string[p]))
        {
            aux2 ++;
        }
        p--;
    }

    if(aux == aux2)
        printf("\n SIM\n");
        else
            printf("\n NÃO\n");

    return 0;
}
