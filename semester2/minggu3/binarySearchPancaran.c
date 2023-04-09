#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void getSortedArrayOfInteger(int **a,long n){
	int * array= (int *) malloc(sizeof(long)*n);	
	long i;
    array[0]=1;
    array[1]=1;
    

   /* Print 5 random numbers from 0 to 49 */
   for( i = 2 ; i < n ; i++ ) {
      array[i]= array[i-1]+array[i-2];
      printf("index [%d] = %d\n",i, array[i] );
   }

   *a=array;
}

void binarry_search_iteratif(int array[], int N, int searchKey)
{
	int n = N;
	int index=-1; // index array mulai dari 0, maka di set -1
	int find = searchKey;
	
	int mid; 
	int low=0;
	int high= n ;
	
	while (low <= high)
	{
		mid =(low+high)/2;
			
		if (find < array[mid] )
		{
				high = mid -1;
		}
		else if (find == array[mid])
		{
			index=mid;
			break;
		}
		else low = mid+1;		
	}
	
	if (index == -1)
	{
		printf("\n baca tidak ditemukan \n");
	}
	else
	{
		printf("data berada pada index ke-%d\n",index);
	}
}

int binarry_search_rekrusif(int a[],int value, int left, int right)
{
	int mid;
	
	
	if (right < left)
	{
		return 0 ;
	}
	mid = ((right-left)/2)+left ;
	if (a[mid] == value) 
	{
		printf("ditemukan di indeks ke-%d ",mid) ;	
	}	
	else if (value < a[mid])
	{
		return binarry_search_rekrusif(a,value,left,mid-1);
	}
	else if (value > a[mid]) 
	{
		return binarry_search_rekrusif(a,value,mid+1,right);
	} 
	else 
	{
		printf ("tidak ditemukan ");
	}	
}

int main (int argc, char *argv[]) 
{
	int *a ;
	long n=95;
	clock_t mulai,akhir;
	double cpu_time_used;
	 
	int low =0;
	int high = n ;
	
	printf("\n generate random array sebanyak %d elemen\n",n);

	mulai=clock();
	getSortedArrayOfInteger(&a,n);
	akhir=clock();
	
	cpu_time_used =((double) (akhir - mulai)) / CLOCKS_PER_SEC;	
	printf(" running time %lf sec.\n",cpu_time_used);

	printf("\n binarry_search_iteratif\n ");

	mulai=clock();	
	binarry_search_iteratif(a,n,13);
	akhir=clock();
	
	cpu_time_used =((double) (akhir - mulai)) / CLOCKS_PER_SEC;	
	printf(" running time %lf sec.\n",cpu_time_used);
	
	printf("*****************************************************");
	
	printf("\n binary_search_rekrusif\n");

	mulai=clock();
	binarry_search_rekrusif(a,13,low,high);
	akhir=clock();
	
	cpu_time_used =((double) (akhir - mulai)) / CLOCKS_PER_SEC;	
	printf(" \n running time %lf sec.\n",cpu_time_used);	

	
	return 0;	
}
