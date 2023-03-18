#include <stdio.h>
int main(){
    int nilai;
    printf("Masukkan nilai : ");
    scanf("%d", &nilai);

    if(nilai >= 75){
    printf("Selamat Anda Lulus\n");
    }else {
    printf("Maaf Anda Tidak Lulus");
    }
 return 0;
}