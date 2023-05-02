#include <stdio.h>

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
        else if (arr[i] > target) {
            // If the current element is greater than the target,
            // we can stop searching since the list is sorted.
            break;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 7;

    int index = linearSearch(arr, n, target);
    if (index != -1) {
        printf("Target element %d found at index %d\n", target, index);
    }
    else {
        printf("Target element %d not found in the list\n", target);
    }

    return 0;
}
