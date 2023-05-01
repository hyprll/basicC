// Write a C program to read elements in an array and find the sum of array elements.
// C program to find sum of elements of the array.
// How to add elements of an array using for loop in C programming. 

#include <stdio.h>

int main(){
 int i, Size, a[10];
 int j = 0, Addition = 0;
  
 printf("Masukkan Panjang Array: ");
 scanf("%d", &Size);
 
 printf("\nMasukkan elemen Array\n");
 for(i = 0; i < Size; i++){
      scanf("%d", &a[i]);
  }
  
 while(j < Size ){
      Addition = Addition + a[j]; 
      j++; 
  }
  
 printf("Sum of All Elements in an Array = %d ", Addition);
 return (0);
}