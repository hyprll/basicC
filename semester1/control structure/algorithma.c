//1
// start ->input first number say A -> input second number B ->SUM = A+B ->Display SUM -> Stop


#include <stdio.h>

int main(){
    double a,b;
    double sum;

    printf("Inputing A number");
    scanf("\n %lf",&a);

    printf("Inputing B number");
    scanf("\n %lf",&b);

    sum = a+b;
    printf("Hasil dari otputnya adalah %.2lf",sum);

    return 0;
}