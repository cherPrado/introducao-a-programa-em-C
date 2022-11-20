#include <stdio.h>

float perimetro(float a, float b, float c);

int main()
{
    float a, b, c, aux;
    
    printf("Digite os três lados do triângulo: ");
    scanf("%f%f%f", &a, &b, &c);
    aux = perimetro(a, b, c);
    
    printf("O perimetro é: %f", aux);
    
    return 0;
}

float perimetro(float a, float b, float c)
{
    float p = a + b + c;
    
    return p;
}




