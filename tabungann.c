#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NASABAH 100

// Definisi tipe data nasabah
typedef struct {
    char nama[50];
    int no_rekening;
    int saldo;
} Nasabah;

// Fungsi untuk menampilkan menu
void inputan (){
    printf("\n=== MENU ===\n");
    printf("1. Buat akun baru\n");
    printf("2. Tarik tunai\n");
    printf("3. Setor tunai\n");
    printf("4. Lihat saldo\n");
    printf("5. Keluar\n");
    printf("Pilih menu (1-5): ");
}


// Fungsi untuk membuat akun baru
void buat_akun(Nasabah nasabah[], int *jumlah_nasabah) {
    // Cek apakah sudah mencapai batas maksimum
    if (*jumlah_nasabah == MAX_NASABAH) {
        printf("Maaf, jumlah nasabah sudah mencapai batas maksimum.\n");
        return;
    }

    // Input data nasabah baru
    Nasabah baru;
    printf("Masukkan nama lengkap: ");
    fgets(baru.nama, 50, stdin);
    printf("Masukkan nomor rekening: ");
    scanf("%d", &baru.no_rekening);
    printf("Masukkan saldo awal: ");
    scanf("%d", &baru.saldo);
    getchar(); // Mengonsumsi karakter newline dari scanf di atas

    // Simpan data nasabah baru ke dalam array
    nasabah[*jumlah_nasabah] = baru;
    (*jumlah_nasabah)++;

    printf("Akun nasabah berhasil dibuat.\n");
}

// Fungsi untuk mencari indeks nasabah berdasarkan nomor rekening
int cari_nasabah(Nasabah nasabah[], int jumlah_nasabah, int no_rekening) {
    int i;
    for (i = 0; i < jumlah_nasabah; i++) {
        if (nasabah[i].no_rekening == no_rekening) {
            return i;
        }
    }
    return -1;
}

// Fungsi untuk menarik tunai
void tarik_tunai(Nasabah nasabah[], int jumlah_nasabah) {
    int no_rekening, indeks;
    int jumlah_tarik;

    // Input nomor rekening dan jumlah tarik tunai
    printf("Masukkan nomor rekening: ");
    scanf("%d", &no_rekening);
    indeks = cari_nasabah(nasabah, jumlah_nasabah, no_rekening);
    if (indeks == -1) {
        printf("Maaf, nomor rekening tidak ditemukan.\n");
        return;
    }
    printf("Masukkan jumlah tarik tunai: ");
    scanf("%d", &jumlah_tarik);

    // Cek saldo cukup
    if (nasabah[indeks].saldo < jumlah_tarik) {
        printf("Maaf, saldo tidak cukup.\n");
        return;
    }

    // Lakukan penarikan tunai
    nasabah[indeks].saldo -= jumlah_tarik;
    printf("Penarikan tunai berhasil.\n");
}

