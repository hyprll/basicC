#include <stdio.h>

int binarySearch(int arr[], int start, int end, int x) {
   if (end >= start) {
      int mid = start + (end - start) / 2;
      if (arr[mid] == x) return mid;
      else if (arr[mid] > x) return binarySearch(arr, start, mid - 1, x);
      else return binarySearch(arr, mid + 1, end, x);
   }
   return -1;
}

int main() {
   int arr[] = {1, 3, 5, 7, 9, 11, 13};
   int n = sizeof(arr)/sizeof(arr[0]);
   int x = 7;
   int result = binarySearch(arr, 0, n - 1, x);
   if (result == -1) printf("Element not found");
   else printf("Element found at index %d", result);
   return 0;
}
