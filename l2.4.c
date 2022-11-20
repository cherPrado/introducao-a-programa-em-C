/*  
 Universidade Federal de Goiás
 Curso: Sistemas de informação
 Professor: André Luiz Moura
 Aluno: Cherlau da Silva Prado Filho
 Questão 4: Ordenar 3 números crescentemente
*/
#include <stdio.h>

int main() 
{
  int num1, num2, num3;   
  
  scanf("%i %i %i", &num1, &num2, &num3);
  
    if (num1 <= num2 && num2 <= num3){
        printf("%i %i %i", num1, num2, num3);
        }
        else if (num1 <= num3 && num3 <= num2){
            printf("%i %i %i", num1, num3, num2);
            }
            else if (num2 <= num1 && num1 <= num3){
                printf("%i %i %i", num2, num1, num3);
                }
                else if (num2 <= num3 && num3 <= num1){
                    printf("%i %i %i", num2, num3, num1);
                    }
                    else if (num3 <= num1 && num1 <= num2){
                        printf("%i %i %i", num3, num1, num2);
                        }
                        else{
                            printf("%i %i %i", num3, num2, num1);
                            }

  return 0;
}
