#include <stdio.h>
#include <stdlib.h>

/* static memory di luar semua definisi fungsi 
   ruang linkupnya global dikenal di semua fungsi dalam file ini
*/
int count =0;

int tambah(int a, int b) { 
	count++;
	return a + b ; 
}
int kurang(int a, int b) { 
	count++;
	return a - b ; 
}
void hitung(){
	/* static memory di dalam definisi fungsi ini
   ruang linkupnya local dikenal di  fungsi ini saja,
   tapi merujuk pada memory yang SAMA pada setiap CALLING fungsi ini
	*/
	static int count2=0;
	int x,y;
	do {
		printf("masukan dua bilanagan:");
		scanf("%d %d",&x,&y);
		count2++;
		printf("tambah %d \n", tambah(x,y));
		printf("kurang %d \n", kurang(x,y));
	}while(x!=0);
	printf(" banyak operasi %d (static variable global)\n",count);
	printf(" banyak loop %d (static variable local di fungsi ini saja)\n\n",count2);
}

void dynamic(){
	int var;
	int *p, *a;
	var=10;
	p= &var;
	a =(int*)malloc(sizeof(int));
	*a=var;
	
	printf("nilai yang ditunjuk oleh p (gunkan operator*) adalah  %d sama dengan nilai var \n",*p);
	printf("yang disimpan oleh variable pointer p adalah adres %x\n",p);
	printf("p sama dengan adres dari var %x\n\n", &var);
	
	
	printf("nilai yang ditunjuk oleh a (gunkan operator*) adalah  %d sama dengan nilai var \n",*a);
	printf("yang disimpan oleh variable pointer a adalah adres %x\n",a);
	printf("a TIDAK sama dengan adres dari var %x\n\n", &var);	
}
void swap(int *a, int *b){
	int tmp;
	tmp=*a; 	// simpan nilai a
	*a=*b;  	// var a digantimenjadi nilai b
	*b= tmp;  	// var b digantimenjadi nilai a yang awal
	printf(" setelah ditukar di dalam fungsi swap nilai a=%d  nilai b = %d\n",*a,*b);
}
void swap_salah(int a, int b){
	int tmp;
	tmp=a; 	// simpan nilai a
	a=b;  	// var a digantimenjadi nilai b
	b= tmp;  	// var b digantimenjadi nilai a yang awal
	printf(" setelah ditukar di dalam fungsi swap nilai a=%d  nilai b = %d\n",a,b);	
}
int main(int argc, char *argv[]) {
	dynamic();
	//hitung();
	//hitung();
	int x=10,y=5;
	printf(" sebelum ditukar di luar fungsi swap nilai a=%d  nilai b = %d\n",x,y);
	swap(&x,&y);
	printf(" setelah ditukar di luar fungsi swap nilai a=%d  nilai b = %d\n\n",x,y);	
	x=10;
	y=5;
	printf(" sebelum ditukar di luar fungsi swap nilai a=%d  nilai b = %d\n",x,y);	
	swap_salah(x,y);
	printf(" setelah ditukar di luar fungsi swap nilai a=%d  nilai b = %d\n",x,y);
	return 0;
}