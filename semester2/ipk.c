/*

        Buatlah algoritma dan flowchart dari dasar pengambilan sks mahasiswa dengan acuan sbb:

        No Syarat IP Aksi/ Solusi

        1 .3,01 – 4,00 sks maksimal 24 sks

        2. 2,51 – 3,00 sks maksimal 22 sks

        3. 2,01 – 2,50 sks maksimal 18 sksclea

        4. 0,00 – 2,00 sks maksimal 15 sks

*/

#include <stdio.h>

int main(){
    double ipk,sks;
    
    printf("Masukkan IPK : ");
    scanf("%lf", &ipk);

    if (ipk >= 3.01 && ipk <= 4 ){
        printf("Maksimal 24 SKS");
        }else if (ipk >= 2.51 && ipk <= 3.00){
            printf("Maksimal 22 SKS");
        }else if (ipk >= 2.01 && ipk <= 2.50){
            printf("Maksimal 20 SKS");
        }else{
            printf("Belajar lagi ya");
        }

return 0;
}