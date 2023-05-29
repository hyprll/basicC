// SELECTION SEARCH
#include <stdio.h>

int main(){
    int a[] = {4, 3, 2, 1, 5};
    int len = 5;

    for (int i = 0; i<len-1; i++){
        int min_pos = i;
        for (int j = i+1; j<len; j++)
            if (a[j] < a[min_pos]) min_pos = j;

        if (min_pos != i){
            int temp = a[i];
            a[i] = a[min_pos];
            a[min_pos] = temp;
        }
    }

    for(int i = 0; i < len; i++)
        printf("a[%d] = %d\n", i, a[i]);
    
    return 0;
}