#include <stdio.h>
#include <string.h>
#include <strings.h>

int main()
{
    int n = 5, i;
    char c = '@';
    float pi = 3.1415;
    int vetNum[5] = {1, 2, 3, 4, 5};
    char texto1[100] = "HOJE choveu muito mesmo EM GOIANIA AAA";


    for(i = 0; texto1[i] != '\0'; ++i ){

        if(islower(texto1[i])) {

        texto1[i] = toupper(texto1[i]);
        }else
            texto1[i] = tolower(texto1[i]);
        }

    printf("%s", texto1);

    return 0;
}