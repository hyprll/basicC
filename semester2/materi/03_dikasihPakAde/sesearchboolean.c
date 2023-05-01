void seqSearchDenganBoolean(int array[], int N, int searchKey){
	int i=0;
	int ditemukan=0; //False dalam C lang
	while( !ditemukan && (i < N)){
		if(array[i] == searchKey)
			ditemukan=1;
		else
			i++;
	}
	
	if(ditemukan)
		printf("Data %d ditemukan pada index %d\n",searchKey,i );
	else
		printf("Data %d tidak ditemukan\n", searchKey );
}
