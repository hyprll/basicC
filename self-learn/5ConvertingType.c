#include <stdio.h>

// pokoknya klo mau konversi tinggal tulis type apa yang mau dikonversikan
// higer data type long double
        /*double
        float
        long
        int
        short
        char */

int main(){
    int x =10;
    char b = 'a';
    double c = 5.11;

    int result = x + b; // bakal ngaco outputnya
    printf("\n Hasil convertnya = %d",result);
    
    // DOUBLE TO INT
    double resultD = c + x; 
    printf("\n Hasil convertnya = %lf",resultD); 

    //CONVERT DATA TYPE TO INT
    double d = 5.67;
    int bc = 9;

    double resultT = (int)d + bc;
    printf("\n %lf", resultT);

    // value of variable convert to int 
    double z = 5.67;
    int y = 9;

    int hasil = (int)z + y;
    printf("%d", hasil);
 

    return 0;
}