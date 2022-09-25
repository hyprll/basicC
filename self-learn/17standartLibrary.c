#include <stdio.h>
#include <math.h>

int main(){

    int num = 10;
    printf("Square root %lf\n",sqrt(num));  // menghitung akar kuadrat dari root 
    printf("Cube root %lf\n",cbrt(num)); // menghitung ke kubik

    double a = 10;
    double b = 2;
    double result = pow(a,b);
    printf("Pow %lf\n",result); // akar pangkat 

    double c = 20;
    printf("sin = %.2lf",sin(c));
    printf("cos = %.2lf",cos(c));
    printf("tan = %.2lf",tan(c));
    printf("log = %.2lf",log(c));
    
    return 0;
}