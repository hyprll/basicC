#include <stdio.h>
#include <stdlib.h>


int main() {
	
	char line[255];
 	FILE * fpointer = fopen("read.txt", "r");
	
	printf("Enter To Continue\n");
	fgets(line, 255, stdin);
	
	fgets(line, 255, fpointer);
	fprintf(stdout, line );
	
	fgets(line, 255, fpointer);
	fprintf(stdout, line );
	
	fgets(line, 255, fpointer);
	fprintf(stdout, line );
	
	fgets(line, 255, fpointer);
	fprintf(stdout, line );
	
	fgets(line, 255, fpointer);
	fprintf(stdout, line );
	

	fclose(fpointer);
	return 0;
}