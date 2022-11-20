/*  
 Universidade Federal de Goiás
 Curso: Sistemas de informação
 Professor: André Luiz Moura
 Aluno: Cherlau da Silva Prado Filho
 Questão 2: Definir eleitorado brasileiro
*/
#include <stdio.h>

int main(){
    
    int idade;
    
    scanf("%i", &idade);
    
    if(idade >= 16 && idade <= 17 || idade > 65){
        printf("Eleitor facultativo");
            }else if(idade < 16 ){
                printf("Não eleitor");
                    }else{
                        printf("Eleitor obrigatório");
    }
    
    return 0;
}

