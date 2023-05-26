#include <stdio.h>
# define n  7

int main(int argc, char const *argv[]){
    int i,k, x ;
    int A[] ={1, 4, 6, 8, 2, 5, 9};

    printf("print sebelum sorting: \n");
    for(i = 0 ; i< n-1; i++){
        printf("%d", A[i]);
    }
    printf("\n");

    for(k = 1; k < n; k++){
        x = A[k];
        i = k-1;

        while (i >= 0 && A[i] > x){
           A[i + 1] = A[i];
            i--;
        }
        A[i + 1] = x;
    }

    // tampil sesudah sorting
    printf("Sesudah Sorting \n");
    for(i=0; i < n-1; i++)
        printf("%d", A[i]);
    return 0;
}
