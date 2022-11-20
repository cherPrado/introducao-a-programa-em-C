#include <stdio.h>
#include <string.h>
#include <ctype.h>

int func(char string[]);

int main()
{
    char string[50];
    int cons;
    
    printf("\t\t\t > Verificador de sobrenomen se é fácil ou não <\n");
    
    printf("\n Digite o sobrenome: ");
    scanf("%s", string);
    
    cons = func(string);
    
    if(cons == 1)
        printf("\n %s é difícil", string);
        else
            printf("\n %s é fácil", string);
    
    return 0;
}

int func(char string[])
{
    int cons = 0;
    int i = 0;
    
    for(int i = 0; i < (strlen(string) - 2); i++)
    {
        if(toupper(string[i]) == 'B' || toupper(string[i]) == 'C' || toupper(string[i]) == 'D' || toupper(string[i]) == 'F' || toupper(string[i]) ==  'G'  || toupper(string[i]) ==  'H'  || toupper(string[i]) == 'J' || toupper(string[i]) ==  'K' || toupper(string[i]) == 'L' || toupper(string[i]) == 'M' || toupper(string[i]) == 'N' || toupper(string[i]) == 'P' || toupper(string[i]) == 'Q' || toupper(string[i]) == 'R' || toupper(string[i]) == 'S' || toupper(string[i]) == 'T' || toupper(string[i]) == 'V' || toupper(string[i]) == 'W' || toupper(string[i]) == 'X' || toupper(string[i]) ==  'Z' )
        {
            int p = i;
            p++;
            if(toupper(string[p]) == 'B' || toupper(string[p]) == 'C' || toupper(string[p]) == 'D' || toupper(string[p]) == 'F' || toupper(string[p]) ==  'G'  || toupper(string[p]) ==  'H'  || toupper(string[p]) == 'J' || toupper(string[p]) ==  'K' || toupper(string[p]) == 'L' || toupper(string[p]) == 'M' || toupper(string[p]) == 'N' || toupper(string[p]) == 'P' || toupper(string[p]) == 'Q' || toupper(string[p]) == 'R' || toupper(string[p]) == 'S' || toupper(string[p]) == 'T' || toupper(string[p]) == 'V' || toupper(string[p]) == 'W' || toupper(string[p]) == 'X' || toupper(string[p]) ==  'Z' )
            {
                int t = p;
                t++;
                if(toupper(string[t]) == 'B' || toupper(string[t]) == 'C' || toupper(string[t]) == 'D' || toupper(string[t]) == 'F' || toupper(string[t]) ==  'G'  || toupper(string[t]) ==  'H'  || toupper(string[t]) == 'J' || toupper(string[t]) ==  'K' || toupper(string[t]) == 'L' || toupper(string[t]) == 'M' || toupper(string[t]) == 'N' || toupper(string[t]) == 'P' || toupper(string[t]) == 'Q' || toupper(string[t]) == 'R' || toupper(string[t]) == 'S' || toupper(string[t]) == 'T' || toupper(string[t]) == 'V' || toupper(string[t]) == 'W' || toupper(string[t]) == 'X' || toupper(string[t]) ==  'Z' )    
                {
                    cons = 1;
                }
            }
        }   
    }
    return cons;
}
