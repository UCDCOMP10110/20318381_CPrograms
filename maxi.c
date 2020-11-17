#include <stdio.h>
#include <stdbool.h>
#define MAX_SIZE 5000

int main(void)
{
  int i, k, N;
  double max;
  double a[MAX_SIZE];
  double threshold;

  int j=0;
  int maxindx;
  double tmp;
  double b[MAX_SIZE];
  FILE *fp;

  printf("Enter number of values to read from floats.txt\n");
  scanf("%d", &N);
  printf("Enter the threshold value\n");
  scanf("%lf", &threshold);
  printf("Enter the value of k\n");
  scanf("%d", &k);
  fp = fopen("floats.txt", "r");
  for (i = 0;i<N;i++)
    {
      fscanf(fp, "%lf", &a[i]);
    }
  fclose(fp);

  /* write your solution here */


  /* Run the outer loop k times, each time around the outer loop
     the (j+1)st smallest value is found and placed in position j
     of the loop */
 int t=0;
for(i=0; i<N;i++){
    if(a[i]<threshold ){
        b[t++]=a[i];
    }
    }
  for (j=0;j<t;j++)
    {
      max = b[j];
      maxindx=j;

      /* the inner loop starts are i=j+1 i.e. it starts at
	 the next element of the array AFTER the position in which
	 the previous smallest value was placed. Therefore it finds
	 the next smallest value, excluding all values already found
	 and stored in a[0],...,a[j]
      */
      for (i = j+1;i<t;i++)
	{
	  if (b[i]>max)
	    {
	      max = b[i];
	      maxindx = i;
	    }
	}
      /* swap a[j] and a[minindx] */
      tmp = b[j];
      b[j] = b[maxindx];
      b[maxindx] = tmp;
    }




  if(t >= k){
  printf("The k=%d largest value in the array that is less than %.5f is %.5f" ,k, threshold, b[k-1]);
}
else
{
    printf("The array does not contain %d numbers less than %.5f",k,threshold);
}

  return 0;
}
