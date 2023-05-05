#include <stdio.h>

int arr[] = {1, 10, 2, 9, 11, 13, 4, 5};
int n = 8;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printData() {
    for (int q = 0; q < n; q++) {
        printf("%d ", arr[q]);
    }
    printf("\n");
}

void bubbleSort() {
    for (int q = 0; q < n - 1; q++) {
        for (int w = 0; w < n - q - 1; w++) {
            if (arr[w] > arr[w + 1]) {
                swap(&arr[w], &arr[w + 1]);
            }
        }
    }
}

int main() {
    printf("Before Sorting: ");
    printData();

    bubbleSort();

    printf("After Sorting: ");
    printData();

    return 0;
}
