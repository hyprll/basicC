#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int ActionLoop(int num1, int* math1, int* math2){
    *math1 = 22.0 / 7.0 * num1 * num1;         
    *math2 = 2 * 22.0 / 7.0 * num1;  
}

int main() {
    int num1;
    int math1, math2;
    
    do {

        printf("\nInput Value of R:\n");
        scanf("%d", &num1);     

        ActionLoop(num1, &math1, &math2);

        printf("AREA = %d\n", math1);            
        printf("PERIMETER = %d\n", math2);     
    
    } while(math1, math2 > -1);  
    
    return 0; 
}