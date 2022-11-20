#include <stdio.h>

struct Coordenada {
   double x;
   double y;
};

int main()
{
   struct Coordenada c1, c2, *c3;
   c3 = &c1;
   
   c1.x = -1;
   c1.y = -1.5;
   
   c2.x = 2.5;
   c2.y = -5;
   
   *c3 = c2;
   // c1 terá mesmo valor que c2
   printf("Coordenadas de c1: (%lf,%lf)\n",c1.x, c1.y);
}
