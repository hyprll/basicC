#include <stdio.h>

int linearSearch(int arr[], int n, int x) {
   int i = 0;
   arr[n] = x; // menambahkan sentinel di akhir array
   while (arr[i] != x) {
      i++;
   }
   if (i < n) {
      return i; // mengembalikan indeks jika nilai ditemukan
   }
   return -1; // mengembalikan -1 jika nilai tidak ditemukan
}

int main() {
   int arr[] = {2, 5, 3, 7, 4, 8};
   int n = sizeof(arr) / sizeof(arr[0]);
   int x = 7;
   int result = linearSearch(arr, n, x);
   if (result == -1) {
      printf("Nilai tidak ditemukan\n");
   } else {
      printf("Nilai ditemukan di indeks %d\n", result);
   }
   return 0;
}

/*  Fungsi linearSearch menerima tiga argumen: array arr, ukuran array n, dan nilai yang dicari x.
Sentinel ditambahkan ke array dengan mengisi elemen terakhir dengan nilai x.
Pencarian dilakukan dengan mengiterasi seluruh elemen array sampai nilai yang dicari ditemukan atau sampai elemen terakhir (sentinel) dijangkau.
Jika nilai ditemukan, fungsi mengembalikan indeks elemen yang sesuai.
Jika nilai tidak ditemukan, fungsi mengembalikan -1.
Di dalam fungsi main, array arr diinisialisasi dengan beberapa nilai, kemudian fungsi linearSearch dipanggil dengan argumen yang sesuai.
Hasil pencarian disimpan dalam variabel result, yang kemudian dicetak ke layar dengan menggunakan fungsi printf.

*/ 