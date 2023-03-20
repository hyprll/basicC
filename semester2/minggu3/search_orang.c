#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// Legit Made By: Muhammad Abiyasha Sergio
// NIM: 0102522016
// Class: Informatics 2022

void getRandomArrayOfInteger(int **a,long n){
	int * array= (int *) malloc(sizeof(int)*n+1);	
	long i;
    time_t t;     
    /* Intializes random number generator */
    srand((unsigned) time(&t));

   /* Print 5 random numbers from 0 to 49 */
   for( i = 0 ; i < n ; i++ ) {
      array[i]= rand()%10000;
   }
   *a=array;
}

int seqSearchTanpaSentinel(int *a,int n, int key){
	int i=0;
	
	while ( a[i]!= key && i<n)
		i++;
	if(a[i]==key){
		printf("%d key founded on %d position\n",key,i);
		return i;
	}else{
		printf("%d key cannot be found\n", key);
		return -1;
	}
}

int seqSearchDenganSentinel(int a[],int n, int key){
	int last = a[n + 1];
	a[n + 1] = key;
    int i = 0;
 	
 	while (a[i]!= key)
        i++;
    a[n + 1] = last;
//    if ((i < n + 1) || (a[n + 1] == key)) INCASE NEEDED
    if (i < n + 1)
    	printf("%d is present at index\n",i);
    else
    	printf("index cannot be found");
}

int seqSearchDenganBoolean(int *a,int n, int key){
	typedef enum{false, true} boolean;
	boolean found = false;
    int i;
 	
 	while (!found && i<=n){
    if (a[i] == key)
    	found=true; 	
	else
    	i++;
	}
	if (found)
		printf("%d, is founded at index %d\n",key,i);
	else
		printf("%d, Cannot be found",key);
}

int main(int argc, char *argv[]) {
	int *a ;
	long n=1000*1000*10; // random number 10 million
	clock_t start, stop;
	
	getRandomArrayOfInteger(&a,n);

	printf("==========Search Without Sentinel==========\n\n");
	start = clock();
	seqSearchTanpaSentinel(a,n,3);
	stop = clock();
	printf("%.12f second\n",((double) (stop - start)) / CLOCKS_PER_SEC);
	seqSearchTanpaSentinel(a,n,99);	
			a[n]=99;	
		 
	printf("\n==========Search With Sentinel==========\n\n");
	start = clock();
	seqSearchDenganSentinel(a,n,3);
	stop = clock();
	printf("%.12f second\n",((double) (stop - start)) / CLOCKS_PER_SEC);
	seqSearchDenganSentinel(a,n,99);
			a[n]=99;
	
	printf("\n==========Search With Boolean==========\n\n");
	start = clock();
	seqSearchDenganBoolean(a,n,3);
	stop = clock();
	printf("%.12f second\n",((double) (stop - start)) / CLOCKS_PER_SEC);
	seqSearchDenganBoolean(a,n,99);
			a[n]=99;

	return 0;	
}