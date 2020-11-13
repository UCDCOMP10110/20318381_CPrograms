#include<stdio.h>


#define n 200

int main(void){
int N = 0;
int a[n];
int i= 0;

scanf("%d", &N);
int tmp = N;
while((N != 0)){


   a[i]= N%2;
   N = N/2;
  i++;

}
int j;

printf("%d in base 2 is ", tmp );
if(tmp == 0){
    printf("0");
}
for(j= i - 1;j >= 0; j--){

   printf("%d", a[j]);

}

return 0;
}
