#include<stdio.h>
# define MAX_MSG_LEN 12
int main ( void )
{
char msg[ MAX_MSG_LEN +1];
char ch;
int len ;
do{
ch = getchar () ; 
} while (ch == ' ' || ch == '\t' || ch == '\n');

len = 0;
while (len < MAX_MSG_LEN &&
ch != ' ' && ch != '\t'  && ch != '\n')

{
msg[len] = ch;
len = len +1;
ch = getchar () ;
}

msg[len ] = '\0';
printf (" Message is : %s\n", msg) ;
return 0;
}