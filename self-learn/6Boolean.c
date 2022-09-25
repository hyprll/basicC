/*
    >   Greater than
    <   Less than
    ==  Equal to
    >=  Greater than or equal to
    <=  Less than or equal to
    !=  Not equal to

*/
#include <stdio.h>
#include <stdbool.h>

int main(){
   bool value = (5>9);
   printf("\n %d",value);
   
   bool value2 = (5<9);
   printf("\n %d",value2);

   bool value3 = (5<=9);
   printf("\n %d",value3);

   bool value4 = (5>=9);
   printf("\n %d",value4);

   bool value5 = (9==9);
   printf("\n %d",value5);

   bool value6 = (1!=9);
   printf("\n %d",value6);

   printf("\nCOMPARISON BETWEEN VARIABLE");
   int a = 10;
   int b = 12;

   bool hasil = a > b;
   printf("\n %d",hasil);

   printf("\nCOMPARISON BETWEEN VARIABLE & VALUE");
   bool hasilV = a > 12;
   printf("\n %d",hasilV);


    return 0;
}