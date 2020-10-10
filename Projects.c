#include<stdio.h>

int main(void)
{
  /* declare some varibles*/
  int f;

  printf("Enter in an integer here:   ");
  scanf("%d", &f);
  /*This will help the user understand what will happen with the integer*/

  printf("This number will be multiplied by 7\n");

  printf("This integer multiplied by seven is %d \n", f*7);
  return 0;


}
