#include <stdio.h>

int main() {
    double n;

    printf("Enter Variabel N : ");
    scanf("%lf", &n);

    for( int i=1; i <= n; i++){
        if ( i % 2 == 0)
        {
            printf("Nilai Genap Dari Variable N : %i\n", i);
        } else {
            printf("Nilai Ganjil Dari Variable N : %i\n", i);
        }
    }

    return 0;
}