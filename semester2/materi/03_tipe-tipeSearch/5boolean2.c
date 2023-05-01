// ini lebih detail penggunaan booleannya

#include <stdio.h>
#include <stdbool.h>

int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    
    // Pencarian dengan operator AND
    int searchNum1 = 3, searchNum2 = 10;
    bool found1 = false, found2 = false;
    for (int i = 0; i < arrSize; i++) {
        if (arr[i] == searchNum1) {
            found1 = true;
        }
        if (arr[i] == searchNum2) {
            found2 = true;
        }
        if (found1 && found2) {
            break;
        }
    }
    if (found1 && found2) {
        printf("Kedua angka ditemukan.\n");
    } else if (found1) {
        printf("Angka %d ditemukan, tetapi angka %d tidak ditemukan.\n", searchNum1, searchNum2);
    } else if (found2) {
        printf("Angka %d ditemukan, tetapi angka %d tidak ditemukan.\n", searchNum2, searchNum1);
    } else {
        printf("Kedua angka tidak ditemukan.\n");
    }
    
    // Pencarian dengan operator OR
    int searchNum3 = 4, searchNum4 = 8;
    bool found3 = false, found4 = false;
    for (int i = 0; i < arrSize; i++) {
        if (arr[i] == searchNum3 || arr[i] == searchNum4) {
            if (arr[i] == searchNum3) {
                found3 = true;
            }
            if (arr[i] == searchNum4) {
                found4 = true;
            }
        }
    }
    if (found3 || found4) {
        if (found3 && found4) {
            printf("Kedua angka ditemukan.\n");
        } else if (found3) {
            printf("Angka %d ditemukan, tetapi angka %d tidak ditemukan.\n", searchNum3, searchNum4);
        } else {
            printf("Angka %d ditemukan, tetapi angka %d tidak ditemukan.\n", searchNum4, searchNum3);
        }
    } else {
        printf("Kedua angka tidak ditemukan.\n");
    }
    
    return 0;
}
