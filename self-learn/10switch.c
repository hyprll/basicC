#include <stdio.h>

//PROGRAMMING TASK
/*
    If number is 1, print January
    If number is 2, print February
    If number is 3, print March, and so on.
*/

int main(){
    int number;
    
    printf("\nEnter a number for representing a month 1-4");
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
            printf("\nInput number between 1-4 only");
        break;
    }

    printf("\nSWITCH WITH MULTIPLE CASE");

    int num;

    printf("Enter a number between 1-7");
    scanf("\n %d",&num);

    switch (num){
    case 2:
    case 3:
    case 4:
    case 5:
        printf("Weekday");
        break;
    case 1:
    case 6:
        printf("Sunday");
        break;
    
    default:
        printf("INVALID INPUT");
        break;
    }


    return 0;
}