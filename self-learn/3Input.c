#include <stdio.h>

int main(){
    int age;
    // double input
    double number;
    char alphabet;
    // & buat nyimpen di varibale dara misal var &data berarti nyimpen di data

    printf("Enter input value: ");
    scanf("%d",&age);
    printf("Age = %d\n",age);

//
    printf("Enter input values number and alphabet: ");
    scanf("%lf %c", &number, &alphabet);
  
    printf("Number: %lf", number);
    printf("\nCharacter: %c", alphabet);


    return 0;
}