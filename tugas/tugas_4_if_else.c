#include <stdio.h>

int main(void)  
{
    double result, hours_worked, base_hourly_wage = 4500000;

    printf("Enter Hours Worked : ");
    scanf("%lf", &hours_worked);

    if( (int) hours_worked < 40){
        result = base_hourly_wage;
    } else if( (int) hours_worked > 40 && hours_worked < 60){
        result = base_hourly_wage * 1.5;
    } else if  ( (int) hours_worked > 60 && hours_worked < 80){
        result = base_hourly_wage * 2;
    }

    printf("Your Salary : %.0lf", result);

    return 0; 
} 