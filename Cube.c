#include<stdio.h>

int main(void)
{
  double width, Volume;

  printf("Enter here the width:\n");
  scanf("%lf", &width);

Volume= (width * width * width);

printf("%lf cubed equals to %lf ", width, Volume);
return 0;
}
