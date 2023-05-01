// 4
// NEED UPDATE
// start 
// input radius of circle say R
// Area = 22.0/7 .r.r
// display area,perimeter
// stop

#include <stdio.h>
#include <conio.h>

// #define PI = 3.14

int main() {
   float r,area;
    printf("Enter R number: ");
    scanf("%f", &r);
    area = 22/7*r*r;
    printf("Area of circle : %0.4f\n", area);

    getch();

    return 0;
}