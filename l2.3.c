/*  
 Universidade Federal de Goiás
 Curso: Sistemas de informação
 Professor: André Luiz Moura
 Aluno: Cherlau da Silva Prado Filho
 Questão 3: Verificar peso ideal
*/
#include <stdio.h>
#include <math.h>

int main(){
    float massa, altura, IMC;
    
    printf("Digite sua massa: ");
    scanf("%f", &massa);
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    
    IMC = massa / pow(altura, 2);
    
    if(IMC < 18.5){
        printf("Magreza");
        }else if(IMC >= 18.5 && IMC <= 24.9){
            printf("Normal");
            }else if(IMC >= 24.9 && IMC <= 30){
                printf("Sobrepeso");
                }else{
                    printf("Obesidade");
                    }
    
    return 0;
}
