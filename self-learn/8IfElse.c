#include <stdio.h>


int main(){
    // please vote if u'r 17 yo
    int age;

    printf("Enter your age rn!");
    scanf("%d",age);

    if(age <= 17){
        printf("You are aligible to vote");
    }else{
        printf("You are not allowed");
    }

/*
Q. Can you create a program to check whether a number is positive or negative or 0?

If number is positive, print "The number is positive"
If number is negative, print "The number is negative"
(and) If number is 0, print "The number is 0"

*/
    double num;

    printf("\n Enter a number!");
    scanf("%lf",&num);

    if(num > 0){
        printf(" You are positive");
    }else if(num < 0){
        printf(" You are negative");
    }else{
        printf(" You are zero");
    }

    return 0;
}