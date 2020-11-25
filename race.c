#include <stdio.h>
#include <stdlib.h>

#define N 100000

int main(void)
{
  int n;

               /* The number of lengths */
  int x; /* The target length */
  int a[N]; /* The array of available lengths */
  int whichfile=1;

  FILE *fp;

  scanf("%d", &whichfile);

  switch (whichfile) {
     case 1:
        fp = fopen("testcase_small_sorted.txt", "r");
        break;
    case 2:
        fp = fopen("testcase_large_sorted.txt", "r");
        break;
    case 3:
        fp = fopen("testcase_small_nomatch_sorted.txt","r");
        break;
    case 4:
        fp = fopen("hidden_small_sorted.txt","r");
        break;
    case 5:
        fp = fopen("hidden_large_sorted.txt","r");
        break;

  }

  fscanf(fp, "%d", &x);
  fscanf(fp, "%d", &n);

  for (int i=0;i<n;i++)
    fscanf(fp, "%d", &a[i]);

    x *= 10000000;
  fclose(fp);
  // for (int i=0;i<n;i++)
  //   printf("%d ", a[i]);
  /* Now all the input data has been read in
     search for the required pair of lengths... */
  int i = 0;
  int j = n-1;
  while(i < j){
   if(a[i] + a[j] == x) {
     break;
   }
   if(a[i] + a[j] < x){
     i++;
   }
   if(a[i]+a[j] > x){
     j--;
   }
  }

  if(i < j){
    printf("Found: %d + %d == %d",a[i], a[j], x);
  }
  else{
    printf("No matching pair found");
  }

  return 0;
}
