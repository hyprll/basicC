#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void getSortedArrayOfInteger(long **a,long n){
	long * array= (int *) malloc(sizeof(long)*n);	
	long i;
    array[0]=1;
    array[1]=1;

   /* Print 5 random numbers from 0 to 49 */
   for( i = 2 ; i < n ; i++ ) {
      array[i]= array[i-1]+array[i-2];
   }
   *a=array;
}

