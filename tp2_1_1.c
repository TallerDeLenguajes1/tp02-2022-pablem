#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#include<time.h>

#define N 20

int main(int argc, char const *argv[])
{
    double vt[N];
    // srand((int)time(NULL));

    for(int i = 0; i < N; i++) {

        vt[i] = rand()%100 + 1;
        printf("%f ", vt[i]);
    }

    return 0;
}