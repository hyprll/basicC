#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define FILE_NASABAH "nasabah.txt"

void penabung_baru();
void penabung_lama();

int main(int argc, char *argv[]) {
	int mode;
	do{
		printf("Input:\n \n1. Nasabah lama\n2. Nasabah baru \n0. EXIT\n\nInput Data: ");
		mode=getchar();
		if(mode=='1'){
			penabung_lama();
		}else if(mode=='2'){
			penabung_baru();
		}
    }while(mode=='1' || mode=='2');
    return 0;
}

void input_data_tabungan(char no_tabungan[10],int *transaksi, int *nilai_transaksi){
	
	printf("\nmasukkan no tabungan : ");
	scanf("%s",no_tabungan);
	
	printf("\nJenis transaksi(1:setor, 2: tarik) : ");
	scanf("%d",transaksi);
	
	printf("\nNilai transaksi : ");
	scanf("%d",nilai_transaksi);
}

void baca_saldo(char no_tabungan[10],int *nilai_saldo){
	FILE * fp;
	char transaksi[6];
	int *nilai_transaksi_;
	
	fp= fopen(no_tabungan,"r");
	while(!feof(fp)){
		fscanf(fp,"%s %d %d",transaksi,nilai_transaksi_,nilai_saldo);
	    // printf("\nsaldo %d",*nilai_saldo);
	}
	fclose(fp);
	//return(*nilai_saldo);
}

void transaksi_tabungan(char no_tabungan[10],int transaksi, int nilai_saldo, int nilai_transaksi){
	FILE * fp;
	fp= fopen(no_tabungan,"a");
	if(transaksi==1){
		nilai_saldo=nilai_saldo+nilai_transaksi;
		fprintf(fp,"%s %d %d \n","setor",nilai_transaksi,nilai_saldo);
	}
	else if(transaksi==2){
		nilai_saldo=nilai_saldo-nilai_transaksi;
		fprintf(fp,"%s %d %d \n","tarik",nilai_transaksi,nilai_saldo);
	}else {
			system("cls");
			printf("WRONG INPUT !!\n\n");
			printf("press any key...");
			system("pause>nul");
	}
	fclose(fp);
}

void penabung_baru(){
	FILE * fp;
	char nama[50];
	char no_tabungan[10];
	int setor_awal;
	printf("\nMasukkan nama: ");	scanf("%s",nama);
	printf("\nMasukkan no tabungan (10 karakter): "); scanf("%s",no_tabungan);
	printf("\nMasukkan setoran awal: "); scanf("%d",&setor_awal);
	
	fp=fopen(FILE_NASABAH,"a");
	fprintf(fp,"%s %s\n",no_tabungan,nama);
	fclose(fp);
	
	transaksi_tabungan(no_tabungan, 1, 0, setor_awal);	
}
void penabung_lama(){
	FILE * fp;
	char no_tabungan[10];
	char nama[50];
	int transaksi,nilai_transaksi,nilai_saldo;
	
	fp=fopen(FILE_NASABAH,"r");
	while(!feof(fp)){
		fscanf(fp,"%s %s\n",no_tabungan,nama);
		printf("\nNo Tab %s	  nama: %s",no_tabungan,nama);
	}
	fclose(fp);
	
	input_data_tabungan(no_tabungan, &transaksi, &nilai_transaksi);
	printf("Nilai transaksi : %d",nilai_transaksi);
	baca_saldo(no_tabungan,&nilai_saldo);
	printf("\nNilai saldo : %d",nilai_saldo);
	transaksi_tabungan(no_tabungan, transaksi, nilai_saldo, nilai_transaksi);

}
