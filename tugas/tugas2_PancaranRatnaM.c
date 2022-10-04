#include <stdio.h>

/*
    soal : Write a C program to input two numbers and perform all arithmetic operations.
    How to perform all arithmetic operation between two numbers in C programming.
    C program to find sum, difference, product, quotient and modulus of two given numbers.
*/

int main()  
{
    // declare variables
    int first_number;
    int second_number;
    int sum;
    int difference;
    int product;
    int quotient; 
    int modulus;

    // input
    printf("Please input first number =");
    scanf("\n %d",&first_number);
    printf("Please input second number =");
    scanf("\n %d",&second_number);

    // CREATE ARITHMETIC

    // SUM ARITHMETIC
    sum = first_number + second_number;
    printf("SUM : %d\n", sum);

    // DIFFERENCE ARITHMETIC
    difference = first_number - second_number;
    printf("DIFFERENCE : %d\n", difference);

    // PRODUCT ARITHMETIC
    product = first_number * second_number;
    printf("PRODUCT : %d\n", product);

    // QUOTIENT ARITHMETIC
    quotient = first_number / second_number;
    printf("QUOTIENT : %d\n", quotient);

    // MODULUS ARITHMETIC
    modulus = first_number % second_number;
    printf("MODULUS : %d\n", modulus);

    return (0); 
}