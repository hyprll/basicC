#include <stdio.h>
#include <stdbool.h>

int main() {
    int num1 = 5, num2 = 10;
    bool condition1 = (num1 == 5 && num2 == 10);
    bool condition2 = (num1 == 5 || num2 == 5);
    
    if (condition1) {
        printf("Kondisi 1 terpenuhi\n");
    } else {
        printf("Kondisi 1 tidak terpenuhi\n");
    }
    
    if (condition2) {
        printf("Kondisi 2 terpenuhi\n");
    } else {
        printf("Kondisi 2 tidak terpenuhi\n");
    }
    
    return 0;
}
