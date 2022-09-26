// 5
// start 
// input sides of triangle A,B,C
// s = (A+B+C)/2.0
// AREA = SQRT (S.(S-A).(S-B).(S-C))
// square root
// PERIMETER =  S1+ S2+ S3
// Stop


#include <stdio.h>
#include <math.h>

int main(){
    double a,b,c,s;
    double area;
    double parimeter;

    printf("Enter A number: ");
    scanf("\n %lf",&a);

    printf("Enter B number: ");
    scanf("\n %lf",&b);

    printf("Enter C number: ");
    scanf("\n %lf",&c);

    s = (a+b+c)/2.0;
    printf("\nS = %.2lf",s);

    area = s*(s-a)*(s-b)*(s-c);
    printf("\nSquare root = %lf",sqrt(area));  // menghitung akar kuadrat dari root 

// PERIMETER =  S1+ S2+ S3
    parimeter = a+b+c;
    printf("\nSum = %lf",parimeter);


    return 0;
}