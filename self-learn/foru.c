#include <stdio.h>
#include <math.h>
 


 
char input(){
    char  i_Nama,i_tanggal,i_suka,i_kegiatan;
    char  r_Nama,r_tanggal,r_suka,r_kegiatan;

    // masukkan nama anca: faathir
    // input
    printf("Please input anca's name =");
    scanf("\n %c", & i_Nama);
    printf("Please input birth of anca =");
    scanf("\n %c", & i_tanggal);
    
    
    if(i_Nama == "Anca"){
        printf("Lengkap ");
    }else if(i_Nama == "Pancaran"){
        printf(" Nama lengkap");
    }else{
        printf(" You are zero");
    }
 return 0;
 




 // masukkan tanggal lahir anca jika salah maka km tidak mengenal anca, jika iya tulis kiriman ini 
    /*
    hi kamu stalker yah?
    */

// pilih satu hal yang paling disukai anca
        /* 
            1. kucing
            2. makanan
            3. buku
        */

// jika benar masuk ke pertanyaan selanjutnya jika salah kembali ke pertanyaannya laagi

// Masukkan kegiatan favorit anca
    /*
        1. Workout
        2. Mendengearkan lagu
        3. Baca buku
        4. Makan
    */


// Keluarkan semua yang sudah dijawab dan keluarkan lovenya dengan tulisan






// C program to print the heart star pattern
int main()
{
    // set output size
    int size = 10;
 
    for (int x = 0; x < size; x++)
    {
        for (int y = 0; y <= 4*size; y++)
        {
            double dist1 = sqrt(pow(x - size, 2) + pow(y - size, 2));
            double dist2 = sqrt(pow(x - size, 2) + pow(y - 3*size, 2));
 
            if (dist1 < size + 0.5 || dist2 < size + 0.5) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
 
    for (int x = 1; x < 2*size; x++)
    {
        for (int y = 0; y < x; y++) {
            printf(" ");
        }
 
        for (int y = 0; y < 4*size + 1 - 2*x; y++) {
            printf("*");
        }
 
        printf("\n");
    }
 
    return 0;
}
}