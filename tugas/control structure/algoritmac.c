// 3 How to find area and parimeter of rectangle
// input -> L,B-> Area = l*b ->perimeter 2*(l+b)-> display area and parimeter

#include <stdio.h>

int main(){
    double l,b,area,perimeter;

    printf("Input number for finding area & parimeter of rectangle!");
    printf("\nEnter L number: ");
    scanf("%lf",&l);
    printf("\nEnter B number: ");
    scanf("%lf",&b);

    area = l * b;
    perimeter = 2*(l+b);

    printf("\nArea = %lf",area);
    printf("\nPerimeter = %lf",perimeter);



    return 0;
}
