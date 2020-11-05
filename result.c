#include<stdio.h>
#include<string.h>
#include<math.h>


int main(void){
int i;
int n;
int a = 1;/*a equates to p_1*/
int b = 0;/*b equates to 2(p_2)*/
int result=0;


/*This is where the amount needs to be entered*/
printf("Enter how many pell numbers to print:\n");
scanf("%d", &n);

/*This loops around until n is satisfied*/
for(i=1; i<=n; i++){
/*This is where the result will be printed*/
printf("%d ", result);
 result= a + b*2;
 a = b;/*This basically means that the value b is giving a a value to store*/
 b =result;/*Result is given the value b*/

}
return 0;
}
