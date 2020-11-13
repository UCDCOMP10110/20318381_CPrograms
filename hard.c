#include <stdio.h>

#define MAX_SIZE 100

int main(void)
{
  int a[MAX_SIZE];
  int n;
  int i;
  int e=0;
  int s=0;
  int sum = 0;
  int j;
  int max = -1000;
  /* read in the array */
  scanf("%d", &n);
  if(n == 0){
     printf("Largest sum is 0 obtained from the subsequence [ ]");
     return 0;
  }
  for (i=0;i<n;i++){
    scanf("%d", &a[i]);
  }
  for(i = 0; i < n; i++){
    sum = 0;
      for(j = i; j < n; j++){
          sum += a[j];
          if(sum > max){
          max = sum;
          s = i;
          e = j;

        }

      }
  }
      printf("Largest sum is %d obtained from the subsequence [ ", max);
      for(i = s; i <= e; i++){
          printf("%d ", a[i]);

      }
      printf("]");





  return 0;
}
