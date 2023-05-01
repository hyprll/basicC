#include <stdio.h>

int linearSearch(int arr[], int n, int x) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 30;
    int result = linearSearch(arr, n, x);
    if (result == -1) {
        printf("Element not found\n");
    } else {
        printf("Element found at index %d\n", result);
    }
    return 0;
}

/* Fungsi linearSearch menerima tiga parameter: array arr, jumlah elemen n, dan elemen yang ingin dicari x.
Fungsi ini melakukan iterasi pada array arr dan membandingkan setiap elemen dengan x. 
Jika elemen yang dicari ditemukan, maka fungsi mengembalikan indeks elemen tersebut.
Jika tidak ditemukan, maka fungsi mengembalikan nilai -1.
Di dalam fungsi main, kita membuat array arr dengan elemen {10, 20, 30, 40, 50}. 
Kemudian kita mencari elemen 30 di dalam array dengan memanggil fungsi linearSearch. 
Jika elemen 30 ditemukan, maka kita mencetak indeks elemen tersebut. Jika tidak ditemukan, maka kita mencetak "Element not found".

*/