// 3
//input side length of square say L
// area = L.L
// PERIMETER = 4.L
// Display area,perimeter
// Stop

#include <stdio.h>

int main() {
    double l,parameter,area;

    printf("Enter L number: ");
    scanf("\n %lf",&l);

    area = l + l ;
    printf("\nThe result is = %.2lf",area);

    parameter = 4*l;
    printf("\nThe result is = %.2lf",parameter);

    return 0;
}
