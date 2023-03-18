#include <stdio.h>
#include <time.h>

int main(){
    double sum = 0;
    double add = 0;

    time_t begin,end;
    time(&begin);

    int iterations = 1000*1000*800;
    int i;

    for ( i = 0; i < iterations; i++){
        sum += add;
        add /= 2.0;
    }
    
    time(&end);
    time_t elapsed = end - begin;

    printf("Result",sum);
    printf("Time measured:",elapsed);

}