#include <stdio.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int ActionLoop(int num1, int num2, int* Nsum){
    *Nsum = num1 + num2; 
}

int main() {
    int num1, num2;
    int sum;
    
    do {
    
        printf("\nInput Value of A:\n");
        scanf("%d", &num1);
        printf("\nInput Value of B:\n");
        scanf("%d", &num2);

        ActionLoop(num1, num2, &sum);

        printf("SUM = %d\n", sum);      
    
    } while(sum > -1);
    
    return 0; 
}