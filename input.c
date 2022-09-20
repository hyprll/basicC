#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    char name[50];
    char day[50], month[50], year[50];
    char phone[50];
  
    printf("Enter your Name: ");
    scanf("%s", name);

	printf("Enter day, month and year Like Jan 01, 2004: ");
    scanf("%s %s %s", day, month, year);
    
    printf("Enter your Mobile Phone: ");
    scanf("%s", phone);

    printf("\nMy Name 	: %s\n", name);
    printf("Birth of Date 	: %s %s %s\n", day, month, year);
    printf("My Phone Number : %s\n", phone);
	
    return 0;
}
