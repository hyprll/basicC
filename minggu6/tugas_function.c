#include <stdio.h>

int ActionLoop(int num1, int* math1, int* math2){
    *math1 = num1 * num1;         
    *math2 = 4 * num1;         
}

int main() {
    int num1;
    int math1, math2;
    
    do {   

        printf("\nInput Value of L:\n");
        scanf("%d", &num1);

        ActionLoop(num1, &math1, &math2);

        printf("AREA = %d\n", math1);            
        printf("PERIMETER = %d\n", math2);

    } while(math1, math2 > -1);
    
    return 0; 
}