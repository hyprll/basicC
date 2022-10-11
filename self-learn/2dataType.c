#include <stdio.h>

/*
	int  4byte | %d for printing
	double  8byte | %lf for printing
	float  4byte | %f for printing
	char  1byte | %c for printing

*/

int main(){
	char charachterName[] = "Johan";
	int charAge = 22;
	double number = 12.45;
	float number2 = 10.9f;
 

	printf("My name is %s \n",charachterName);
	printf("My age is %d \n",charAge);

  	printf("Double = %lf \n", number); //double and float 
	printf("Number = %.2lf \n",number); // mengambil koma tp terformat bisa ambil sampe brp koma

	// Float and Number
	printf("Number = %.2lf \n",number2); // ga bakal ngebaca 10.900000 
	printf("Float  = %f \n", number2); // Float tipe ini membaca f
	 printf("Float = %.1f \n", number2);  // tidak membaca f

	
	//Eksponen
	double number3 = 5.5e6;
	printf("Eksponen = %lf \n",number3);
	

	// Charachter
	// char nama = 'anca'; // ini cm bisa ngeprint a
	char nama2 = 'b';


	// printf("Charachter = %c \n",nama);
	printf("Charachter of anca is %c \n",nama2);

	//numeric value of characters
	char character = 'z';
  	printf("%c", character);
 	printf("  %d", character);

	//akan error jika
	// int a = 10; float a = 10;
	// printf("%d",a);
	

	return 0;
}
