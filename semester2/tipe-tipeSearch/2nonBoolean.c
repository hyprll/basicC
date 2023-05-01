#include <stdio.h>

int linear_search(int arr[], int n, int key) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; // Mengembalikan indeks jika ditemukan
        }
    }
    return -1; // Mengembalikan -1 jika tidak ditemukan
}

int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 7;
    int index = linear_search(arr, n, key);
    if (index == -1) {
        printf("Elemen tidak ditemukan.\n");
    } else {
        printf("Elemen ditemukan pada indeks %d.\n", index);
    }
    return 0;
}
/*
    Pada contoh di atas, fungsi linear_search melakukan pencarian linier pada array arr dengan panjang n dan mencari elemen dengan nilai key. 
    Jika elemen ditemukan, fungsi mengembalikan indeks elemen tersebut dalam array. Jika elemen tidak ditemukan, fungsi mengembalikan -1.
    Dalam program utama, array arr diinisialisasi dengan nilai {1, 3, 5, 7, 9}, dan nilai key diatur ke 7.
    Fungsi linear_search kemudian dipanggil untuk mencari nilai 7 pada array arr. Jika nilai 7 ditemukan,
    program mencetak pesan "Elemen ditemukan pada indeks x." di mana x adalah indeks elemen yang ditemukan. Jika nilai 7 tidak ditemukan, program mencetak pesan "Elemen tidak ditemukan."

*/ 