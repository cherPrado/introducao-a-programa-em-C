#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int c, n;
    
    scanf("%i %i", &c, &n);
    char linhas[n];
    
    char atual[c];
    scanf("%[^\n]", atual);

    char novo[c];
    scanf("%[^\n]", novo);    
    
    
    while(scanf("%s", linhas) != EOF){
        
         for(int i = 0; i <= strlen(linhas); i++)
        {
            for(int j = 0; j <= c; i++){
                if(tolower(linhas[i]) == tolower(atual[j]))
                {
                    linhas[i] = novo[j];
                }
            }
        }
    }

    return 0;
}
