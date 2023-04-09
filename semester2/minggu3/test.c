#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void getRandomArrayOfInteger(int **a,long n){
	int * array= (int *) malloc(sizeof(int));	
	long i;
    time_t t;     
    array[0]=1;
    array[1]=1;
    /* Intializes random number generator */
    srand((unsigned) time(&t));

   /* Print 5 random numbers from 0 to 49 */
   for( i = 2 ; i < n ; i++ ) {
      array[i]= array[i-1]+array[i-2];
   }
   *a=array;
}

int binarySearch(int a[], int value, int left, int right){
	if (right < left) {
		int mid = left + (right-left)/2;
	if (a[mid] = value)
		return mid;
	if (value < a[mid])
		return binarySearch(a, value, left, mid - 1);
		
		return binarySearch(a, value, mid + 1, right);
	}	
}

int main() {
	int *a ;
	long n=1000*1000*10; // random number 10 million
	int value;
//  int value = 8000000; kalo hasilnya 0 ganti sama yang ini dan ubah "a" menjadi value karena terkadang hasil array menjadi 0
	int index = binarySearch(a, value, 0, n - 1);
	
	clock_t start, stop;
	
//	getRandomArrayOfInteger(&a,index);
	
	start = clock();

	if (index == -1){
    printf("Data tidak ditemukan\n");
 	}
	else{
    printf("Angka %d ditemukan pada index %d\n",a , index);
    stop = clock();
	printf("%.12f second\n",((double) (stop - start)) / CLOCKS_PER_SEC);
	}
	return 0;	
}