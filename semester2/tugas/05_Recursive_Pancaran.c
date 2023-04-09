/*
	Nama : Pancaran Ratna M
	NIM : 0102522027
	IF 22 A
*/ 

#include <stdio.h>
#include <stdlib.h>

int Fungsi_Rekrusif(int n){
	
if(n!=0) {
	return n+Fungsi_Rekrusif(n-1);
}else {
	return n;
}}


int Fungsi_Interatif(int N){
	int i;
	int sum=0;
	
	for(i=0;i<=N;i++){
		sum=sum+i;
	}
	return sum;
}


int main(int argc, char *argv[]) {
	int n;
	
	printf("Masukkan angka yang ingin di jumlahkan : ");
	scanf("%d", &n);
	
	printf("\n Rekrusif \n");
	printf("Jumlahnya adalah = %d \n",Fungsi_Rekrusif(n));
	
	printf("\n Interatif \n");
	printf("Jumlahnya adalah = %d",Fungsi_Interatif(n));
	
	return 0;
}