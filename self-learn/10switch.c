#include <stdio.h>

//PROGRAMMING TASK
/*
    If number is 1, print January
    If number is 2, print February
    If number is 3, print March, and so on.
*/

int main(){
    int number;
    
    printf("Enter a number for representing a month 1-4");
    scanf("\n%d",&number);

    switch (number){
    case 1: 
        printf("January");
        break;
    case 2: 
        printf("February");
        break;
    case 3: 
        printf("March");
        break;
    case 4: 
        printf("May");
        break;
    
    default:
            printf("Input number between 1-4 only");
        break;
    }
    return 0;
}