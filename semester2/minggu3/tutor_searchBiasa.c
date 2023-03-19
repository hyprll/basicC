#include <stdio.h>

int search(int arr[], int n_data, int search){
    for (int i = 0; i < n_data; i++)
        if (arr[i]== search){
            printf("Data Found");
            return arr[i];
        }else{
            printf("No match \n");
    }
    return 0;
}

int main(){
    int arr[15] = {5,10,10,11,12,8,9};
    int found;
    found = search (arr, 7,5);
    return 0;
}