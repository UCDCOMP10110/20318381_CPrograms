#include<stdio.h>

int main(void)
{
  int i;
  int max = 200;
  for(i=1; i < max; i+=2)
  {
    printf("%d", i);
  }
  printf("\n");
  return 0;
}
