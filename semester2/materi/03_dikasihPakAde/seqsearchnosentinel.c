void seqSearchTanpaSentinel(int array[], int N, int searchKey){
	int i=0;
	
	while( (array[i] != searchKey) && (i < N)){
		i++;
	}
	
	if(array[i] == searchKey)
		printf("Data %d ditemukan pada index %d\n",searchKey,i );
	else
		printf("Data %d tidak ditemukan\n", searchKey );
}
