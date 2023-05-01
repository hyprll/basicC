#include <stdio.h>




int main(){
    double paket;
  
    printf("Pilih Paket 1-2  : ");
    scanf("%lf", &paket);

    if (paket == 1){
        printf("Anda memilih Paket A");
    }else if(paket == 2 ){
         printf("Anda memilih Paket B");
    }else{
         printf("Tidak memilih paket");
    }

return 0;
}
