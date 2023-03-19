#include <stdio.h>

int main(){
	int nasabah, saldo, jns, nilai, setor, nomor;
	
	printf("Selamat datang di BANK FAATHIR\n");
	printf("==============================\n\n");
	printf("1. Nasabah Baru\n");
	printf("2. Nasabah Lama\n");
	printf("3. Exit\n\n");
	printf("Pilihlah menu di atas : ");
	scanf("%d", &nasabah);
	
	if(nasabah == 1){
		printf("\nAnda memilih Nasabah Baru\n");
			do{
			printf("\n\nSilahkan masukkan data tabungan berikut\n");
				printf("\n-Nomor tabungan anda : ");
				scanf("%d", &nomor);
				printf("\nJenis transaksi 1/2\n");
					printf("1. Tunai\n");
					printf("2. Non tunai\n");
				printf("-Pilih Jenis Transaksi : ");
				scanf("%d", &jns);
				printf("\n-Nilai Transaksi(RP) : ");
				scanf("%d", &nilai );
			printf("\nNomor tabungan anda : %d\n", nomor);
		if(jns==1){
				printf("Jenis Transaksi : Tunai\n");
			}else if(jns==2){
				printf("Jenis Transaksi : Non Tunai\n");
			}else{
				printf("Jenis transaksi tidak tersedia\n");
			}
		printf("Nilai transaksi anda : %d", nilai);
		}while(jns>2);
		
	}else if(nasabah == 2){
		printf("\nAnda memilih Nasabah Lama\n");
	}else if(nasabah == 3){
		printf("\nTerimakasih, Sampai jumpa kembali....");
	}else{
		printf("\nMaaf menu tidak tersedia\n");
	}
return 0;
}