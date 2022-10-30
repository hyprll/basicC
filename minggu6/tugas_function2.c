#include <stdio.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int ActionLoop(int num1, int num2, int num3, int* math1, int* math2){
    int bils = (num1 + num2 + num3) / 2.0;

    *math1 = sqrt(bils * (bils- num1) * (bils - num2) * (bils - num3));         
    *math2 = num1 + num2 + num3;   
}

int main() {
    int num1, num2, num3;
    int math1, math2;
    
    do {
        printf("\nInput Value of A:\n");
        scanf("%d", &num1);
        
        printf("\nInput Value of B:\n");
        scanf("%d", &num2);

        printf("\nInput Value of C:\n");
        scanf("%d", &num3);        

        ActionLoop(num1, num2, num3, &math1, &math2);

        printf("AREA = %d\n", math1);            
        printf("PERIMETER = %d\n", math2);      

    } while(math1, math2 > -1);

    return 0; 
}