#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void getRandomArrayOfInteger(int **a,long n){
	int * array= (int *) malloc(sizeof(int)*n);	
	long i;
    time_t t;     
    /* Intializes random number generator */
    srand((unsigned) time(&t));

   /* Print 5 random numbers from 0 to 49 */
   for( i = 0 ; i < n ; i++ ) {
      array[i]= rand()%1;
   }
   *a=array;
}

int main(int argc, char *argv[]) {
	int *a ;
	long n=1000*1000*500*1;
	clock_t mulai,akhir;
    double cpu_time_used;	
    
	printf("\ngenerate random array sebanyak %ld elemen\n",n);
//--------------------------------	
	mulai=clock();
	getRandomArrayOfInteger(&a,n);
	akhir=clock();
//--------------------------------	    
	cpu_time_used =((double) (akhir - mulai)) / CLOCKS_PER_SEC;	
	printf(" running time %lf sec.\n",cpu_time_used);	

	printf("\nSeq search no sentinel\n");
//--------------------------------	
	mulai=clock(); 
	seqSearchTanpaSentinel(a,n,3);
	seqSearchTanpaSentinel(a,n,99);	
    akhir=clock();
//--------------------------------	    
	cpu_time_used =((double) (akhir - mulai)) / CLOCKS_PER_SEC;	
	printf(" running time %lf sec.\n",cpu_time_used);	
		
		
	printf("\nSeq search with sentinel\n");
//--------------------------------		
	mulai=clock(); 
	seqSearchDenganSentinel(a,n,3);
	seqSearchDenganSentinel(a,n,99);
    akhir=clock();
//--------------------------------	
	cpu_time_used =((double) (akhir - mulai)) / CLOCKS_PER_SEC;	
	printf(" running time %lf sec\n",cpu_time_used);	
	
	
	printf("\nSeq search with boolean\n");	
//--------------------------------		
	mulai=clock(); 
	seqSearchDenganBoolean(a,n,3);
	seqSearchDenganBoolean(a,n,99);
    akhir=clock();
//--------------------------------	
	cpu_time_used =((double) (akhir - mulai)) / CLOCKS_PER_SEC;	
	printf(" running time %lf sec.\n",cpu_time_used);	
	
	return 0;
}
