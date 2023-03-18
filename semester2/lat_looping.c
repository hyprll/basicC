#include <stdio.h>

int main (){
	int ulang, jumlah;
	jumlah=0; 

	printf("Tulis Saya akan rajin belajar, berapa kali : ");
	scanf("%d", &ulang);

	for(jumlah=0; jumlah <ulang; jumlah++){
		printf("Saya akan rajin belajar \n");
	}
}