// sama kek if else tapi ini lebih singkatnya

// If number is odd, print "The number is Odd"
// If number is even, print "The number is Even"

#include <stdio.h>

int main(){
    int num;

    printf("Masukkan angka bilangan");
    scanf("\n %d",&num);

     (num % 2 == 0) ? printf("It's even") : printf("It's Odd");
     return 0;


}