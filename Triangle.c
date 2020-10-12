#include<stdio.h>
#include<math.h>



int main(void)
{
double h, b, area;


printf("Enter base of Triangle: ");
scanf("%lf", &b);
printf("Please enter the height of Triangle: ");
scanf("%lf", &h);

area= (h * b)/2;


printf("The area of a Triangle is %lf\n", area);
return 0;

}
