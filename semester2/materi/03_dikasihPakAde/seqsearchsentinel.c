void seqSearchDenganSentinel(int array[], int N, int searchKey){
	int i=0;
	array[N]=searchKey;
	while( (array[i] != searchKey) ){
		i++;
	}
	
	if(i<N)
		printf("Data %d ditemukan pada index %d\n",searchKey,i );
	else
		printf("Data %d tidak ditemukan\n", searchKey );
}
