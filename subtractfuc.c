
#include<stdio.h>
#include<math.h>
int subtract_num(int number1, int number2);
int main(void){

int a;
int b;
printf("Please enter the value of A: ");
scanf("%d", &a);
printf("Please enter the value of B: ");
scanf("%d", &b);
int ret;
ret = subtract_num(a , b);
printf("%d subtracted by %d = %d", a,b,ret);
return 0;
}

int subtract_num(int number1, int number2){

int rets ;
rets =number1 - number2 ;

return rets;
}
