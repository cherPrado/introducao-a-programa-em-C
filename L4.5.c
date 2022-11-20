#include <stdio.h>
#include <math.h>

float area(float a, float b, float c);

int main()
{
    float a, b, c, aux = 0;
    printf("Digite as medidas dos lados de um triângulo: ");
    scanf("%f%f%f", &a, &b, &c);
    aux = area(a, b, c);
    
    printf("Para a=%f, b=%f e c=%f, a área é %f", a, b, c, aux);
    return 0;
}

float area(float a, float b, float c)
{
    float p = 0, s =0, resultado;
    p = a + b + c;
    s = p/2;
    
    resultado =  sqrt(s*(s-a)*(s-b)*(s-c));
    
    return resultado;
}

