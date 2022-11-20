#include <stdio.h>
#define TAM 4
//jogo da memoria, inacabado

int main()
{
    int jogo[TAM][TAM];
    int t = 1, cont = 0;
    jogo[0][0] = 1, jogo[0][1] = 5, jogo[0][2] = 1, jogo[0][3] = 8, 
    jogo[1][0] = 2, jogo[1][1] = 6, jogo[1][2] = 3, jogo[1][3] = 5, 
    jogo[2][0] = 3, jogo[2][1] = 8, jogo[2][2] = 7, jogo[2][3] = 6, 
    jogo[3][0] = 4, jogo[3][1] = 7, jogo[3][2] = 2, jogo[3][3] = 4;
    int posicao; 
    int test1; 
    int test2;
    
    printf("\n");
          
    for(int linha = 0; linha < TAM; linha++){
        for(int coluna = 0; coluna < TAM; coluna++){
            cont ++;
            if(cont < 10)
                printf("%i |", cont);
            else
                printf("%i|", cont);
        }
        printf("\n");
    }
    
    do{
        printf("\nDigite a posição da carta: \n");
        scanf("%i", &posicao);
        
        switch(posicao){
            case 1:
                test1 = jogo[0][0];
                break;
            case 2:
                test1 = jogo[0][1];
                break;
            case 3:
                test1 = jogo[0][2];
                break;
            case 4:
                test1 = jogo[0][3];
                break;
            case 5:
                test1 = jogo[1][0];
                break;
            case 6:
                test1 = jogo[1][1];
                break;
            case 7:
                test1 = jogo[1][2];
                break;
            case 8:
                test1 = jogo[1][3];
                break;
            case 9:
                test1 = jogo[2][0];
                break;
            case 10:
                test1 = jogo[2][1];
                break;
            case 11:
                test1 = jogo[2][2];
                break;
            case 12:
                test1 = jogo[2][3];
                break;
            case 13:
                test1 = jogo[3][0];
                break;
            case 14:
                test1 = jogo[3][1];
                break;
            case 15:
                test1 = jogo[3][2];
                break;
            case 16:
                test1 = jogo[3][3];
                break;
        }
        
        if(test2 == test1)
            printf("Cartas iguais");
        else
            printf("Cartas diferentes");
            
        test2 = test1;
        
    }while(t == 1);

    return 0;
}