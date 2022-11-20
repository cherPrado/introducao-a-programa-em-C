#include <stdio.h>

struct horario{
    int horas;
    int minutos;
    int segundos;
};
    
int main()
{
    struct horario teste(struct horario x);
    
    struct horario{
        int horas;
        int minutos;
        int segundos;
    };
    
    struct horario agora;
    agora.horas = 10;
    agora.minutos = 42;
    agora.segundos = 58;
    
    

    return 0;
}

struct horario teste(struct horario x)
{
    
    return x;
}