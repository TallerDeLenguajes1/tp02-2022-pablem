#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define N 5
#define M 7

int main(int argc, char const *argv[])
{
    int i,j;
    int mt[N][M];
    int *p = mt;

    srand((int)time(NULL));
    
    for(i=0; i<N; i++) {
        for(j=0; j<M; j++) {
            *p = 1+rand()%100;
            printf("%d ", *p);
            p++;
            // if(k == i*M)
            //     printf("\n");
        }
        printf("\n");
    }
    return 0;
}
