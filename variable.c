#include <stdio.h>

//How to perform all arithmetic operation between two numbers in C programming. C program to find sum, difference, product, quotient and modulus of two given numbers.
int firstNumber = 10;
int number = 5;
int sum,diffrence,product,quotitent,modulus = 0;


int main(){
    sum = firstNumber + number;
    diffrence = firstNumber - number;
    product = firstNumber * number;
    quotitent = firstNumber / number;
    modulus = firstNumber % number;

    printf("Hasil Sum = %d\n",sum);
    printf("Hasil Diffrence = %d\n",diffrence);
    printf("Hasil Product = %d\n",product);
    printf("Hasil Quotitent = %d\n",quotitent);
    printf("Hasil Modulus = %d\n",modulus);

    return 0; 

}
