#include <stdio.h>

int main(){
 int i, Size, Addition = 0, a[10];

 printf("Masukkan Panjang Array: ");
 scanf("%d", &Size);
 
 printf("\nInput Elements : ");

 for(i = 0; i < Size; i++){
      scanf("%d", &a[i]);
      Addition += a[i]; 
  }

  
 printf("Sum of All Elements in an Array = %d ", Addition);
 return (0);
}