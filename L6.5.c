#include <stdio.h>
#include <string.h>

int main()
{
    char string[200];
    int contMai = 0, contMin = 0;
    
    printf("\t\t\tContagem de letras minúsculas e maiúsculas\n");
    
    printf("\n Digite a string: ");
    scanf("%[^\n]", string);
    
    for(int i = 0; i < strlen(string); i++)
    {
        if(string[i] >= 'A' && string[i] <= 'Z')
        {
            contMai ++;
        }
        if(string[i] >= 'a' && string[i] <= 'z')
        {
            contMin ++;
        }
    }
    
    printf("\n Letras minúsculas: %i\n\n Letras maiúsculas: %i", contMin, contMai);
    
    return 0;
}
