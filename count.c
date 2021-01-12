#include <stdio.h>

#define MAX_SIZE 5000
void count_occurences(int n, int a[]);
// We just created the function above and below shows what it actually does
void count_occurences(int n, int a[]){
int i, j;
  int count=0;
  int element =0;
  int tempelement;
  int tempcount=0;
  
for(i=0; i<n;i++){
     tempelement = a[i];//The element we are looking for//
     tempcount =1;//how many times it appears//
    for(j=i+1;j<n; j++){
       if(a[j] == tempelement) {
          tempcount ++;
          if(tempcount > count){
            element = tempelement;
            count = tempcount;
              
          }
        
          
       }
       
        
    }

  /* fill in your answer here ... */
  if(count > n/2)
  printf("%d appears more than %d times in the array.", element, n/2);
else{
    printf("No value appears more than %d times in the array.", n/2);
}
 return;
}
}

int main(void)
{
  int n;
  int a[MAX_SIZE];
  int i, j;
  int count=0;
  int element =0;
  int tempelement;
  int tempcount=0;
  
  scanf("%d",&n);
  for (i=0;i<n;i++)
    {
      scanf("%d", &a[i]);
    }
    count_occurences(n, a);
}
