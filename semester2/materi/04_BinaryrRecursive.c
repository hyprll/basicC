#include <stdio.h>

int binarySearch(int arr[], int n, int x) {
   int start = 0, end = n-1;
   while (start <= end) {
      int mid = (start + end) / 2;
      if (arr[mid] == x) return mid;
      else if (arr[mid] < x) start = mid + 1;
      else end = mid - 1;
   }
   return -1;
}

int main() {
   int arr[] = {1, 3, 5, 7, 9, 11, 13};
   int n = sizeof(arr)/sizeof(arr[0]);
   int x = 7;
   int result = binarySearch(arr, n, x);
   if (result == -1) printf("Element not found");
   else printf("Element found at index %d", result);
   return 0;
}
