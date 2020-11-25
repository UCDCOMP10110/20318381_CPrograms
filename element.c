#include<stdio.h>
#define MAX_SIZE 5000


int main(void){
int tempcount=0;
int tempelement;
int element;
int count=0;
int N;
int i, j;
int a[MAX_SIZE];
for(i=0;i<N;i++){
  tempelement = a[i];//These are temporary elements looking at each element and how frequent they come up//
  tempcount = 1;     // Counting up the frequency of the number//
  for(j = i+1; j < N; j++){ //Checking the rest of the array for the number//
  if(a[j] == tempelement){
    tempcount++;// if found count is incremented//
  }
  if(tempcount > count){// updates count and element//
    count = tempcount;
    element = tempelement;
  }
}
}
  if(count > N/2)
  printf("%d appears more than %d times in the array.", element, N/2);
  else{
      printf("No value appears more than %d times in the array.", N/2);
  }


  return 0;
}
