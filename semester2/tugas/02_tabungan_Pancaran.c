#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #include <conio.h>

#define FILE_NASABAH "nasabah.txt"
#define MAX_LENGTH 100

void nasabah_baru();
void transaksi();
void searchByNoRekeningPrintNama();

int main(int argc, char *argv[]) {
	int mode;
	do{
		printf("\n\n || Nasabah Baru? ||");
		printf("\n\n ===================  \n\n" );
		printf("\n |1. Ya  \n |2. Tidak  \n |3. Info Nasabah \n |0. exit aplikasi\n\n => input anda: ");
		mode=getchar();
		if(mode=='1'){
			nasabah_baru();
		}
		else if(mode=='2'){
			transaksi();
		}
		else if(mode=='3'){
			searchByNoRekeningPrintNama();
		}

		
	}while(mode=='1' || mode=='2' || mode=='3' );
	return 0;
}

void simpan_data_nasabah(char no_rekening[10], char nama[]){
	FILE * fp;
	// 
	fp= fopen(FILE_NASABAH,"a");
	fprintf(fp,"%s %s \n",no_rekening,nama);
	fclose(fp);

	fp= fopen(no_rekening,"a");
	fprintf(fp,"%12s %10d %12d \n","Saldo Baru\t",0,0);
	fclose(fp);
}
int baca_saldo_akhir(char no_rekening[10]){
	FILE * fp;
	char transaksi[12];
	int nilai,saldo,saldo_save;
	fp= fopen(no_rekening,"r");
	printf("\n");

	int jumlah;
	while((jumlah = fscanf(fp, "%s %d %d", transaksi, &nilai, &saldo)) != -1 && jumlah != 0){
		printf("%s %d %d   jumlah data %d\n",transaksi,nilai,saldo,jumlah);
		saldo_save=saldo;
	}
	printf("EOF %d  %d",jumlah,EOF);
	fclose(fp);
	return saldo_save;
}

void simpan_saldo_akhir(char no_rekening[10], int setor_kah, int nilai, int saldo){
	FILE * fp;
	fp= fopen(no_rekening,"a");
	if (setor_kah){
		saldo=saldo+nilai;
		fprintf(fp,"%12s %10d %12d \n","Setor",nilai,saldo);
	} else{
		saldo=saldo -nilai;
		fprintf(fp,"%12s %10d %12d \n","Tarik",nilai,saldo);
	}
	
	fclose(fp);
}
void nasabah_baru(){
	char nama[50];
	char no_rekening[10];
	int nilai;
	
	printf("\n\nMasukkan nama : ");
	scanf("%s",nama);
	
	printf("\nMasukkan no rekening baru (max 10 char) : ");
	scanf("%s",no_rekening);

	simpan_data_nasabah( no_rekening,  nama);	
	
	printf("\nNilai setor awal : ");
	scanf("%d",&nilai);
	
	simpan_saldo_akhir( no_rekening,  1,  nilai,  0);
}
void transaksi(){
	int nilai,setor_kah,saldo;
	char mode;
	char no_rekening[10];

 	printf("\n\nMasukkan no rekening : ");
	scanf("%s",no_rekening);
	
	printf("Nilai transaksi : ");
	scanf("%d",&nilai);	
	
	printf("1.Tarik?\n2.Setor?");
	mode=getchar();
	if(mode=='1'){
		setor_kah=0;
	}else if(mode=='2'){
		setor_kah=1;
	}
	saldo =baca_saldo_akhir(no_rekening);
	simpan_saldo_akhir( no_rekening,setor_kah,nilai,saldo);
}

void searchByNoRekeningPrintNama(){
	 printf("\n\n\n\t\t Info Data Nasabah \n\n");
	 
	 char x, no_rekening[10];
	 FILE*ptr;
	 
	 printf("Masukkan No Rekening >> ");
	fgets(no_rekening,MAX_LENGTH, stdin);
	 ptr = fopen (no_rekening,"r");
	 if (ptr==0) {
	 	printf("Data Tidak Valid \n");
	 	exit(1);
	 }
	 printf("\n\n\t\t Data Nasabah \n\n");
	 printf("Transaksi \t Saldo Awal \t Saldo Akhir \n\n");
	 
	 while ((x = fgetc(ptr))!=EOF)
	 printf("%c",x);
	 fclose(ptr);

} 
