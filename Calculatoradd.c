#include <stdio.h>

int main(void)
{
  int a;
  double c;
  double ans;

  printf("Please enter an integer here\n");
  scanf("%d", &a );
  printf("Please enter a floating number here\n ");
  scanf("%lf", &c);

  ans= a+c;

  printf("%d plus %lf = %lf\n", a,c,ans);

  return 0;

}
