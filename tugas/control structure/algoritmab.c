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
    printf("The result is = \n %.2lf",area);

    return 0;
}
