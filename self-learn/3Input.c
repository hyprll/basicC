#include <stdio.h>

int main(){
    int age;
    // double input
    double number;
    char alphabet;

    printf("Enter input value: ");
    scanf("%d",&age);
    printf("Age = %d\n",age);

    printf("Enter double value :");
    scanf("%lf",&number);
    printf("Number = %d \n",number);

    printf("Enter character value :");
    scanf("\n%c",&alphabet);
    printf("Alphabet = %c \n",alphabet);


    return 0;
}