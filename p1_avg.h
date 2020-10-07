#include <stdio.h>

void main_avg(void) {
  int n;
  printf("Enter 3 or 4:\n");//I added this instruction for the user to know what to do
  scanf("%d", &n);

  if(n == 3) {
    double x1, x2, x3, Xt;
    printf("Enter 3 numbers:\n");//This tells the user how many numbers to enter
    scanf("%lf %lf %lf", &x1, &x2, &x3);
    printf("The product is: %.2lf\n", (x1+x2+x3) / 3);;
  } else {
    double x1, x2, x3, x4;
    printf("Enter 4 numbers:\n");// tells the user to input 4 numbers
    scanf("%lf %lf %lf %lf", &x1, &x2, &x3, &x4);
    printf("The product is: %.2lf\n", (x1+x2+x3+x4) / 4);// at the end I just modify it just alittle to print to the user the product of the numbers
  }
}
