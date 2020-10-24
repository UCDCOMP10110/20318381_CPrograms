
#include<stdio.h>
#include<math.h>

int main(void)
{
  double a;
  double b;
  double c;
  double r1;
  double r2;
  double n;


  printf("Please enter the value of coefficient a:\n");
  scanf("%lf", &a);

  printf("Please enter the value of coefficient b:\n");
  scanf("%lf", &b);

  printf("Please enter the value of coefficient c:\n");
  scanf("%lf", &c);

r1 = (-b + sqrt(pow(b, 2) - 4 * a * c))/(2*a);
r2 = (-b - sqrt(pow(b, 2) - 4 * a * c))/(2*a);

n= pow(b, 2) - 4 * a * c;

  if(n > 0)
  {
    printf("The number of real roots is 2\n");
    printf("The value of the first root is %lf\n", r1);
    printf("The value of the second root is %lf\n", r2);
  }
  if(n == 0)
  {
    printf("The number of real roots is 1\n");
    printf("The value of the first root is %lf\n", r1);
  }
  if(n < 0)
  {
    printf("The number of real roots is 0\n");

  }
  return 0;
}
