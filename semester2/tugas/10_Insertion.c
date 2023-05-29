// // ini adalah insertion

// #include <stdio.h>

// void printArray(int arr[], int size){
//     for (int i = 0; i < size; i++){
//         printf("%d", arr[i]);
// }
// printf("\n");
// }

// void insertionSort(int arr[], int size){
//     for (int step = 1; step < size ; step++ ){
//         int key = arr[step];
//         int j = step - 1;
//         // compare with left side til the element smaller than it's found
//         // For descending order, change key<array[j] to key>array[j].
//         // descending => menurun
//         // ascending => menaik
//         while (key < arr[j] && j >= 0){
//             /* code */
//             arr[j+1] = arr[j];
//             --j;
//         }
//          array[j + 1] = key;
//     }
// }
 
// int data = {10,7,6,5,2};
// int size = sizeof(data) / sizeof(data[0]);
// insertionSort(data,size);
// printf("Inserted Data");
// printArray(data,size);









