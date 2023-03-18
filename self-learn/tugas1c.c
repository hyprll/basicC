#include <stdio.h>

int main() {

  char operator;
  printf("Choose an operator ['1', '2', '3', '4']: ");
  scanf("%c", &operator);
  
  double num1, num2;
  num1 = 4;
  num2 =5;
  
  // printf("Enter first number: ");
  // scanf("%lf", &num1);
  
  // printf("Enter second number: ");
  // scanf("%lf", &num2);
  
  double result;

  switch(operator) {
    case '1':
      result = num1 + num2;
      break;
    case '2':
      result = num1 - num2;
      break;
    case '3':
      result = num1 / num2;
      break;
    case '4':
      result = num1 * num2;
      break;

    default:
      printf("Invalid Operator");
  }
  
  printf("%.2lf", result);

return 0;
}