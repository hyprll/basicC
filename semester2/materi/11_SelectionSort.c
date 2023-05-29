#include <stdio.h>

void selection(int arr[], int n){
    int i, position,n;
    for(i=0; i<(n-1); i++){
        position = i;
    }
    for(j=i+1; j<n; j++){
        if (arr[position]> arr[j]){
            position = j;
        }
    if(position != i){
        swap = arr[i];
        arr[i] = arr[position];
        arr[position] = swap;
    }

    }
}