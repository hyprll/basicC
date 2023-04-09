#include <stdio.h>
#include <stdlib.h>


void tampilkan(float num1, float num2, char opr, float res);
void tambah (float num1, float num2);
void kurang (float num1, float num2);
void bagi (float num1, float num2);
void kali (float num1, float num2);


int main() {
    float n1, n2, rslt;
    int oper;

    printf("Masukkan angka pertama : ");
    scanf("%f", &n1);
    printf("Masukkan anga kedua : ");
    scanf("%f", &n2);
    printf("\n1. +\n2. -\n3.x\n4.:\nPilih menu operasi : ");
    scanf("%d", &oper);

    if(oper==1){
        void tambah(num1, num2);
    }else if(oper==2){
        void kurang(num1, num2);
    }else if(oper==3){
        void kali(num1, num2);
    }else if(oper==4){
        void bagi(num1, num2);
    }else{
        printf("Menu tidak tersedia");
    }

return 0;
}

void tampilkan(float num1, float num2, char opr, float res){
    printf("%.2f %c %.2f = %.2f\n", num1, opr, num2, res);
}

void tambah(float num1, float num2){
    float res = num1+num2;
    tampilkan(num1, num2, '+', res);
}

void kurang(float num1, float num2){
    float res = num1-num2;
    tampilkan(num1, num2, '-', res);
}

void bagi(float num1, float num2){
    float res = num1/num2;
    tampilkan(num1, num2, '/', res);
}

void kali(float num1, float num2){
    float res = num1*num2;
    tampilkan(num1, num2, '*', res);
}
