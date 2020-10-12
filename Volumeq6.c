#include<stdio.h>

int main(void)
{
  double width, height, depth, Volume;

/*These statements below will ask the user what to input*/

  printf("Enter here the width:\n");
  scanf("%lf", &width);
  printf("Enter the height:\n");
  scanf("%lf", &height);
  printf("Enter the depth:\n");
  scanf("%lf", &depth);

/*This will help us retrieve the answer*/

Volume= (width * height * depth);

printf("The volume of this shape is:%lf\n",  Volume);
return 0;

}
