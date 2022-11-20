#include <stdio.h>
#include <string.h>
#include <ctype.h>

void func(char string[], char c1, char c2);

int main()
{
   char string[200];
   char c1;
   char c2;
   
   printf("\t\t\tSubstituição de caractere na string\n");
   
   printf("\n Digite a string: ");
   scanf("%[^\n]", string);
   
   printf("\n Digite o caracter atual: ");
   scanf("%*c%c", &c1);
   
   printf("\n Digite o caracter atual: ");
   scanf("%*c%c", &c2);
   
   func(string, c1, c2);
   
   printf("\n String modificada: %s", string);
   
    return 0;
}

void func(char string[], char c1, char c2)
{
    for(int i = 0; i <= strlen(string); i++)
    {
        if(tolower(string[i]) == tolower(c1))
        {
            string[i] = c2;
        }
    }
}
