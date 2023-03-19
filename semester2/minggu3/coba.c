#include <stdio.h>
#include <stdlib.h> 
#include <time.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void getRandomArrayOfInteger(int **a,long n);
void seqSearchDenganBoolean(int array[], int N, int searchkey);
void seqSearchDenganSentinel(int array[],int N, int searchkey);
void seqSearchTanpaSentinel(int array[], int N, int searchkey);


void getRandomArrayOfInteger(int **a,long n){
    // malloc => menyimpan data selama program berjalan
	int * array= (int *) malloc(sizeof(int)*n);	
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

int main(int argc, char *argv[]){
	int *a;  
	long n=100*100*10;   
	
	getRandomArrayOfInteger(&a,n);   
	printf("\nSeq search no sentinel\n");	
	seqSearchTanpaSentinel(a,n,10);
	seqSearchTanpaSentinel(a,n,99);
			
	printf("\nSeq search with sentinel\n");
	seqSearchDenganSentinel(a,n,10);
	seqSearchDenganSentinel(a,n,99);
	
	
	printf("\nSeq search with boolean\n");	
	seqSearchDenganBoolean(a,n,10);
	seqSearchDenganBoolean(a,n,99);                                     
	return 0;
}  

void seqSearchDenganBoolean(int array[], int N, int searchkey){
	int i=0;
	int ditemukan=0; //false dalam C 
	
	while (!ditemukan && (i<N)){
		if(array[i] == searchkey){
			ditemukan=1;
		}else{
			i++;
		}	
	}
		 if(ditemukan==1){
			printf("data %d ditemukan  pada index %d",searchkey,i);
		 }else{
			printf("data %d tidak ditemukan\n", searchkey);		
		}
	
}                                                                     

void seqSearchTanpaSentinel(int array[], int N, int searchkey)
{
	int i= 0;
	
	while ((array[i] != searchkey ) && (i< N))
	{
		i++ ;
	}
	
	if (array[i] == searchkey)
	{
		printf("data %d ditemukan pada index %d\n",searchkey,i);
	}
		
	else 
	{
		printf("data %d tidak ditemukan\n",searchkey);
	}

}

void seqSearchDenganSentinel(int array[],int N, int searchkey)
{
	int i=0;
	array[N]=searchkey;
	while((array[i]!= searchkey))
	{
		i++;
	}
	if(i<N)
	{
		printf("data %d ditemukan pada index %d\n", searchkey,i);
	}
		
	else
	{
		printf("data %d tidak ditemukan\n", searchkey);
	}
}