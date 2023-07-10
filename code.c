#include <stdio.h>

int main() {
  double Number1, Number2;
  char Operator, flushed;
  // asking the user to enter first number
  printf("Enter equation (a '+'/'-'/'*'/'/' b): ");
  scanf("%lf %c %lf", &Number1, &Operator, &Number2);
  // operation
  switch (Operator) {
  case '+': printf("%lf + %lf = %lf\n", Number1, Number2, Number1 + Number2);
    break;
  case '-': printf("%lf - %lf = %lf\n", Number1, Number2, Number1 - Number2);
    break;
  case '*': printf("%lf * %lf = %lf\n", Number1, Number2, Number1 * Number2);
    break;
  case '/': printf("%lf / %lf = %lf\n", Number1, Number2, Number1 / Number2);
    break;
  default: printf("An error occured in the operator you entered.\n");
  }
  return 0;
}