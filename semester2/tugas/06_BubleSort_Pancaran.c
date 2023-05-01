/*
	Nama : Pancaran Ratna M
	NIM : 0102522027
	IF 22 A
*/ 
 
/* Tuliskan proses pengurutan dengan algoritma Bubble sort seperti pada materi kuliah dari array berikut
 6  5  3  7  4  2  3  1
*/ 

#include <stdio.h>

int main() {
  int arr[] = {6, 5, 3, 7, 4, 2, 3, 1};
  int n = sizeof(arr)/sizeof(arr[0]);

  printf("Sebelum diurutkan:\n");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  // Proses pengurutan dengan Bubble Sort
  for (int i = 0; i < n-1; i++) {
    for (int j = 0; j < n-i-1; j++) {
      if (arr[j] > arr[j+1]) {
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }

  printf("Setelah diurutkan:\n");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}
