#include <stdio.h>

//Convert Temperature from Fahrenheit to Celsius

int main(){
    double farenheit,celcius;


    printf("Masukkan Temperatur Farenheit = ");
    scanf("\n %lf",&farenheit);

    celcius = 0.56*(farenheit-32);
    printf("\nConvert = %lf",celcius);
  
 return 0;

}