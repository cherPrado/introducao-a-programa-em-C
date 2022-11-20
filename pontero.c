/*#include <stdio.h>
#include <conio.h>

//int main()
//{
   /* ponteiro, alocação de memoria e depois vai vir estruct, arquivos, recurção
   
   biblioteca conio.h  >>> gotoxy(linha, coluna), printf; impressão da msg
*/

#include <stdio.h>
#define MAX 3

int main(){
    int mat1[MAX][MAX];
    int i, j, n, n2;
    
    printf("Linhas: ");
    scanf("%d", &n);
    
    printf("Colunas: ");
    scanf("%d", &n2);
    
    printf("Lendo dados da matriz 1, linha por linha\n");
    
    for(i=0; i<n; i++){
        
        for(j=0; j<n2; j++){
            printf("valor da linha: %d, colune %d: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("%-5.0lf"); // alinhou a esquerda
    
    printf("\n");

    for(i=0; i<n; i++){
        for(j=0; j<n2; j++){
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }

    return 0;
}
/*
declaração
int main(){
int i,j,k;
int v1[5] = {1,2,3,4,5};
int v2[2][3] = { {1,2,3}, {4,5,6}};  >>>> = {1,2,3,4,5,6} // forma simplificada
= { 1, 2, 3
    3, 4, 5} 
int v3[2][3][4 profundidade da coluna, n de elemtentos] = 
{
{ {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} },    linha 0
{ {0, 0, 0, 0}, {5, 6, 7, 8}, {0, 0, 0, 0} }        linha 4
};  *coluna*     *coluna*       *coluna*


if( l ==c)
    printf("%5.0f")
    else
        printf("%5s, " "); <<<<
    
    
    if( l == c)
    
    imprima só se a coluna ser maior que a linha  if( c > l )
    
    exFix
    
    imprimir valores, acima da dp, abaixo da dp, sobre a DS dps abaixo e acima
    
    ******ver alocação de memoria em matrix dinamica
    DIagonal secundaria pegar o ultimo indice da coluna e o primeiro indice da linha*/
