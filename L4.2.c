#include <stdio.h>
int funcao(int a, int b, int c);

int main()
{
    int a, b, c, aux;
   
    printf("Digite o valor de a, b e c sendo ""a"" maior que 1: ");
    scanf("%i%i%i", &a, &b, &c);
    aux = funcao(a, b, c);

    if(aux == -1)
        printf("“Não há valores divisíveis por a no intervalo”");
    else
        printf("%i", aux);

    return 0;
}

int funcao(int a, int b, int c)
{
    int i, ajudante = 0, soma = -1;
    for(i = b; i <= c; i++)
    {
        if(i%a == 0){
            soma = soma + i;
            ajudante += 1;
            if(ajudante == 1)
                soma = soma + 1;
            }
        }
    return soma;
}



