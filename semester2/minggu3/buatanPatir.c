#include <stdio.h>
#include <string.h>

int main() {
    char nama1[30];
    char nama2[30];

    printf("TES KECOCOKAN NAMA PASANGAN\n");
    printf("Masukkan nama laki2 : ");
    scanf("%s", nama1);
    printf("Masukkan nama perempuan : ");
    scanf("%s", nama2);

    if(strcmp(nama1, "faathir")== 0 && strcmp(nama2, "anca")== 0){
        printf("KALIAN COCOK BANGET :)");
    }else{
        printf("GA COCOK FIX");
    }

return 0;

}
