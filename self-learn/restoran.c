#include <stdio.h>

int main() {
	int paket;
	
	printf("SELAMAT DATANG DI KFC\n");
	printf("=====================\n");
	printf("-Paket 1 \n");
	printf("-paket 2 \n");
	do{
	printf("Silahkan pilih paket : ");
	scanf("%d", &paket);
	
	if(paket == 1){
		printf("\nkamu memilih paket 1");
	}else if(paket == 2){
		printf("\nkamu memilih paket 2");
	}else{
		printf("\nmaaf paket %d tidak tersedia\n\n", paket);
		}
    }
	while (paket>2);
	printf("\n\nTerimakasih...");

return 0;
}