#include <stdio.h>


// secara kasar 
int main(){
    for (i =0; i<n-1; i++){
        int main = i;
        for (j =i+1; j<n; j++){
            if (a[i] < a[min]){
                min = j;
            }
        }
        if(min!= i){
            swap(a[i], a[min]);
        }
    }
}