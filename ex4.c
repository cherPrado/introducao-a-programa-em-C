#include <stdio.h>
#include <conio.h>
//Leia um vetor de 10 posições e verifique se existem valores iguais e os escreva

int main(){
    
    int a=0,i,j,w,flag;
    int vetor[10],iguais[10];
  
    for(i=0;i<10;i++){
        
        printf("Entre com o elemento[ %d ] : ",i+1);
        scanf("%d",&vetor[i]);
        
    }
    for(i=0; i<10; i++){
        
        for(j=0; j<10; j++){
            
            flag = 0;
            
            if(vetor[i] == vetor[j] && i != j ){
                
                for(w=0; w<10; w++){
                    
                    if(iguais[w] == vetor[j])/* se o numero já estiver nesse vetor de iguais */
                    
                        flag=1;
                }
                
                if(flag==0){
                    
                    iguais[a]=vetor[i];/* para escrever o numero apenas uma vez */
                    
                    a++;
                }
                
            }
        }
     }
     
     for(i=0; i<a; i++){
        printf("%d ",iguais[i]);
        
     }
     getch();
     return 0;
  
}
