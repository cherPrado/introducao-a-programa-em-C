#include <stdio.h>

int main()
{
    int qnt, num = 0;
    int cont0 = 0, cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0;
    int cont5 = 0, cont6 = 0, cont7 = 0, cont8 = 0, cont9 = 0;
   
   printf("Quantidade de números a serem lidos: ");
   scanf("%i", &qnt);
   
   while(qnt > 0)
   {
       qnt --;
       
       printf("Número positivo de um único algarismo: ");
       scanf("%i", &num);
       
       switch(num)
       {
            case 0:
                cont0 ++;
                break;
            case 1:
                cont1 ++;
                break;
            case 2:
                cont2 ++;
                break;           
            case 3:
                cont3 ++;
                break;           
            case 4:
                cont4 ++;
                break;
            case 5:
                cont5 ++;
                break;                
            case 6:
                cont6 ++;
                break;                
            case 7:
                cont7 ++;
                break;                
            case 8:
                cont8 ++;
                break;                
            case 9:
                cont9 ++;
                break;                
       }
   }
   
   printf("\nFrequência do número 0: %i", cont0);
   printf("\nFrequência do número 1: %i", cont1);
   printf("\nFrequência do número 2: %i", cont2);
   printf("\nFrequência do número 3: %i", cont3);
   printf("\nFrequência do número 4: %i", cont4);
   printf("\nFrequência do número 5: %i", cont5);
   printf("\nFrequência do número 6: %i", cont6);
   printf("\nFrequência do número 7: %i", cont7);
   printf("\nFrequência do número 8: %i", cont8);
   printf("\nFrequência do número 9: %i", cont9);
   
    return 0;
}
