#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define N 6

struct {
    int velocidad;//entre 1 y 3 Gherz
    int anio;//entre 2000 y 2017
    int cantidad;//entre 1 y 4
    char *tipo_cpu; //valores del arreglo tipos
} typedef compu;

void mostrarK(compu arre[N], int k); //autotarea: implementar con aritmética de punteros

void presentarPCs(compu arre[N]);
void pcVieja(compu arre[N]);
void pcVeloz(compu arre[N]);

int main(int argc, char const *argv[])
{
    srand((int)time(NULL));
    rand();

    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    compu arre[N];

    printf("\n");

    for(int i; i < N; i++) {
        arre[i].velocidad = rand() % 3 + 1; //de 0 a 2 y le sumo 1
        arre[i].anio = rand() % 6 + 2017;
        arre[i].cantidad = rand() % 4 + 1;
        arre[i].tipo_cpu = &tipos[rand()%6][0];
    }
    
    presentarPCs(arre);
    pcVieja(arre);
    pcVeloz(arre);

    return 0;
}

void mostrarK(compu arre[N], int k)
{
    printf("PC%d:\n", k+1);
    printf("----------------------------------\n");
    printf("Velocidad de procesamiento: %d GHz\n", arre[k].velocidad);
    printf("Año de fabricación: %d\n", arre[k].anio);
    printf("Tipo de procesador: %s\n", arre[k].tipo_cpu);
    printf("Cantidad de núcleos: %d\n\n", arre[k].cantidad);
}

void presentarPCs(compu arre[N])
{
    printf("\t");

    for (int i = 0; i < N; i++) {
        mostrarK(arre, i);
    }
}

void pcVieja(compu arre[N])
{
    int menorAnio = arre[0].anio;
    int x = 0;

    for (int i = 0; i < N; i++) {
        
        if(arre[i].anio < menorAnio) {
            menorAnio = arre[i].anio;
            x = i;
        }
    }
    printf("Compu más vieja: ");
    mostrarK(arre, x);
}

void pcVeloz(compu arre[N])
{
    int mayVelocidad = arre[0].velocidad;
    int x = 0;

    for (int i = 0; i < N; i++) {
        
        if(arre[i].velocidad > mayVelocidad) {
            mayVelocidad = arre[i].velocidad;
            x = i;
        }
    }
    printf("Compu más veloz: ");
    mostrarK(arre, x);
}