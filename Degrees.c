#include<stdio.h>

int main(void)
{
    double c;
    double f;

printf("Please enter the temperature in Fahrenheit:\n");
scanf("%lf", &f);

c = (f-32)*5/(float)9;
printf("%f degrees Fahrenheit is equivalent to %f degrees Celsius\n", f, c);
return 0;
}
