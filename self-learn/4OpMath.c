#include <stdio.h>

int main(){
    int x = 12;
    int c = 10;
    int i = 11; 
    double b= 12.22;
    double xy = 12.00; // harus pake .00 biar hasilnya dapet

    // PERTAMBAHAN
    double result = b +x;
    printf("\n%.2lf",result);
    printf("\nHasil biasa =  %d",x+8);  
     
    // PEMBAGIAN
    double resultt = xy / 8.00;
    printf("\nPembagian = %.2lf", resultt);

    // MODULUS
    int resultm = c % 2;
    printf("\nhasil modulus = %d",resultm);
    
    // INCREMENT & DECREMENT
    printf("\nHasil Increment = %d",++i);
    printf("\nHasil Decrement = %d",--i);

    // MULTIPLE OPERATOR
    int m = (4*2)+10/5+5;
    printf("\nHasil Multiple = %d",x);


    return 0;

}