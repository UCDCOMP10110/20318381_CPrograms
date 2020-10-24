#include<stdio.h>
#include<math.h>
int main(void)
{
    double c;
    double f;

printf("Please enter the temperature in Celsius:\n");
scanf("%lf", &c);

f = (c / 5 * 9) + 32;
printf("%.2lf degrees Celsius is equivalent to %.2lf degrees Fahrenheit\n", c, f);
return 0;
}
