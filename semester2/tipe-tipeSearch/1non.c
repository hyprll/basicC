//  Pencarian linear tanpa sentinel dan tanpa Boolean dalam bahasa c

#include <stdio.h>

int linear_search(int arr[], int size, int key) {
    int i = 0;
    while (i < size && arr[i] != key) {
        i++;
    }
    if (i == size) {
        return -1;  // key not found
    }
    else {
        return i;   // index of key in array
    }
}

int main() {
    int arr[] = { 5, 2, 9, 1, 7 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 9;
    int result = linear_search(arr, size, key);
    if (result == -1) {
        printf("Key not found\n");
    }
    else {
        printf("Key found at index %d\n", result);
    }
    return 0;
}


/*
    Fungsi linear_search menggunakan perulangan while untuk mencari nilai key pada array arr.
    Jika nilai key tidak ditemukan, maka fungsi mengembalikan -1. Jika nilai key ditemukan, 
    maka fungsi mengembalikan indeks array di mana nilai key tersebut ditemukan.
    Di dalam fungsi main, kita membuat array arr dengan isi { 5, 2, 9, 1, 7 }. 
    Kemudian kita memanggil fungsi linear_search dengan parameter array arr, ukuran array size dan nilai key yang ingin dicari, yaitu 9.
     Jika nilai key ditemukan, maka kita mencetak pesan "Key found at index X", di mana X adalah indeks di mana nilai key ditemukan. Jika nilai key tidak ditemukan, maka kita mencetak pesan "Key not found".


*/