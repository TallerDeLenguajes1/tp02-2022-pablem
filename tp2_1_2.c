#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define N 20

int main(int argc, char const *argv[])
{
    srand((int)time(NULL));

    double vt[N];
    double *p = vt;

    for(int i=0; i<N; i++) {
        
        *p = rand()%100 + 1;
        printf("%f ", *p);
        p++;
    }

    return 0;
}