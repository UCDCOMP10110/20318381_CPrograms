#include<stdio.h>

int main(void)
{
  double r, volume;
  double PI = 3.14159;

  printf("Please enter in the Radius:\n");
  scanf("%lf", &r);

  volume= 4 * PI * ((r * r * r)/3);

  printf("The Volume of the sphere is %lf\n", volume);
  return 0;
}
