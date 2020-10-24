#include<stdio.h>

int main(void)
{
  /*These are the variables that will contain data*/
    double e;
    double ans;

 printf("Please enter the amount in Euros:\n");
 scanf("%lf", &e);
/*This is the formula*/
 ans = e * 0.8;
/*The answer is printed below*/
 printf("%.2lf Euro is equivalent to %.2lf pounds sterling", e, ans);
 return 0;
}
