#include<stdio.h>
# define MAX_STR_LEN 50
int main ( void )
{
char intstr [ MAX_STR_LEN +1] = " 12879 ";
char ch;
int value =0 , i=0;
ch = intstr [0];
while (ch != '\0')
{
value = 10* value + (ch - '0') ;
i++;
}
printf (" The integer value is %d\n", value ) ;
return 0;
}
