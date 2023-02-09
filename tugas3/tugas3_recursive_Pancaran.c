#include <stdio.h>

int rekursif(int x, int n);

int main() {
    double x, n;
    int result_rekursif;

    printf("Enter variabel x : ");
    scanf("%lf", &x);

    printf("Enter variabel n : ");
    scanf("%lf", &n);

    result_rekursif = rekursif(x, n);
    
    printf("Hasil exponen dengan cara rekursif : %d", result_rekursif);    

    return 0;
}

int rekursif(int x, int n) {
    return x * n;
}