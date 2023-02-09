#include <stdio.h>

int iteratif(int x, int n) {
    return x * n;
}

int main() {
    double x, n;
    int result_iteratif;

    printf("Enter variabel x : ");
    scanf("%lf", &x);

    printf("Enter variabel n : ");
    scanf("%lf", &n);

    result_iteratif = iteratif(x, n);

    printf("Hasil exponen dengan cara iteratif : %d", result_iteratif);    

    return 0;
}