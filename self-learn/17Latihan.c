/*
Create a program that computes the result of a number raised to the power of the square root of a number. 
So first Take input from user
Compute the square root of a number using sqrt()
Compute the power of the number raised to the power of its square root
Print the result

*/


#include <stdio.h>
#include <math.h>

int main(){
    double num;

    printf("Masukkan nomor anda = ");
    scanf("%f", &num);

    double root = sqrt(num);
    double power= pow(num,root);

    printf("The root is = %.2lf  \n",root);
    printf("The power is = %.2lf \n",power);
    printf("The result is: %.2lf", power);

    return 0;
}
