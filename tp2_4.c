#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define N 6

struct compu{
    int velocidad;//entre 1 y 3 Gherz
    int anio;//entre 2000 y 2017
    int cantidad;//entre 1 y 4
    char *tipo_cpu; //valores del arreglo tipos
};

int main(int argc, char const *argv[])
{
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};

    struct compu array[N];

    for(int i; i<N; i++) {
        array[i].velocidad = rand() % 3 + 1;
        array[i].anio = rand() % 200 + 1;;
        array[i].cantidad = rand() % 4 + 1;
        // array[i].tipo_cpu = tipos[1];
    }
       
    return 0;
}
