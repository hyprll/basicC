#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int ActionLoop(int num1, int num2, int* math1, int* math2){
    *math1 = num1 * num2;         
    *math2 = 2 * (num1 + num2);  
}

int main() {
    int num1, num2;
    int math1, math2;
    
    do {
        printf("\nInput Value of L:\n");
        scanf("%d", &num1);
        printf("\nInput Value of B:\n");
        scanf("%d", &num2);    

        ActionLoop(num1, num2, &math1, &math2);   

        printf("AREA = %d\n", math1);            
        printf("PERIMETER = %d\n", math2);          
    } while(math1, math2 > -1);

    return 0; 
}