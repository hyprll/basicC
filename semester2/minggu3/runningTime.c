#include <stdio.h>
#include <time.h>

void myFunction() {
    // The function to be measured
}

int main() {
    clock_t start, end;
    double cpu_time_used;

    // Measure the start time
    start = clock();

    // Call the function to be measured
    myFunction();

    // Measure the end time
    end = clock();

    // Calculate the CPU time used
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    printf("The function took %f seconds to execute.\n", cpu_time_used);

    return 0;
}
