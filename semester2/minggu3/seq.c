#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[10]={45,32,78,3,98,14,21,40};
	int n=8;
	
	printf("\nSeq search no sentinel\n");
	seqSearchTanpaSentinel(a,n,3);
	seqSearchTanpaSentinel(a,n,99);
	
	printf("\nSeq search with sentinel\n");
	seqSearchDenganSentinel(a,n,3);
	seqSearchDenganSentinel(a,n,99);

	printf("\nSeq search with boolean\n");	
	seqSearchDenganBoolean(a,n,3);
	seqSearchDenganBoolean(a,n,99);
	return 0;
}