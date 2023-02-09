#include <stdio.h>

// menggunakan iteratif
int fact_iteratif(int n){
    int i, f=i;

    for(i=1; i<=n; i++)
        f=f*i;
    return f;
}

/*
    RUMUS
        n = 0 ==> 0! = 1
        n > 0 ==> n! = n* (n-1)
*/

int fact_rekursive(int n){
    if(n==0)
        return 1;
    else if (n>0){
        return n* fact_rekursive
    }
}

void main(){
    printf("Fact recursive dari 3 = %d\n", fact_rekursive(3));
    printf("Fact recursive dari 3 = %d\n", fact_rekursive(3)); 
}