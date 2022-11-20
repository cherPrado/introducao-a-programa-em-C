/*  
 Universidade Federal de Goiás
 Curso: Sistemas de informação
 Professor: André Luiz Moura
 Aluno: Cherlau da Silva Prado Filho
 Questão 1: Calcular raízes de equação de 2º grau
*/
#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, delta, bask, bask2;
    
    scanf("%f %f %f", &a, &b, &c);
    
    delta = pow(b, 2) - (4*a*c);
    
    if(a != 0)
    {
        if(delta < 0){
            printf("Não há raízes reais");
    }else{
        bask  = ( -b + sqrt(delta) ) / ( 2*a );
        bask2 = ( -b - sqrt(delta) ) / ( 2*a );
                
        printf("%f %f", bask, bask2);
        }    
        }else{
            printf("Não é uma equação de segundo grau");
            }
        
    return 0;
}